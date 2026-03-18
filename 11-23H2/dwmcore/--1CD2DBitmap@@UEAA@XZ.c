/*
 * XREFs of ??1CD2DBitmap@@UEAA@XZ @ 0x1800A1AE8
 * Callers:
 *     ??_GCD2DBitmap@@UEAAPEAXI@Z @ 0x18009F500 (--_GCD2DBitmap@@UEAAPEAXI@Z.c)
 *     ??_ECDeviceTextureTarget@@UEAAPEAXI@Z @ 0x1800A1650 (--_ECDeviceTextureTarget@@UEAAPEAXI@Z.c)
 *     ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x1800F5940 (--_ECSecondaryD2DBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029388 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 18);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  CD2DResource::~CD2DResource(this);
}
