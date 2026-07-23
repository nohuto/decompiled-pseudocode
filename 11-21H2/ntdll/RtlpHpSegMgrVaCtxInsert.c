/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x1801207CC
 * Callers:
 *     RtlpHpSegContextInitialize @ 0x180054F9C (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegMgrAllocate @ 0x1800566B4 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180058CE8 (RtlpHpQueryVA.c)
 */

void __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // r14
  __int16 v4; // ax
  bool v5; // sf
  unsigned __int64 v6; // rdi
  unsigned __int16 *v7; // [rsp+30h] [rbp+8h] BYREF

  RtlpHpQueryVA(a2, a2, &v7, 0LL);
  v3 = v7;
  v4 = (*v7 ^ (*v7 + 1)) & 0x7FF;
  v5 = ((v4 ^ *v7) & 0x8000u) != 0;
  *v7 ^= v4;
  if ( v5 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v3 = v7;
  }
  v6 = (unsigned __int64)*v3 >> 15;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v6 + 120);
  *(_QWORD *)(a1 + 8 * v6 + 120) = v3 + 4;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
}
