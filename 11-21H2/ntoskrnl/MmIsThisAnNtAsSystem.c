/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14020C520
 * Callers:
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_14068F5DC @ 0x14068F5DC (sub_14068F5DC.c)
 *     sub_140825358 @ 0x140825358 (sub_140825358.c)
 *     sub_140825414 @ 0x140825414 (sub_140825414.c)
 *     sub_140863C68 @ 0x140863C68 (sub_140863C68.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140D051DC;
}
