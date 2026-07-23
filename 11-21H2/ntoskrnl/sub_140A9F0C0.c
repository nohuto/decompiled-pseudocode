/*
 * XREFs of sub_140A9F0C0 @ 0x140A9F0C0
 * Callers:
 *     sub_140AA3CF0 @ 0x140AA3CF0 (sub_140AA3CF0.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1402D83B4 @ 0x1402D83B4 (sub_1402D83B4.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140A9F0C0(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rsi
  _SLIST_ENTRY *v3; // rbx
  __int64 v4; // r8
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( dword_140D5756C )
  {
    v2 = (_QWORD *)sub_1402D83B4((__int64 *)&unk_140D577F0, BugCheckParameter2, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      sub_14045F6C8((__int64)&v5, 0);
      if ( sub_1402D8518((__int64 *)&unk_140D577F0, (__int64)&v5, BugCheckParameter2, 0LL) )
      {
        if ( !dword_140D57578 && !dword_140D575BC )
          sub_140A8C924(0xC4u, 0xCAuLL, BugCheckParameter2, 0LL, 0LL);
        v3 = (_SLIST_ENTRY *)sub_1402DB8D8((__int64)&unk_140D577F0, (__int64)&v5, BugCheckParameter2, 0LL);
      }
      sub_1402D8234((__int64)&unk_140D577F0, (__int64)&v5, v2);
      sub_1402D81DC((__int64)&v5);
      if ( v3 )
      {
        if ( dword_140D57810 == 1 )
          sub_140203D88((__int64)&unk_140CF9340, v3, v4);
        else
          sub_1402DB870(v3);
      }
    }
    else
    {
      _InterlockedExchange(&dword_140D57578, 1);
    }
  }
}
