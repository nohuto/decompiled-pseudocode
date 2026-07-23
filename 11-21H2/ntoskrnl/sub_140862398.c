/*
 * XREFs of sub_140862398 @ 0x140862398
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140986E88 @ 0x140986E88 (sub_140986E88.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 */

__int64 __fastcall sub_140862398(unsigned int *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  unsigned int v3; // ebx

  if ( a2 < 4 )
    return 3221225476LL;
  v3 = *a1;
  if ( *a1 > 5 )
    return 3221225485LL;
  if ( v3 == 3 || SeSinglePrivilegeCheck(stru_140D3CA90, a3) )
    return sub_140A5B810(v3);
  return 3221225569LL;
}
