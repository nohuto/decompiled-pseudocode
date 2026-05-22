/*
 * XREFs of ??1CCompositionTexture@DirectComposition@@EEAA@XZ @ 0x18009FCA4
 * Callers:
 *     ??_GCCompositionTexture@DirectComposition@@EEAAPEAXI@Z @ 0x18009FD40 (--_GCCompositionTexture@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?NotifyTextureDestroyed@CDeviceTextureManager@DirectComposition@@QEAAXPEAVCCompositionTexture@2@@Z @ 0x180098C48 (-NotifyTextureDestroyed@CDeviceTextureManager@DirectComposition@@QEAAXPEAVCCompositionTexture@2@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E76D8 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 */

void __fastcall DirectComposition::CCompositionTexture::~CCompositionTexture(
        DirectComposition::CCompositionTexture *this)
{
  *(_QWORD *)this = &DirectComposition::CCompositionTexture::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &DirectComposition::CCompositionTexture::`vftable'{for `IDCompositionTexture'};
  DirectComposition::CDeviceTextureManager::NotifyTextureDestroyed(
    *((DirectComposition::CDeviceTextureManager **)this + 3),
    this);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((char *)this + 56);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)this + 3);
}
