/*
 * XREFs of TppWaitCompletion @ 0x18001FD80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     TppSetupNextWait @ 0x18001F61C (TppSetupNextWait.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWaitCompletion(PTP_CALLBACK_INSTANCE Instance, __int64 a2, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rsi
  signed int v6; // edi
  char v7; // cl

  v3 = (_RTL_SRWLOCK *)(a3 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 240));
  v6 = 0;
  if ( TppCancelTimer(a3, (_RTL_SRWLOCK *)(*(_QWORD *)(a3 + 144) + 112LL), 1) )
    v6 = -1;
  v7 = *(_BYTE *)(a3 + 464);
  if ( (v7 & 4) == 0 )
  {
    TppBarrierAdjust(a3 + 56, 1LL);
    v7 = *(_BYTE *)(a3 + 464);
  }
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v7 & 1) != 0 )
    v6 += TppSetupNextWait(a3, *(void **)(a3 + 376), (__int64 *)((a3 + 384) & -(__int64)((v7 & 2) != 0)));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v6 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v6);
    v6 = 0;
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v6) == -v6 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(Instance);
}
