/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x18004A8B0
 * Callers:
 *     RtlpHpAllocVA @ 0x1800473D0 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x180066A00 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdi
  volatile signed __int64 *v10; // rbx

  if ( *a4 == -1 )
  {
    v10 = (volatile signed __int64 *)(a1 + 2144);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 2144), a2, a3, (unsigned __int64)a4);
    v8 = RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    RtlReleaseSRWLockShared(v10);
  }
  else
  {
    v8 = a1 + 48 * ((unsigned int)*a4 + 45LL);
  }
  return RtlpHpVaMgrAlloc(v8, a2, a3);
}
