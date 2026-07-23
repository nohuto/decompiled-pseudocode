/*
 * XREFs of sub_140A91AD0 @ 0x140A91AD0
 * Callers:
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

char __fastcall sub_140A91AD0(ULONG_PTR BugCheckParameter2)
{
  char result; // al
  _SLIST_ENTRY *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // r8
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  result = dword_140D575C0;
  v6 = 0LL;
  if ( dword_140D575C0 )
  {
    v3 = 0LL;
    sub_14045F6C8((__int64)&v6, 0);
    v4 = sub_1402D8518(qword_140D58A38, (__int64)&v6, BugCheckParameter2, 0LL);
    if ( v4 )
    {
      if ( (v4[4] & 1) != 0 )
        sub_140A8C924(0xC4u, 0xDBuLL, BugCheckParameter2, 0LL, 0LL);
      v3 = (_SLIST_ENTRY *)sub_1402DB8D8((__int64)qword_140D58A38, (__int64)&v6, BugCheckParameter2, 0LL);
    }
    result = sub_1402D81DC((__int64)&v6);
    if ( v3 )
    {
      if ( dword_140D58A58 == 1 )
        return (unsigned __int8)sub_140203D88((__int64)&unk_140CF9340, v3, v5);
      else
        return sub_1402DB870(v3);
    }
  }
  return result;
}
