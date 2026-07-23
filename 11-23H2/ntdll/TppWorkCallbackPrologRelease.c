/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x18004EB28
 * Callers:
 *     TppExecuteWaitCallback @ 0x18004E764 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18004E890 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x18004E980 (TppSimplepExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x1800627F0 (TppWorkpExecuteCallback.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrAddRefDll @ 0x18002D240 (LdrAddRefDll.c)
 *     TpPostTask @ 0x1800352FC (TpPostTask.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18004EDF0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EE60 (RtlSetThreadSubProcessTag.c)
 *     TppCleanupGroupMemberRelease @ 0x18004EEE0 (TppCleanupGroupMemberRelease.c)
 *     TpCallbackMayRunLong @ 0x18004F6E0 (TpCallbackMayRunLong.c)
 *     LdrUnlockLoaderLock @ 0x180050F30 (LdrUnlockLoaderLock.c)
 *     LdrLockLoaderLock @ 0x180051030 (LdrLockLoaderLock.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088800 (TppWorkCancelPendingCallbacks.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180127444 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(_DWORD *Instance, __int64 a2, int a3)
{
  void *v3; // rsi
  int v4; // r12d
  unsigned __int32 v8; // ecx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  int v11; // r14d
  int v12; // ebp
  signed __int32 v13; // ecx
  __int64 v14; // rcx
  void *v16; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PVOID Cookie; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(void **)(a2 + 136);
  v4 = 0;
  Cookie = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0, 0LL, &Cookie);
  _m_prefetchw((const void *)(a2 + 232));
  v8 = *(_DWORD *)(a2 + 232);
  do
  {
    v9 = v8;
    v10 = v8 >> 1;
    if ( v8 >> 1 )
    {
      v11 = 1;
      v12 = 1;
      v10 = v8 & 1 | (2 * (_DWORD)v10 - 2);
      v13 = v10;
      if ( (unsigned int)v10 < 2 )
      {
        v12 = 0;
        v13 = v10 | 1;
      }
    }
    else
    {
      v11 = 0;
      v12 = 0;
      v13 = v8 | 1;
    }
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v13, v9);
  }
  while ( v9 != v8 );
  if ( v3 )
  {
    if ( v11 )
    {
      if ( LdrAddRefDll(0, v3) >= 0 )
      {
        Instance[36] |= 0x100u;
        *((_QWORD *)Instance + 21) = v3;
      }
      else
      {
        v11 = 0;
        v12 = 0;
        v4 = 1;
      }
    }
    LdrUnlockLoaderLock(0, Cookie);
    if ( v4 )
    {
      TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
      TppWorkCancelPendingCallbacks(a2);
    }
  }
  if ( v12 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v14 = 2147353478LL;
    if ( *(_BYTE *)v14 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a2 + 144),
        a2 + 200,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TpPostTask(a2 + 200, *(char **)(a2 + 144), *(_DWORD *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    if ( (unsigned int)TppCleanupGroupMemberRelease(a2, 0LL) )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v11 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)Instance = 72LL;
      Instance[2] = 1;
      RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(a2 + 96));
      *((_BYTE *)Instance + 76) |= 1u;
    }
    Instance[36] |= 0x240u;
    *((_QWORD *)Instance + 23) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
    v16 = *(void **)(a2 + 104);
    if ( v16 )
    {
      *((_QWORD *)Instance + 10) = v16;
      RtlSetThreadSubProcessTag(v16);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
    if ( (int)RtlSetThreadWorkOnBehalfTicket((PVOID)(a2 + 128)) >= 0 )
      *((_QWORD *)Instance + 31) = *(_QWORD *)(a2 + 128);
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))(a2 + 8))(a2, v10);
    return 0LL;
  }
}
