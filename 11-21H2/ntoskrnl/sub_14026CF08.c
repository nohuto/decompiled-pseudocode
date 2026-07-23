/*
 * XREFs of sub_14026CF08 @ 0x14026CF08
 * Callers:
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 *     sub_14026E218 @ 0x14026E218 (sub_14026E218.c)
 *     sub_140598CA4 @ 0x140598CA4 (sub_140598CA4.c)
 *     sub_140599050 @ 0x140599050 (sub_140599050.c)
 *     sub_140B04910 @ 0x140B04910 (sub_140B04910.c)
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 *     sub_140B0673C @ 0x140B0673C (sub_140B0673C.c)
 *     sub_140B0675C @ 0x140B0675C (sub_140B0675C.c)
 *     sub_140B0681C @ 0x140B0681C (sub_140B0681C.c)
 *     sub_140B06A84 @ 0x140B06A84 (sub_140B06A84.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_14026CF08(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 6;
  if ( !v1 )
    return &qword_140C519F8;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140C51A40;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140C51920;
  v4 = v3 - 2;
  if ( !v4 )
    return (__int64 *)&unk_140C519B0;
  v5 = v4 - 1;
  if ( !v5 )
    return &qword_140C51968;
  v7 = v5 - 1;
  if ( !v7 )
    return &qword_140C51920;
  v8 = v7 - 1;
  if ( !v8 )
    return &qword_140C51890;
  v9 = v8 - 1;
  if ( !v9 )
    return (__int64 *)&unk_140C51A88;
  if ( v9 == 1 )
    return (__int64 *)&unk_140C518D8;
  return 0LL;
}
