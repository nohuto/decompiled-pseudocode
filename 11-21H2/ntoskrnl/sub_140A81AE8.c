/*
 * XREFs of sub_140A81AE8 @ 0x140A81AE8
 * Callers:
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 *     sub_140A8CEB8 @ 0x140A8CEB8 (sub_140A8CEB8.c)
 *     sub_140A90FE0 @ 0x140A90FE0 (sub_140A90FE0.c)
 *     sub_140A9C0A0 @ 0x140A9C0A0 (sub_140A9C0A0.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 * Callees:
 *     sub_140A81ABC @ 0x140A81ABC (sub_140A81ABC.c)
 */

__int64 __fastcall sub_140A81AE8(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return sub_140A81ABC(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return sub_140A81ABC(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
