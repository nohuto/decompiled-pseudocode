/*
 * XREFs of TppWaitCompletion @ 0x18004E7F0
 * Callers:
 *     <none>
 * Callees:
 *     TppSetupNextWait @ 0x18002FEE0 (TppSetupNextWait.c)
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
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
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    TppBarrierAdjust(a3 + 56, 1LL, 0LL);
  *(_QWORD *)(a3 + 360) = 0LL;
  v7 = *(_BYTE *)(a3 + 464);
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
