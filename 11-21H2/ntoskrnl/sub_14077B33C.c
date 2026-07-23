/*
 * XREFs of sub_14077B33C @ 0x14077B33C
 * Callers:
 *     sub_1406E4980 @ 0x1406E4980 (sub_1406E4980.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14076A134 @ 0x14076A134 (sub_14076A134.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_140779850 @ 0x140779850 (sub_140779850.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_140948F60 @ 0x140948F60 (sub_140948F60.c)
 *     sub_140948FB8 @ 0x140948FB8 (sub_140948FB8.c)
 *     sub_140949104 @ 0x140949104 (sub_140949104.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_14077B33C(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &unk_140C451C0;
  v4 = v2 - 1;
  if ( !v4 )
    return &unk_140C45380;
  v5 = v4 - 1;
  if ( !v5 )
    return &unk_140C450E0;
  v6 = v5 - 1;
  if ( !v6 )
    return &unk_140C45540;
  v7 = v6 - 1;
  if ( !v7 )
    return &unk_140C45460;
  if ( v7 == 1 )
    return &unk_140C452A0;
  return (void *)v1;
}
