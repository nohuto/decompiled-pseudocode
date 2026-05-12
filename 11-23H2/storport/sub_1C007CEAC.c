/*
 * XREFs of sub_1C007CEAC @ 0x1C007CEAC
 * Callers:
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007B258 @ 0x1C007B258 (sub_1C007B258.c)
 *     sub_1C007F690 @ 0x1C007F690 (sub_1C007F690.c)
 *     sub_1C007F7A4 @ 0x1C007F7A4 (sub_1C007F7A4.c)
 *     sub_1C007F988 @ 0x1C007F988 (sub_1C007F988.c)
 * Callees:
 *     sub_1C00551E0 @ 0x1C00551E0 (sub_1C00551E0.c)
 *     sub_1C00554A8 @ 0x1C00554A8 (sub_1C00554A8.c)
 *     sub_1C0055A78 @ 0x1C0055A78 (sub_1C0055A78.c)
 */

__int64 __fastcall sub_1C007CEAC(_DWORD *a1, char a2, __int16 a3, int a4, __int64 *a5, __int64 *a6)
{
  int v10; // esi

  *a5 = 0LL;
  *a6 = 0LL;
  v10 = sub_1C00554A8((__int64)a1, a2, a3, a4, a5);
  if ( v10 < 0 || (v10 = sub_1C00551E0((__int64)a1, a2, a3, a4, a6), v10 < 0) )
  {
    if ( *a5 )
    {
      sub_1C0055A78(a1, *a5);
      *a5 = 0LL;
    }
    if ( *a6 )
    {
      sub_1C0055A78(a1, *a6);
      *a6 = 0LL;
    }
  }
  return (unsigned int)v10;
}
