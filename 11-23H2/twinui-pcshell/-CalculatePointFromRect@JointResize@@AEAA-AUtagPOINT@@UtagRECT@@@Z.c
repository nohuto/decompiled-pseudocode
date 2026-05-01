/*
 * XREFs of ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x1805E1D2C
 * Callers:
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x1805E17A8 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1805E3F60 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct tagPOINT __fastcall JointResize::CalculatePointFromRect(JointResize *this, struct tagRECT *a2, LONG *a3)
{
  int v3; // r9d
  LONG v4; // eax
  LONG v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 74);
  *(_QWORD *)&a2->left = 0LL;
  if ( v3 == 10 || v3 == 11 )
  {
    if ( v3 == 10 )
      v5 = *a3;
    else
      v5 = a3[2];
    a2->left = v5;
LABEL_12:
    v4 = a3[1];
    goto LABEL_13;
  }
  if ( v3 != 12 && v3 != 15 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2DC,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)0x8000FFFFLL,
      v7);
  a2->left = *a3;
  if ( v3 == 12 )
    goto LABEL_12;
  v4 = a3[3];
LABEL_13:
  a2->top = v4;
  return (struct tagPOINT)a2;
}
