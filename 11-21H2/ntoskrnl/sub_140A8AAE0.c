/*
 * XREFs of sub_140A8AAE0 @ 0x140A8AAE0
 * Callers:
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 *     sub_140A9AEC0 @ 0x140A9AEC0 (sub_140A9AEC0.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_1405FF00C @ 0x1405FF00C (sub_1405FF00C.c)
 */

void sub_140A8AAE0()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  void **v2; // rax
  void **v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( !dword_140C1ACBC )
  {
    sub_14045F6C8((__int64)&v4, 0);
    v2 = (void **)sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v4, v1, (unsigned int)(v0 + 1));
    v3 = v2;
    if ( v2 )
    {
      sub_1405FF00C(v2[7]);
      v3[7] = 0LL;
      --dword_140C1B248;
    }
    sub_1402D81DC((__int64)&v4);
  }
}
