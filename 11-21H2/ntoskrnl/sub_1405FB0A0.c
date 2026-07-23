/*
 * XREFs of sub_1405FB0A0 @ 0x1405FB0A0
 * Callers:
 *     sub_1405FACB4 @ 0x1405FACB4 (sub_1405FACB4.c)
 * Callees:
 *     sub_1405FB0EC @ 0x1405FB0EC (sub_1405FB0EC.c)
 */

__int64 __fastcall sub_1405FB0A0(_WORD *a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // r9

  v4 = a2 >> 1;
  if ( v4 - 1 > 0x7FFFFFFE )
    return 2147942487LL;
  v6 = a4 >> 1;
  if ( v6 <= 0x7FFFFFFE )
    return sub_1405FB0EC((_DWORD)a1, v4, a3, a3, v6);
  result = 2147942487LL;
  *a1 = 0;
  return result;
}
