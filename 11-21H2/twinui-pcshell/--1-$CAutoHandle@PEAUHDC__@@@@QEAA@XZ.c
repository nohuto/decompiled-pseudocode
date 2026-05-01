/*
 * XREFs of ??1?$CAutoHandle@PEAUHDC__@@@@QEAA@XZ @ 0x18052189C
 * Callers:
 *     _lambda_aa6219af2ba03d3bdd3a1a119d509910_::operator() @ 0x1801B6FC0 (_lambda_aa6219af2ba03d3bdd3a1a119d509910_--operator().c)
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
