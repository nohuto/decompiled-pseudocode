/*
 * XREFs of sub_14086305C @ 0x14086305C
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 sub_14086305C()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = *((unsigned int *)CurrentPrcb + 8276) ^ *((unsigned int *)CurrentPrcb + 2894) ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)sub_140363220(0) << 32;
  v3 = (v2 | (unsigned int)sub_140363220(0)) ^ v1;
  if ( !v3 )
    return 1LL;
  return v3;
}
