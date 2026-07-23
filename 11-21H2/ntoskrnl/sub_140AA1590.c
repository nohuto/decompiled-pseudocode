/*
 * XREFs of sub_140AA1590 @ 0x140AA1590
 * Callers:
 *     sub_140AA3C40 @ 0x140AA3C40 (sub_140AA3C40.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

char __fastcall sub_140AA1590(ULONG_PTR BugCheckParameter2)
{
  char result; // al
  _SLIST_ENTRY *v3; // rbx
  __int64 v4; // r8
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  result = dword_140D57574;
  v5 = 0LL;
  if ( dword_140D57574 )
  {
    result = qword_140D577D0;
    if ( qword_140D577D0 )
    {
      v3 = 0LL;
      sub_14045F6C8((__int64)&v5, 0);
      if ( sub_1402D8518(&qword_140D577C8, (__int64)&v5, BugCheckParameter2, 0LL) )
      {
        v3 = (_SLIST_ENTRY *)sub_1402DB8D8((__int64)&qword_140D577C8, (__int64)&v5, BugCheckParameter2, 0LL);
      }
      else if ( !dword_140D575B8 && !dword_140D57570 )
      {
        sub_140A8C924(0xC4u, 0xD1uLL, BugCheckParameter2, 0LL, 0LL);
      }
      result = sub_1402D81DC((__int64)&v5);
      if ( v3 )
      {
        if ( dword_140D577E8 == 1 )
          return (unsigned __int8)sub_140203D88((__int64)&unk_140CF9340, v3, v4);
        else
          return sub_1402DB870(v3);
      }
    }
  }
  return result;
}
