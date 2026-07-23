/*
 * XREFs of RtlpHpLfhContextCompact @ 0x18005A574
 * Callers:
 *     RtlpHpHeapCompact @ 0x18005A3A0 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005A604 (RtlpHpLfhOwnerCompact.c)
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
