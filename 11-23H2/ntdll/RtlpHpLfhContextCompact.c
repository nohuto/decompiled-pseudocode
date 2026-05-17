/*
 * XREFs of RtlpHpLfhContextCompact @ 0x18005FD44
 * Callers:
 *     RtlpHpHeapCompact @ 0x18005FB70 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005FDD4 (RtlpHpLfhOwnerCompact.c)
 */

signed __int64 __fastcall RtlpHpLfhContextCompact(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // r14d
  int v6; // esi
  signed __int64 *v7; // rdi
  __int64 v8; // rbp
  signed __int64 result; // rax

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  v7 = (signed __int64 *)(a1 + 128);
  v8 = 129LL;
  do
  {
    result = *v7;
    if ( (*v7 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v7, v4 | 1u);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v6 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return result;
}
