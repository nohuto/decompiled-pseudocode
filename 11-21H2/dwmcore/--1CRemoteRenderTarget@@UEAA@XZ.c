/*
 * XREFs of ??1CRemoteRenderTarget@@UEAA@XZ @ 0x1800FF814
 * Callers:
 *     ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x1800FF7D0 (--_GCRemoteRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CRemoteRenderTarget::~CRemoteRenderTarget(CRemoteRenderTarget *this)
{
  CResource *v2; // rcx
  CResource *v3; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 39);
  v2 = (CResource *)*((_QWORD *)this + 23);
  if ( v2 )
    CResource::InternalRelease(v2);
  v3 = (CResource *)*((_QWORD *)this + 22);
  if ( v3 )
    CResource::InternalRelease(v3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 168);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 20);
  CRenderTarget::~CRenderTarget(this);
}
