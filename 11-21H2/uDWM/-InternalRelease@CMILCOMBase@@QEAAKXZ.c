/*
 * XREFs of ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18005BA3C
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180059104 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180059E1C (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x18005BA30 (-Release@CWICBitmapWrapper@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBase::InternalRelease(CMILCOMBase *this)
{
  unsigned __int32 v1; // ebx
  __int64 v3; // rdx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    v3 = *(_QWORD *)this;
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CMILCOMBase *, __int64))(v3 + 24))(this, 1LL);
  }
  return v1;
}
