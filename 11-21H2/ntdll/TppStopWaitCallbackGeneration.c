/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x18008DB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TppStopWaitCallbackGeneration(__int64 a1, int a2)
{
  _RTL_SRWLOCK *v2; // rdi
  _RTL_SRWLOCK *v3; // rsi
  signed int v6; // ecx
  signed int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_RTL_SRWLOCK **)(a1 + 144);
  v3 = (_RTL_SRWLOCK *)(a1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppCancelWait(a1, v2 + 14, a2 != 0 ? 2 : 0, &v7);
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive(v3);
  v6 = v7;
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v7) == -v6 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
}
