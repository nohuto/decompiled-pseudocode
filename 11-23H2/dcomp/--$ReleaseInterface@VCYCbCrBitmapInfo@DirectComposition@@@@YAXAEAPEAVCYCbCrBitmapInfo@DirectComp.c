/*
 * XREFs of ??$ReleaseInterface@VCYCbCrBitmapInfo@DirectComposition@@@@YAXAEAPEAVCYCbCrBitmapInfo@DirectComposition@@@Z @ 0x1800FEB00
 * Callers:
 *     ??1CYCbCrSurface@DirectComposition@@MEAA@XZ @ 0x1800FEB7C (--1CYCbCrSurface@DirectComposition@@MEAA@XZ.c)
 *     ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800FF100 (-Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CYCbCrBitmapInfo>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
