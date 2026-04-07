/*
 * XREFs of ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x18004F430
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18004EF0C (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180066358 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::HrInitFromCompressedBytes(
        CCompressedSourceBitmap *this,
        const void *a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  void *v7; // rax

  v6 = 0;
  v7 = (void *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 a3);
  *((_QWORD *)this + 34) = v7;
  if ( v7 )
  {
    *((_DWORD *)this + 70) = a3;
    memcpy_0(v7, a2, a3);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Fu, 0LL);
  }
  return v6;
}
