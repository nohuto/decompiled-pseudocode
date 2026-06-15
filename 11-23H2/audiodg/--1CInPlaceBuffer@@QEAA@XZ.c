/*
 * XREFs of ??1CInPlaceBuffer@@QEAA@XZ @ 0x140025064
 * Callers:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140025024 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CInPlaceBuffer::~CInPlaceBuffer(CInPlaceBuffer *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 24);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 1));
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v1);
}
