/*
 * XREFs of ?CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z @ 0x1801FC098
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18006F200 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008F058 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800DBD0C (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEBA_NXZ @ 0x1801FCF4C (-IsColorConversionRequired@CBrushDrawListGenerator@@AEBA_NXZ.c)
 *     ?IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z @ 0x1801FD008 (-IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z.c)
 */

bool __fastcall CBrushDrawListGenerator::CanUseWarpFastPath(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v4; // rcx
  int v5; // xmm0_4
  int v6; // xmm1_4
  _DWORD v8[4]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v9[64]; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+70h] [rbp+27h]
  __int128 v11; // [rsp+80h] [rbp+37h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 24) + 8LL))(*((_QWORD *)a2 + 24)) != 1
    || *(_DWORD *)(*(_QWORD *)this + 340LL) == 4
    || (*((_DWORD *)this + 4) & 0x200) != 0
    && (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(_DWORD *)(*(_QWORD *)this + 332LL)) == 3
    || CBrushDrawListGenerator::IsColorConversionRequired(this)
    || *((_DWORD *)a2 + 50) )
  {
    return 0;
  }
  v4 = *(_QWORD *)this;
  v10 = 0;
  CMatrixStack::Top((CMatrixStack *)(v4 + 400), (struct CMILMatrix *)v9);
  v5 = *((_DWORD *)this + 2);
  v6 = *((_DWORD *)this + 3);
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = v5;
  v11 = 0LL;
  v8[3] = v6;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v9, (struct MilRectF *)v8, (float *)&v11);
  return CBrushDrawListGenerator::IsRatioWithinThresholdF(
           *((float *)&v11 + 2) - *(float *)&v11,
           *((float *)&v11 + 3) - *((float *)&v11 + 1));
}
