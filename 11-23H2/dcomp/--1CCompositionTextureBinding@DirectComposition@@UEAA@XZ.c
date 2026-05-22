/*
 * XREFs of ??1CCompositionTextureBinding@DirectComposition@@UEAA@XZ @ 0x18009FD10
 * Callers:
 *     ??_ECCompositionTextureBinding@DirectComposition@@UEAAPEAXI@Z @ 0x18009FD80 (--_ECCompositionTextureBinding@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CCompositionTextureBinding::~CCompositionTextureBinding(
        DirectComposition::CCompositionTextureBinding *this)
{
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 2);
}
