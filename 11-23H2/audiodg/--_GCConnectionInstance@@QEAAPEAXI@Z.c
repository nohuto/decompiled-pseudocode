/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000D610
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000D480 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400131E0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140025024 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CConnectionInstance *__fastcall CConnectionInstance::`scalar deleting destructor'(CConnectionInstance *this)
{
  CInPlaceBuffer *v2; // rcx

  if ( *((_QWORD *)this + 1) && *(_DWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 1) = 0LL;
  }
  v2 = (CInPlaceBuffer *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    CInPlaceBuffer::Release(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 6);
  operator delete(this);
  return this;
}
