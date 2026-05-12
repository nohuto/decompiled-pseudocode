/*
 * XREFs of sub_1C0018C6C @ 0x1C0018C6C
 * Callers:
 *     sub_1C0018B98 @ 0x1C0018B98 (sub_1C0018B98.c)
 *     sub_1C0037B04 @ 0x1C0037B04 (sub_1C0037B04.c)
 * Callees:
 *     sub_1C0008374 @ 0x1C0008374 (sub_1C0008374.c)
 */

__int64 __fastcall sub_1C0018C6C(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  result = sub_1C0008374((__int64)a1, a2, &v6);
  if ( (int)result >= 0 )
  {
    v4 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v5 = (_QWORD *)v6[1], (_QWORD *)*v5 != v6) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*a1;
  }
  return result;
}
