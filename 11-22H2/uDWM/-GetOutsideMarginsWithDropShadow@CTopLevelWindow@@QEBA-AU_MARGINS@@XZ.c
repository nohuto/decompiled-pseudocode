/*
 * XREFs of ?GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA?AU_MARGINS@@XZ @ 0x180053F28
 * Callers:
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x18000CDA0 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     _lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator() @ 0x180053ED4 (_lambda_23107513b1da1e4c6f608e9c21e81ef1_--operator().c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall CTopLevelWindow::GetOutsideMarginsWithDropShadow(
        CTopLevelWindow *this,
        struct _MARGINS *__return_ptr retstr)
{
  struct _MARGINS v2; // xmm0
  struct _MARGINS *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9

  v2 = *(struct _MARGINS *)((char *)this + 660);
  v3 = retstr;
  v4 = this - (CTopLevelWindow *)retstr;
  v5 = 4LL;
  *retstr = v2;
  do
  {
    v3->cxLeftWidth -= *(int *)((char *)&v3[43].cxRightWidth + v4);
    v3 = (struct _MARGINS *)((char *)v3 + 4);
    --v5;
  }
  while ( v5 );
  return retstr;
}
