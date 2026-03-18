/*
 * XREFs of IsWhitePixelOptimizationCandidate @ 0x1800C629C
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800AEC60 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800C67E8 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall IsWhitePixelOptimizationCandidate(__int64 *a1, int a2)
{
  __int64 v4; // rcx
  char v5; // bl
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( !CCommonRegistryData::EnableCommonSuperSets )
    return 0;
  v4 = *a1;
  if ( !v4 )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
    return 0;
  v5 = 1;
  if ( a2 != 1 )
  {
    if ( *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(a1, v7) + 8) )
      return 0;
  }
  return v5;
}
