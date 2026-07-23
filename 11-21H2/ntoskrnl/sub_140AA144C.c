/*
 * XREFs of sub_140AA144C @ 0x140AA144C
 * Callers:
 *     sub_14063D44C @ 0x14063D44C (sub_14063D44C.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140601948 @ 0x140601948 (sub_140601948.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA144C(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // rbx
  _SLIST_ENTRY *v6; // rbx
  __int64 v7; // r8
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( !dword_140D57574 )
    return 0LL;
  if ( !(unsigned int)sub_140601948() && qword_140D577D0 )
  {
    v10 = 0LL;
    sub_14045F6C8((__int64)&v9, 1);
    v4 = (ULONG_PTR *)sub_1402D8518(&qword_140D577C8, (__int64)&v9, BugCheckParameter3, a2);
    v5 = v4;
    if ( v4 )
    {
      if ( !dword_140D57570 && (dword_140C29FC0 & 0x800) != 0 )
        sub_140A8C924(0xC4u, 0xD2uLL, *v4, BugCheckParameter3, a2);
      v10 = *v5;
    }
    sub_1402D81DC((__int64)&v9);
    if ( v10 )
    {
      _InterlockedIncrement(&dword_140D576A0);
      sub_14045F6C8((__int64)&v9, 0);
      v6 = (_SLIST_ENTRY *)sub_1402DB8D8((__int64)&qword_140D577C8, (__int64)&v9, (unsigned __int64)&v10, 0LL);
      sub_1402D81DC((__int64)&v9);
      if ( v6 )
      {
        if ( dword_140D577E8 == 1 )
          sub_140203D88((__int64)&unk_140CF9340, v6, v7);
        else
          sub_1402DB870(v6);
      }
      return 0LL;
    }
  }
  return 1LL;
}
