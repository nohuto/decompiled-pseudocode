/*
 * XREFs of ??1CBridgeToApoAuxInput@@EEAA@XZ @ 0x14004F148
 * Callers:
 *     ??_GCBridgeToApoAuxInput@@EEAAPEAXI@Z @ 0x14004F250 (--_GCBridgeToApoAuxInput@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBridgeToApoAuxInput::~CBridgeToApoAuxInput(CBridgeToApoAuxInput *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CBridgeToApoAuxInput::`vftable';
  if ( *((_DWORD *)this + 10) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
    *((_DWORD *)this + 10) = 0;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 3);
  v2 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
