/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x18008ACC8
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18002EA00 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, char a3)
{
  int v5; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx

  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 64));
  result = a1 + 72;
  v7 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v7 )
    v7 ^= result;
  while ( v7 )
  {
    result = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= result )
    {
      if ( a2 <= result )
        break;
      result = *(_QWORD *)(v7 + 8);
    }
    else
    {
      result = *(_QWORD *)v7;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && result )
      v7 ^= result;
    else
      v7 = result;
  }
  if ( !v5 )
    result = RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 64));
  *(_QWORD *)(v7 + 32) |= 1uLL;
  return result;
}
