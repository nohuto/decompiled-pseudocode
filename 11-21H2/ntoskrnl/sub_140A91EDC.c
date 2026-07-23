/*
 * XREFs of sub_140A91EDC @ 0x140A91EDC
 * Callers:
 *     sub_140A7F132 @ 0x140A7F132 (sub_140A7F132.c)
 *     sub_140A91C30 @ 0x140A91C30 (sub_140A91C30.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 */

__int64 sub_140A91EDC()
{
  _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rdi
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  v7 = 0LL;
  sub_14045F6C8((__int64)&v7, 0);
  v3 = (unsigned __int64 *)sub_1402D8518(&qword_140D58A10, (__int64)&v7, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (_SLIST_ENTRY *)sub_1402DB8D8((__int64)&qword_140D58A10, (__int64)&v7, *v3, 0LL);
  sub_1402D81DC((__int64)&v7);
  if ( !v4 )
    return 0LL;
  if ( v0 )
  {
    if ( dword_140D58A30 == 1 )
      sub_140203D88((__int64)&unk_140CF9340, v0, v5);
    else
      sub_1402DB870(v0);
  }
  return 1LL;
}
