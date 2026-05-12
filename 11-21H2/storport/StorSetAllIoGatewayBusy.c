/*
 * XREFs of StorSetAllIoGatewayBusy @ 0x1C00594F0
 * Callers:
 *     StorSetIoGatewayBusy @ 0x1C0059678 (StorSetIoGatewayBusy.c)
 * Callees:
 *     StorGetOutstandingIoCount @ 0x1C0059304 (StorGetOutstandingIoCount.c)
 *     StorSetAllIoGatewayNotBusy @ 0x1C005960C (StorSetAllIoGatewayNotBusy.c)
 */

__int64 __fastcall StorSetAllIoGatewayBusy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 i; // r14
  unsigned int v9; // eax
  _DWORD *v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = StorGetOutstandingIoCount(v3);
  v6 = result;
  if ( (_DWORD)result )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 864LL), 1, 0);
    if ( !(_DWORD)result )
    {
      v7 = *(_QWORD *)(a1 + 48);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 840); i = (unsigned int)(i + 1) )
      {
        v9 = 0;
        v10 = (_DWORD *)(a1 + 320 * i);
        if ( a2 <= v10[48] )
          v9 = v10[48] - a2;
        v10[8] = v9;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 320 * i), &LockHandle);
        v10[10] = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v7 = *(_QWORD *)(a1 + 48);
      }
      if ( v6 <= a2 )
        v11 = 0;
      else
        v11 = v6 - a2;
      *(_DWORD *)(v7 + 856) = v11;
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 864LL), 2, 1);
      result = StorGetOutstandingIoCount(*(_QWORD *)(a1 + 48));
      if ( !(_DWORD)result )
        return StorSetAllIoGatewayNotBusy(*(_QWORD *)(a1 + 48), v12, v13);
    }
  }
  return result;
}
