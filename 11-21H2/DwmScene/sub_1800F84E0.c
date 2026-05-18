/*
 * XREFs of sub_1800F84E0 @ 0x1800F84E0
 * Callers:
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_18010D0C6 @ 0x18010D0C6 (sub_18010D0C6.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

__int64 __fastcall sub_1800F84E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    result = sub_1800FA818(v1 + 48);
    v4 = *(_QWORD *)(v1 + 40);
    if ( v4 >= 8 )
      result = sub_180010884(*(char **)(v1 + 16), 2 * v4 + 2);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 7LL;
    *(_WORD *)(v1 + 16) = 0;
    if ( *(_QWORD *)(a1 + 8) )
      return sub_180010884(*(char **)(a1 + 8), 0xB0uLL);
  }
  return result;
}
