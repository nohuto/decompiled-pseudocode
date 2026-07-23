/*
 * XREFs of sub_140771FFC @ 0x140771FFC
 * Callers:
 *     sub_14076DD0C @ 0x14076DD0C (sub_14076DD0C.c)
 *     sub_140771B04 @ 0x140771B04 (sub_140771B04.c)
 * Callees:
 *     sub_1406DB1B4 @ 0x1406DB1B4 (sub_1406DB1B4.c)
 *     sub_140772790 @ 0x140772790 (sub_140772790.c)
 */

__int64 __fastcall sub_140771FFC(int a1, int a2, WCHAR *a3, __int64 a4, int a5, __int64 a6, ULONG a7)
{
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( a5 )
    return sub_140772790(a1, a2, (int)a3, a4, a5, a6, a7);
  else
    return sub_1406DB1B4(a1, a2, a3, a4, 0, v8, a7);
}
