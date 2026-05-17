/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x180055C78
 * Callers:
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x18005572C (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdi
  volatile signed __int64 *v10; // rbx

  if ( *a4 == -1 )
  {
    v10 = (volatile signed __int64 *)(a1 + 2144);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 2144));
    v8 = RtlpHpVaMgrCtxAllocatorFind(a1, (__int64)a4, 0, 0LL);
    RtlReleaseSRWLockShared(v10);
  }
  else
  {
    v8 = a1 + 48 * ((unsigned int)*a4 + 45LL);
  }
  return RtlpHpVaMgrAlloc(v8, a2, a3);
}
