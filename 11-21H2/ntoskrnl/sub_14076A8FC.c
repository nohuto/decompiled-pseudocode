/*
 * XREFs of sub_14076A8FC @ 0x14076A8FC
 * Callers:
 *     sub_140768C60 @ 0x140768C60 (sub_140768C60.c)
 *     sub_14076A7E8 @ 0x14076A7E8 (sub_14076A7E8.c)
 *     sub_14076AB18 @ 0x14076AB18 (sub_14076AB18.c)
 *     sub_14076CDB4 @ 0x14076CDB4 (sub_14076CDB4.c)
 *     sub_140A23130 @ 0x140A23130 (sub_140A23130.c)
 *     sub_140A27EE4 @ 0x140A27EE4 (sub_140A27EE4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14076A960 @ 0x14076A960 (sub_14076A960.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 */

__int64 __fastcall sub_14076A8FC(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax

  v5 = sub_14077A710(a3);
  sub_14076A960(a1, v6, v5);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return sub_14042A5E0(a1, a2);
  return result;
}
