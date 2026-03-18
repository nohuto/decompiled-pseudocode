/*
 * XREFs of ?CalcScopeMode@CCpuClippingData@@CA?AW4Enum@CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W423@@Z @ 0x180048F94
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 * Callees:
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180049050 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800490DC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x180049124 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CCpuClippingData::CalcScopeMode(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  CTransform3D *Transform3DEffectNoRef; // rax
  int v8; // edi
  CTransform3D *v9; // rcx
  const struct CMILMatrix *Matrix; // rax
  const struct CMILMatrix *v11; // rax
  float v12[10]; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+60h] [rbp+18h] BYREF
  float v14; // [rsp+68h] [rbp+20h] BYREF

  result = 4LL;
  if ( a3 != 4 && CCommonRegistryData::EnableCpuClipping )
  {
    if ( a3 == 3 )
      return 3LL;
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
    if ( Transform3DEffectNoRef
      && (v11 = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(a1 + 140)),
          !CCpuClippingData::IsScopePreservingTransform(v11)) )
    {
      return 3LL;
    }
    else
    {
      v8 = -(a2 != 0);
      if ( a3 == 2 || CVisual::GetEffectiveOffset((CVisual *)a1, v12, &v14, &v13) && v13 != 0.0 )
        return (unsigned int)(v8 + 3);
      v9 = *(CTransform3D **)(a1 + 240);
      if ( v9
        && (Matrix = CTransform3D::GetMatrix(v9, (const struct D2D_SIZE_F *)(a1 + 140)),
            !CCpuClippingData::IsScopePreservingTransform(Matrix)) )
      {
        return (unsigned int)(v8 + 3);
      }
      else
      {
        return 1LL;
      }
    }
  }
  return result;
}
