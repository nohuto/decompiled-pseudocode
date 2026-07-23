/*
 * XREFs of sub_140772A24 @ 0x140772A24
 * Callers:
 *     sub_1403C5610 @ 0x1403C5610 (sub_1403C5610.c)
 *     sub_1406CEA04 @ 0x1406CEA04 (sub_1406CEA04.c)
 *     sub_14076CA78 @ 0x14076CA78 (sub_14076CA78.c)
 *     sub_140772790 @ 0x140772790 (sub_140772790.c)
 *     sub_140772E98 @ 0x140772E98 (sub_140772E98.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_1407829F8 @ 0x1407829F8 (sub_1407829F8.c)
 *     sub_14095C264 @ 0x14095C264 (sub_14095C264.c)
 *     sub_14095C804 @ 0x14095C804 (sub_14095C804.c)
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B501D0 @ 0x140B501D0 (sub_140B501D0.c)
 *     sub_140B503E0 @ 0x140B503E0 (sub_140B503E0.c)
 * Callees:
 *     sub_140772D80 @ 0x140772D80 (sub_140772D80.c)
 */

__int64 __fastcall sub_140772A24(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11; // [rsp+28h] [rbp-30h]

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  v11 = 0;
  return sub_140772D80(a2, a3, a4, a5, a6, v11, a7, a8, v9);
}
