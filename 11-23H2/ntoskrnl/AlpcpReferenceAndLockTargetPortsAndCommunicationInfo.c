/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140739CE0
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x140715948 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140739AC0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1403379A0 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1407DB058 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  _DWORD *v7; // rdi
  _DWORD *v8; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v6 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx(v4 - 16, 0LL);
  if ( v6 == 2 )
  {
    v7 = *(_DWORD **)v4;
    v8 = *(_DWORD **)(v4 + 8);
  }
  else if ( v6 == 1 )
  {
    v7 = *(_DWORD **)v4;
    v8 = *(_DWORD **)v4;
  }
  else
  {
    v7 = *(_DWORD **)(v4 + 16);
    v8 = v7;
  }
  if ( v7 && !ObReferenceObjectSafe((__int64)v7) )
    v7 = 0LL;
  if ( v8 && !ObReferenceObjectSafe((__int64)v8) )
    v8 = 0LL;
  if ( v7 && v8 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)(v7 + 88), 0LL);
    if ( v8 != v7 )
      ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 88), 0LL);
    if ( (v7[104] & 0x20) == 0 && (v8[104] & 0x20) == 0 )
    {
      *a2 = v7;
      result = 0LL;
      *a3 = v8;
      return result;
    }
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v7, v8);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 - 16));
    KeAbPostRelease(v4 - 16);
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  return 3221225527LL;
}
