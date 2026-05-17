/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x180056BC8
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1800555C0 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 v6; // rbx

  v4 = (volatile signed __int64 *)(a1 + 2144);
  v6 = a1 + 48 * (*a2 + 45LL);
  RtlAcquireSRWLockExclusive(a1 + 2144, (unsigned __int64)a2, a3, a4);
  if ( (*(_WORD *)(v6 + 42))-- == 1 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_OWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2152);
  }
  return RtlReleaseSRWLockExclusive(v4);
}
