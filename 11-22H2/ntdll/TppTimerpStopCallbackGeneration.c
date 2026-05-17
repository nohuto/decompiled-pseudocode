/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x180088590
 * Callers:
 *     <none>
 * Callees:
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  signed __int32 v4; // eax

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  v2 = *(_QWORD *)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v4) = TppCancelTimer(a1, v2 + 112, 0LL, v3);
  if ( (_BYTE)v4 )
  {
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v4 == 1 )
      LOBYTE(v4) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v4;
}
