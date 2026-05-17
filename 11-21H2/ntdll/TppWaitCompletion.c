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

__int64 __fastcall TppWaitCompletion(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  signed int v7; // edi
  char v8; // cl

  v4 = (volatile signed __int64 *)(a3 + 240);
  RtlAcquireSRWLockExclusive(a3 + 240, a2, a3, a4);
  v7 = 0;
  if ( TppCancelTimer(a3, (volatile signed __int64 *)(*(_QWORD *)(a3 + 144) + 112LL), 1) )
    v7 = -1;
  v8 = *(_BYTE *)(a3 + 464);
  if ( (v8 & 4) == 0 )
  {
    TppBarrierAdjust(a3 + 56, 1LL);
    v8 = *(_BYTE *)(a3 + 464);
  }
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v8 & 1) != 0 )
    v7 += TppSetupNextWait((_QWORD *)a3, *(_QWORD *)(a3 + 376), (__int64 *)((a3 + 384) & -(__int64)((v8 & 2) != 0)));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v7 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7);
    v7 = 0;
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7) == -v7 )
    (**(void (__fastcall ***)(unsigned __int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(a1, a3, 0LL);
}
