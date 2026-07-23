/*
 * XREFs of sub_140798BE4 @ 0x140798BE4
 * Callers:
 *     sub_140634D24 @ 0x140634D24 (sub_140634D24.c)
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     sub_1402E1AB0 @ 0x1402E1AB0 (sub_1402E1AB0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140798BE4(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf

  v3 = *(_WORD *)(a2 + 54) == 5;
  *(_WORD *)(a2 + 52) = 0;
  if ( v3 )
    return sub_14042A5E0(a3, a2);
  else
    return sub_1402E1AB0(a1, (unsigned int *)a2, 0);
}
