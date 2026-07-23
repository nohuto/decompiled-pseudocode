/*
 * XREFs of sub_140553968 @ 0x140553968
 * Callers:
 *     sub_140579060 @ 0x140579060 (sub_140579060.c)
 * Callees:
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 *     sub_1405540DC @ 0x1405540DC (sub_1405540DC.c)
 */

__int64 __fastcall sub_140553968(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  int v8; // edi
  int v9; // esi
  int v10; // ebp

  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( qword_140C2AAA8 )
    sub_140551F78((_NT_PRODUCT_TYPE *)qword_140C2AAA8, 4, a1, a2, a3, a4, a5, a7);
  return sub_1405540DC(a1, v10, v9, v8, a5, a6, a7, a8);
}
