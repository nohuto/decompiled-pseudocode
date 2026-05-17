/*
 * XREFs of RtlpHpLfhContextCompact @ 0x18005F56C
 * Callers:
 *     RtlpHpHeapCompact @ 0x180014D08 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005F5FC (RtlpHpLfhOwnerCompact.c)
 */

signed __int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2)
{
  int v4; // esi
  signed __int64 *v5; // rdi
  __int64 v6; // rbp
  signed __int64 result; // rax

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72));
  v5 = (signed __int64 *)(a1 + 128);
  v6 = 129LL;
  do
  {
    result = *v5;
    if ( (*v5 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v5, a2 | 1u);
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( !v4 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return result;
}
