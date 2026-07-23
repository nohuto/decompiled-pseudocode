/*
 * XREFs of sub_140AA16A4 @ 0x140AA16A4
 * Callers:
 *     sub_140AA3D80 @ 0x140AA3D80 (sub_140AA3D80.c)
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

char __fastcall sub_140AA16A4(__int64 BugCheckParameter2)
{
  _QWORD *v3; // rbp
  _SLIST_ENTRY *v4; // rdi
  __int64 v5; // r8
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !dword_140D57574 )
    return 0;
  v3 = (_QWORD *)sub_1402D83B4(&qword_140D577C8, BugCheckParameter2, 0LL);
  if ( !v3 )
  {
    _InterlockedExchange(&dword_140D575B8, 1);
    return 0;
  }
  v4 = 0LL;
  sub_14045F6C8((__int64)&v6, 0);
  if ( sub_1402D8518(&qword_140D577C8, (__int64)&v6, BugCheckParameter2, 0LL) )
  {
    if ( !dword_140D57570 )
      sub_140A8C924(0xC4u, 0xD0uLL, BugCheckParameter2, 0LL, 0LL);
    _InterlockedAdd(&dword_140D576A0, 1u);
    v4 = (_SLIST_ENTRY *)sub_1402DB8D8((__int64)&qword_140D577C8, (__int64)&v6, BugCheckParameter2, 0LL);
  }
  sub_1402D8234((__int64)&qword_140D577C8, (__int64)&v6, v3);
  sub_1402D81DC((__int64)&v6);
  if ( v4 )
  {
    if ( dword_140D577E8 == 1 )
      sub_140203D88((__int64)&unk_140CF9340, v4, v5);
    else
      sub_1402DB870(v4);
  }
  return 1;
}
