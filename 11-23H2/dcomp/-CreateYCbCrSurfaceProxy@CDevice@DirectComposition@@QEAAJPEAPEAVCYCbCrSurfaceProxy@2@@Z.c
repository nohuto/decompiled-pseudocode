/*
 * XREFs of ?CreateYCbCrSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCYCbCrSurfaceProxy@2@@Z @ 0x1800F14D8
 * Callers:
 *     ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800FF100 (-Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ??$ReleaseInterface@VCYCbCrSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCYCbCrSurfaceProxy@DirectComposition@@@Z @ 0x1800ECFC4 (--$ReleaseInterface@VCYCbCrSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCYCbCrSurfaceProxy@Direct.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateYCbCrSurfaceProxy(
        DirectComposition::CDevice *this,
        struct DirectComposition::CYCbCrSurfaceProxy **a2)
{
  int v3; // ebx
  struct DirectComposition::CYCbCrSurfaceProxy *v4; // rdx
  unsigned int v5; // ecx
  DirectComposition::CTransformGroupProxy *v7; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  struct DirectComposition::CYCbCrSurfaceProxy *v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0LL;
  v9 = 0LL;
  v3 = DirectComposition::CDevice::CreateProxyInternal(this, 205, 0, (void **)&v9, &v8);
  if ( v3 >= 0 )
  {
    v4 = v9;
    v5 = v8;
    *a2 = v9;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CFilterEffectProxy::`vftable';
  }
  ReleaseInterface<DirectComposition::CYCbCrSurfaceProxy>(&v7);
  return (unsigned int)v3;
}
