/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x180055C78
 * Callers:
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x18005572C (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _RTL_SRWLOCK *v6; // rdi
  _RTL_SRWLOCK *v8; // rbx

  if ( *a4 == -1 )
  {
    v8 = a1 + 268;
    RtlAcquireSRWLockShared(a1 + 268);
    v6 = (_RTL_SRWLOCK *)RtlpHpVaMgrCtxAllocatorFind((__int64)a1, (__int64)a4, 0, 0LL);
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v6 = &a1[6 * (unsigned int)*a4 + 270];
  }
  return RtlpHpVaMgrAlloc(v6);
}
