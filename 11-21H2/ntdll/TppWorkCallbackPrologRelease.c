/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x180022278
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x180020330 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180021330 (TppSimplepExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180069E70 (TppWorkpExecuteCallback.c)
 * Callees:
 *     TpPostTask @ 0x18001B374 (TpPostTask.c)
 *     TppCleanupGroupMemberRelease @ 0x1800214A0 (TppCleanupGroupMemberRelease.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180022458 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     LdrLockLoaderLock @ 0x1800844D0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180085240 (LdrUnlockLoaderLock.c)
 *     TppWorkCancelPendingCallbacks @ 0x18008CF20 (TppWorkCancelPendingCallbacks.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180124584 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r12d
  __int64 v9; // rcx
  __int64 v10; // r8
  signed __int32 v11; // eax
  __int64 v12; // rdx
  int v13; // ebp
  int v14; // esi
  unsigned __int32 v15; // eax
  signed __int32 v16; // ett
  int v18; // eax
  __int64 v19; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 136);
  v5 = 0;
  v21 = 0LL;
  if ( v4 )
    LdrLockLoaderLock(0LL, 0LL, &v21);
  _m_prefetchw((const void *)(a2 + 232));
  LODWORD(v9) = *(_DWORD *)(a2 + 232);
  v10 = 1LL;
  do
  {
    v11 = v9;
    v12 = (unsigned int)v9 >> 1;
    if ( (unsigned int)v9 >> 1 )
    {
      v12 = v9 & 1 | (unsigned int)(2 * v12 - 2);
      v13 = 1;
      LODWORD(v9) = v12;
      v14 = 1;
      if ( (unsigned int)v12 >= 2 )
        goto LABEL_7;
    }
    else
    {
      v13 = 0;
    }
    v14 = 0;
    LODWORD(v9) = v9 | 1;
LABEL_7:
    v16 = v11;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v9, v11);
    v9 = v15;
  }
  while ( v16 != v15 );
  if ( v4 )
  {
    if ( v13 )
    {
      if ( (int)LdrAddRefDll(0LL, v4) < 0 )
      {
        v13 = 0;
        v14 = 0;
        v5 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v4;
      }
    }
    LdrUnlockLoaderLock(0LL, v21);
    if ( v5 )
    {
      TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL);
      TppWorkCancelPendingCallbacks(a2);
    }
  }
  if ( v14 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v12, v10, a4) )
      v19 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v19 = 2147353478LL;
    if ( *(_BYTE *)v19 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a2 + 144),
        a2 + 200,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TpPostTask(a2 + 200, *(_QWORD *)(a2 + 144), *(unsigned int *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    LOBYTE(v18) = TppCleanupGroupMemberRelease(a2, 0LL);
    if ( v18 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v13 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, a2);
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    return 0LL;
  }
}
