/*
 * XREFs of RtlDeleteBarrier @ 0x1800FA140
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlDeleteBarrier(__int64 a1)
{
  unsigned __int64 v1; // rbx
  signed __int64 result; // rax

  v1 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v1 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v1 + 8));
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v1 + 8));
  }
  return result;
}
