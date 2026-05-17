/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x1801207CC
 * Callers:
 *     RtlpHpSegContextInitialize @ 0x180054F9C (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegMgrAllocate @ 0x1800566B4 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180058CE8 (RtlpHpQueryVA.c)
 */

signed __int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int16 *v5; // r14
  __int16 v6; // ax
  bool v7; // sf
  unsigned __int64 v8; // rdi
  unsigned __int16 *v10; // [rsp+30h] [rbp+8h] BYREF

  RtlpHpQueryVA(a2, a2, &v10, 0LL);
  v5 = v10;
  v6 = (*v10 ^ (*v10 + 1)) & 0x7FF;
  v7 = ((v6 ^ *v10) & 0x8000u) != 0;
  *v10 ^= v6;
  if ( v7 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v5 = v10;
  }
  v8 = (unsigned __int64)*v5 >> 15;
  RtlAcquireSRWLockExclusive(a1 + 112, 0x7FFuLL, v3, v4);
  *((_QWORD *)v5 + 1) = *(_QWORD *)(a1 + 8 * v8 + 120);
  *(_QWORD *)(a1 + 8 * v8 + 120) = v5 + 4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
}
