/*
 * XREFs of sub_140A8B588 @ 0x140A8B588
 * Callers:
 *     sub_140AA0F00 @ 0x140AA0F00 (sub_140AA0F00.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A9B230 @ 0x140A9B230 (sub_140A9B230.c)
 */

char __fastcall sub_140A8B588(__int64 a1)
{
  int v2; // edx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  sub_14045F6C8((__int64)&v8, 0);
  v4 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v8, v3, (unsigned int)(v2 + 1));
  if ( v4 && (v6 = v4[7]) != 0 && *(_QWORD *)(v6 + 8) == a1 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  else
  {
    ++dword_140D58A08;
    ((void (__fastcall *)(__int64, __int128 *, __int64 (__fastcall *)(), __int64))sub_140A9B230)(
      v5,
      &v8,
      sub_140A8B620,
      a1);
  }
  return sub_1402D81DC((__int64)&v8);
}
