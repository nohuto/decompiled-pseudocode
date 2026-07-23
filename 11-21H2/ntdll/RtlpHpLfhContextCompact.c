/*
 * XREFs of RtlpHpLfhContextCompact @ 0x18005F56C
 * Callers:
 *     RtlpHpHeapCompact @ 0x180014D08 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005F5FC (RtlpHpLfhOwnerCompact.c)
 */

void __fastcall RtlpHpLfhContextCompact(_RTL_SRWLOCK *a1, int a2)
{
  int v4; // esi
  unsigned __int64 *v5; // rdi
  __int64 v6; // rbp

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 9);
  v5 = (unsigned __int64 *)&a1[16];
  v6 = 129LL;
  do
  {
    if ( (*v5 & 1) == 0 )
      RtlpHpLfhOwnerCompact(a1, *v5, a2 | 1u);
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( !v4 )
    RtlReleaseSRWLockShared(a1 + 9);
}
