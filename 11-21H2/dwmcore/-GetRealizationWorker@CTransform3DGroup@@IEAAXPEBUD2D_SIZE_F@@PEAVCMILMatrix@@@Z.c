/*
 * XREFs of ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180242AE4
 * Callers:
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180242A50 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180242AA0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  char v6; // al
  unsigned int v7; // ecx
  CTransform3D **v8; // rbp
  CTransform3D **v9; // rdi
  const struct CMILMatrix *Matrix; // rax
  __int64 v11; // r8
  __int64 v12; // r9

  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  v6 = *((_BYTE *)a3 + 65) & 0xD7;
  *((_BYTE *)a3 + 64) = 85;
  *((_BYTE *)a3 + 65) = v6 | 0x17;
  v7 = *((_DWORD *)this + 8) ^ ((unsigned __int8)*((_DWORD *)this + 8) ^ (unsigned __int8)(*((_DWORD *)this + 8) + 2)) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) == 2 )
  {
    v8 = (CTransform3D **)*((_QWORD *)this + 21);
    v9 = (CTransform3D **)*((_QWORD *)this + 20);
    if ( v9 != v8 )
    {
      do
      {
        Matrix = CTransform3D::GetMatrix(*v9, a2);
        CMILMatrix::Multiply(a3, Matrix, v11, v12);
        ++v9;
      }
      while ( v9 != v8 );
      v7 = *((_DWORD *)this + 8);
    }
  }
  *((_DWORD *)this + 8) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * (v7 >> 1) - 2)) & 6;
}
