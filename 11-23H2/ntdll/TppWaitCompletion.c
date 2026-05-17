/*
 * XREFs of TppWaitCompletion @ 0x18004E690
 * Callers:
 *     <none>
 * Callees:
 *     TppSetupNextWait @ 0x18002FD10 (TppSetupNextWait.c)
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWaitCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int64 *v3; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  signed int v8; // edi
  char v9; // cl

  v3 = (volatile signed __int64 *)(a3 + 240);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a3 + 240));
  LOBYTE(v6) = 1;
  v8 = 0;
  if ( TppCancelTimer(a3, *(_QWORD *)(a3 + 144) + 112LL, v6, v7) )
    v8 = -1;
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    TppBarrierAdjust(a3 + 56, 1LL, 0LL);
  *(_QWORD *)(a3 + 360) = 0LL;
  v9 = *(_BYTE *)(a3 + 464);
  if ( (v9 & 1) != 0 )
    v8 += TppSetupNextWait((_QWORD *)a3, *(_QWORD *)(a3 + 376), (__int64 *)((a3 + 384) & -(__int64)((v9 & 2) != 0)));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v8 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v8);
    v8 = 0;
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v8 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v8) == -v8 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(a1, a3, 0LL);
}
