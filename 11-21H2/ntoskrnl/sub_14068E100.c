/*
 * XREFs of sub_14068E100 @ 0x14068E100
 * Callers:
 *     sub_14068DB00 @ 0x14068DB00 (sub_14068DB00.c)
 *     sub_14068DFF0 @ 0x14068DFF0 (sub_14068DFF0.c)
 *     sub_14068ED70 @ 0x14068ED70 (sub_14068ED70.c)
 * Callees:
 *     sub_140919FB8 @ 0x140919FB8 (sub_140919FB8.c)
 */

__int64 __fastcall sub_14068E100(_BYTE *a1, __int64 a2, char a3)
{
  _BYTE *i; // [rsp+28h] [rbp-10h]

  for ( i = a1; i < &a1[a2]; i += 4096 )
  {
    if ( a3 )
      *i = *i;
  }
  return 0LL;
}
