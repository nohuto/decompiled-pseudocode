/*
 * XREFs of ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180059E1C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x180050CBC (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180059FB0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x18005A074 (-HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18005A104 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005B9DC (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18005BA3C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Create(
        struct IWICImagingFactory *a1,
        const void *a2,
        unsigned int a3,
        double a4,
        double a5,
        enum DXGI_FORMAT a6,
        enum DXGI_ALPHA_MODE a7,
        struct IBitmapSource **a8)
{
  CCompressedSourceBitmap *v11; // rax
  enum DXGI_FORMAT v12; // r8d
  enum DXGI_ALPHA_MODE v13; // r9d
  CMILCOMBase *v14; // rax
  CMILCOMBase *v15; // rsi
  int v16; // eax
  unsigned int v17; // edi
  int v18; // r9d
  unsigned int v20; // eax

  *a8 = 0LL;
  v11 = (CCompressedSourceBitmap *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     296LL);
  if ( !v11 || (v14 = CCompressedSourceBitmap::CCompressedSourceBitmap(v11, a1, v12, v13), (v15 = v14) == 0LL) )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x22u);
    return v17;
  }
  CMILCOMBase::InternalAddRef(v14);
  v16 = CCompressedSourceBitmap::HrInitFromCompressedBytes(v15, a2, a3);
  v17 = v16;
  if ( v16 < 0 )
  {
    v18 = v16;
    v20 = 37;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v20);
    CMILCOMBase::InternalRelease(v15);
    return v17;
  }
  v17 = CBitmap::SetResolution((CMILCOMBase *)((char *)v15 + 24), a4, a5);
  v18 = v17;
  if ( (v17 & 0x80000000) != 0 )
  {
    v20 = 39;
    goto LABEL_9;
  }
  *a8 = (CMILCOMBase *)((char *)v15 + 16);
  return v17;
}
