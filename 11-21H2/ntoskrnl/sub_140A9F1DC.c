/*
 * XREFs of sub_140A9F1DC @ 0x140A9F1DC
 * Callers:
 *     sub_140AA3C20 @ 0x140AA3C20 (sub_140AA3C20.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140A9F1DC(ULONG_PTR BugCheckParameter2)
{
  _SLIST_ENTRY *v2; // rbx
  __int64 v3; // r8
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( dword_140D5756C )
  {
    v2 = 0LL;
    sub_14045F6C8((__int64)&v4, 0);
    if ( sub_1402D8518((__int64 *)&unk_140D577F0, (__int64)&v4, BugCheckParameter2, 0LL) )
    {
      v2 = (_SLIST_ENTRY *)sub_1402DB8D8((__int64)&unk_140D577F0, (__int64)&v4, BugCheckParameter2, 0LL);
    }
    else if ( !dword_140D57578 && !dword_140D575BC && (qword_140D01450 & 0x800) != 0 )
    {
      sub_140A8C924(0xC4u, 0xCBuLL, BugCheckParameter2, 0LL, 0LL);
    }
    sub_1402D81DC((__int64)&v4);
    if ( v2 )
    {
      if ( dword_140D57810 == 1 )
        sub_140203D88((__int64)&unk_140CF9340, v2, v3);
      else
        sub_1402DB870(v2);
    }
  }
}
