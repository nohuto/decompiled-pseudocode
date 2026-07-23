/*
 * XREFs of sub_140864754 @ 0x140864754
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1403DE98C @ 0x1403DE98C (sub_1403DE98C.c)
 *     sub_1403FB0C4 @ 0x1403FB0C4 (sub_1403FB0C4.c)
 */

__int64 sub_140864754()
{
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  sub_1403DE98C();
  v1 = 0x82EF4D887A4E55C5uLL;
  return (unsigned int)sub_1403FB0C4(dword_140CE23E0, &v1, 8LL) != 0 ? 0xC0000001 : 0;
}
