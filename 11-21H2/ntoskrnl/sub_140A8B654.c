/*
 * XREFs of sub_140A8B654 @ 0x140A8B654
 * Callers:
 *     sub_140AA0F00 @ 0x140AA0F00 (sub_140AA0F00.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 */

char __fastcall sub_140A8B654(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  sub_14045F6C8((__int64)&v7, 1);
  v4 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v7, v2, v3);
  if ( v4 )
  {
    v5 = v4[7];
    if ( v5 )
      *(_QWORD *)(v5 + 8) = a1;
  }
  return sub_1402D81DC((__int64)&v7);
}
