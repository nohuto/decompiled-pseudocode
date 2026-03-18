/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800BF178
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800FCB74 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x18010B1C4 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801C18A8 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E954C (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801EA3A4 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801F9058 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802A8B80 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C0BFC (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  CRenderTarget::ReleaseVisualTree(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
