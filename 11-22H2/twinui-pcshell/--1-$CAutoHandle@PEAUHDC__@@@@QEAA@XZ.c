/*
 * XREFs of ??1?$CAutoHandle@PEAUHDC__@@@@QEAA@XZ @ 0x1805DA26C
 * Callers:
 *     _lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_::operator() @ 0x180217134 (_lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_--operator().c)
 *     _lambda_630a6a22fbdb797c79937bea35e7e306_::operator() @ 0x180217940 (_lambda_630a6a22fbdb797c79937bea35e7e306_--operator().c)
 *     _lambda_6e2da3457122464d9e70678964700a51_::operator() @ 0x180217A1C (_lambda_6e2da3457122464d9e70678964700a51_--operator().c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HDC__ *>::~CAutoHandle<HDC__ *>(HDC *a1)
{
  HDC v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteDC(v1);
  return (int)v1;
}
