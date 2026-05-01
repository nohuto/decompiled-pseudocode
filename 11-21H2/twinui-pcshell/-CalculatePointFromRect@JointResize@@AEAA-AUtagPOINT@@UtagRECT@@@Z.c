/*
 * XREFs of ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x180528004
 * Callers:
 *     _lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::operator() @ 0x1801B4BF4 (_lambda_1e36923a9b749c25b7f1ddb2e1df24d1_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x180529F80 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct tagPOINT __fastcall JointResize::CalculatePointFromRect(JointResize *this, struct tagRECT *a2, LONG *a3)
{
  int v3; // r9d
  LONG v4; // eax
  LONG v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 80);
  *(_QWORD *)&a2->left = 0LL;
  if ( v3 < 10 )
    goto LABEL_13;
  if ( v3 <= 11 )
  {
    if ( v3 == 10 )
      v5 = *a3;
    else
      v5 = a3[2];
    a2->left = v5;
    goto LABEL_11;
  }
  if ( v3 != 12 && v3 != 15 )
LABEL_13:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      993LL,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)0x8000FFFFLL,
      v7);
  a2->left = *a3;
  if ( v3 == 12 )
  {
LABEL_11:
    v4 = a3[1];
    goto LABEL_12;
  }
  v4 = a3[3];
LABEL_12:
  a2->top = v4;
  return (struct tagPOINT)a2;
}
