/*
 * XREFs of sub_140A8B190 @ 0x140A8B190
 * Callers:
 *     sub_140A9FCE0 @ 0x140A9FCE0 (sub_140A9FCE0.c)
 *     sub_140A9FD20 @ 0x140A9FD20 (sub_140A9FD20.c)
 *     sub_140A9FD80 @ 0x140A9FD80 (sub_140A9FD80.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8B238 @ 0x140A8B238 (sub_140A8B238.c)
 *     sub_140A8B564 @ 0x140A8B564 (sub_140A8B564.c)
 *     sub_140A9B230 @ 0x140A9B230 (sub_140A9B230.c)
 */

char __fastcall sub_140A8B190(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // edx
  unsigned __int64 v5; // r8
  PVOID v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  v3 = sub_140A8B564(a1, a2, a1);
  if ( v3 )
  {
    sub_14045F6C8((__int64)&v9, 0);
    v6 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v9, v5, (unsigned int)(v4 + 1));
    if ( !v6 || !(unsigned int)sub_140A8B238(a2, v6) )
      ((void (__fastcall *)(__int64, __int128 *, __int64 (__fastcall *)(), __int64))sub_140A9B230)(
        v7,
        &v9,
        sub_140A8B210,
        a2);
    LOBYTE(v3) = sub_1402D81DC((__int64)&v9);
  }
  return v3;
}
