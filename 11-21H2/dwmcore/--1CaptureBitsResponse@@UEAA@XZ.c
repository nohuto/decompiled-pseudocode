/*
 * XREFs of ??1CaptureBitsResponse@@UEAA@XZ @ 0x18002736C
 * Callers:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x180026D38 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801B9830 (--_GCaptureBitsResponse@@UEAAPEAXI@Z.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1801E18D0 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800644D8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  __int64 *v2; // rdi
  const void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  v2 = (__int64 *)((char *)this + 1680);
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 1680);
  v3 = (const void *)*((_QWORD *)this + 208);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 207);
  if ( v4 )
    CloseHandle(v4);
  _InterlockedDecrement(&CaptureBitsResponse::s_cOutstandingCaptures);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(v2);
  COcclusionContext::~COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 64);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v5);
  *(_QWORD *)this = &CResponseItem::`vftable';
}
