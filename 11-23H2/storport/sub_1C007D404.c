/*
 * XREFs of sub_1C007D404 @ 0x1C007D404
 * Callers:
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007B258 @ 0x1C007B258 (sub_1C007B258.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 *     sub_1C007F690 @ 0x1C007F690 (sub_1C007F690.c)
 *     sub_1C007F7A4 @ 0x1C007F7A4 (sub_1C007F7A4.c)
 *     sub_1C007F988 @ 0x1C007F988 (sub_1C007F988.c)
 * Callees:
 *     sub_1C0055A78 @ 0x1C0055A78 (sub_1C0055A78.c)
 */

__int64 __fastcall sub_1C007D404(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *a2;
  if ( v5 )
  {
    result = sub_1C0055A78(a1, v5);
    *a2 = 0LL;
  }
  if ( *a3 )
  {
    result = sub_1C0055A78(a1, *a3);
    *a3 = 0LL;
  }
  return result;
}
