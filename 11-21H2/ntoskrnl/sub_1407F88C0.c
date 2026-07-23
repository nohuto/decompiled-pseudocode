/*
 * XREFs of sub_1407F88C0 @ 0x1407F88C0
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1407F8914 @ 0x1407F8914 (sub_1407F8914.c)
 */

__int64 __fastcall sub_1407F88C0(unsigned int a1, unsigned int a2)
{
  if ( !SeSinglePrivilegeCheck(stru_140D3CB00, *((_BYTE *)KeGetCurrentThread() + 562)) )
    return 3221225569LL;
  sub_1407F8914(a1, a2);
  return 0LL;
}
