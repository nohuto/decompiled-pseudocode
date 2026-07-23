/*
 * XREFs of sub_140A9EFF8 @ 0x140A9EFF8
 * Callers:
 *     sub_14063E4D0 @ 0x14063E4D0 (sub_14063E4D0.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140601948 @ 0x140601948 (sub_140601948.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A9EFF8(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !dword_140D5756C )
    return 0LL;
  if ( !(unsigned int)sub_140601948() )
  {
    sub_14045F6C8((__int64)&v6, 1);
    v5 = (ULONG_PTR *)sub_1402D8518((__int64 *)&unk_140D577F0, (__int64)&v6, BugCheckParameter3, a2);
    if ( v5 )
    {
      if ( (dword_140C29FC0 & 0x800) != 0 )
        sub_140A8C924(0xC4u, 0xCCuLL, *v5, BugCheckParameter3, a2);
    }
    sub_1402D81DC((__int64)&v6);
  }
  return 1LL;
}
