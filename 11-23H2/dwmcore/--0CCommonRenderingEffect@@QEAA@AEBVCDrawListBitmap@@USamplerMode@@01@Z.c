/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18007D8A8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000F370 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800C27D0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800C3030 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ??0CProjectedShadowRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180208A78 (--0CProjectedShadowRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18007BF40 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800DAC80 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     IsWhitePixelOptimizationCandidate @ 0x1800E0094 (IsWhitePixelOptimizationCandidate.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x180106D14 (--0SamplerMode@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  char v5; // bl
  CDrawListBitmap *v8; // rsi
  __int64 v9; // rbp
  __int64 v11; // r14
  SamplerMode *v12; // rsi
  char v13; // al
  char v14; // cl
  char v15; // dl
  char v16; // al
  __int64 result; // rax

  v5 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  v8 = (CDrawListBitmap *)(a1 + 16);
  v9 = 2LL;
  v11 = 2LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v8);
    v8 = (CDrawListBitmap *)((char *)v8 + 24);
    --v11;
  }
  while ( v11 );
  v12 = (SamplerMode *)(a1 + 64);
  do
  {
    SamplerMode::SamplerMode(v12);
    v12 = (SamplerMode *)((char *)v12 + 3);
    --v9;
  }
  while ( v9 );
  CDrawListBitmap::operator=((__int64 *)(a1 + 16), a2);
  CDrawListBitmap::operator=((__int64 *)(a1 + 40), a4);
  *(_WORD *)(a1 + 64) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 66) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 67) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 69) = *(_BYTE *)(a5 + 2);
  if ( !a2[1] || (v13 = IsWhitePixelOptimizationCandidate(a2, 0LL), v14 = 0, v13) )
    v14 = 1;
  *(_BYTE *)(a1 + 70) = v14;
  if ( !a4[1] )
    goto LABEL_12;
  v15 = v14;
  if ( CCommonRegistryData::EnableCommonSuperSets )
  {
    if ( !*a4 )
    {
LABEL_13:
      v15 = v14;
      goto LABEL_14;
    }
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a4 + 24LL))(*a4);
    v14 = *(_BYTE *)(a1 + 70);
    v15 = v14;
    if ( v16 )
    {
LABEL_12:
      v5 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  result = a1;
  *(_BYTE *)(a1 + 70) = v5 & v15;
  return result;
}
