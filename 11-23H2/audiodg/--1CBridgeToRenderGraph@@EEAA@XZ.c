/*
 * XREFs of ??1CBridgeToRenderGraph@@EEAA@XZ @ 0x14007A150
 * Callers:
 *     ??_ECBridgeToRenderGraph@@EEAAPEAXI@Z @ 0x14007A200 (--_ECBridgeToRenderGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBridgeToRenderGraph::~CBridgeToRenderGraph(CBridgeToRenderGraph *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CBridgeToRenderGraph::`vftable';
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 8) = 0LL;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 3);
  v2 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
