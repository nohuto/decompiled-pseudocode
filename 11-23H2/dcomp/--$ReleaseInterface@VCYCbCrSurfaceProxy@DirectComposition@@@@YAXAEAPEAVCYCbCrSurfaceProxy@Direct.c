/*
 * XREFs of ??$ReleaseInterface@VCYCbCrSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCYCbCrSurfaceProxy@DirectComposition@@@Z @ 0x1800ECFC4
 * Callers:
 *     ?CreateYCbCrSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCYCbCrSurfaceProxy@2@@Z @ 0x1800F14D8 (-CreateYCbCrSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCYCbCrSurfaceProxy@2@@Z.c)
 *     ??1CYCbCrSurface@DirectComposition@@MEAA@XZ @ 0x1800FEB7C (--1CYCbCrSurface@DirectComposition@@MEAA@XZ.c)
 *     ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800FF100 (-Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CYCbCrSurfaceProxy>(
        DirectComposition::CTransformGroupProxy **a1)
{
  DirectComposition::CTransformGroupProxy *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = DirectComposition::CTransformGroupProxy::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
