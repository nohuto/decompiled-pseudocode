/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x1800A0A60
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800A08AC (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x1800A0ADC (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x1800A2018 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(struct IDeviceTarget *a1, struct CScratchRenderTargetBitmap **a2)
{
  unsigned int v3; // ebx
  CScratchRenderTargetBitmap *v5; // rax
  __int64 v6; // rcx
  CScratchRenderTargetBitmap *v7; // rax
  CRenderTargetBitmap *v8; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = (CScratchRenderTargetBitmap *)DefaultHeap::Alloc(0x120uLL);
  if ( v5 && (v7 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v5), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CScratchRenderTargetBitmap *)((char *)v7 + 8));
    CRenderTargetBitmap::Initialize(v8, a1);
    *a2 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v3;
}
