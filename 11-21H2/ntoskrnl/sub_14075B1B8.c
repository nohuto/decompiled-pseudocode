/*
 * XREFs of sub_14075B1B8 @ 0x14075B1B8
 * Callers:
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_140841B4C @ 0x140841B4C (sub_140841B4C.c)
 *     sub_14084205C @ 0x14084205C (sub_14084205C.c)
 *     sub_140842D98 @ 0x140842D98 (sub_140842D98.c)
 *     sub_140A111BC @ 0x140A111BC (sub_140A111BC.c)
 *     sub_140A16C68 @ 0x140A16C68 (sub_140A16C68.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075B1B8(_QWORD *a1, _WORD *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // rbx
  _WORD *v7; // rax
  void *v8; // rdi
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v5 = sub_1402E0AC4(a2, 0x7FFFFFFFuLL, &v10);
  if ( v5 < 0 )
  {
LABEL_15:
    sub_1406E0C3C(1LL, (__int64)"AslStringDuplicate");
    return (unsigned int)v5;
  }
  v6 = v10 + 1;
  if ( v10 + 1 < v10 || !is_mul_ok(v6, 2uLL) )
  {
    v5 = -1073741675;
    goto LABEL_15;
  }
  v7 = (_WORD *)sub_14075B444(v4, 2 * v6);
  v8 = v7;
  if ( !v7 )
  {
    v5 = -1073741801;
    sub_1406E0C3C(1LL, (__int64)"AslStringDuplicate");
    return (unsigned int)v5;
  }
  v5 = sub_1402E0200(v7, v6, (__int64)a2);
  if ( v5 < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"AslStringDuplicate");
    ExFreePoolWithTag(v8, 0x74705041u);
    return (unsigned int)v5;
  }
  *a1 = v8;
  return 0;
}
