/*
 * XREFs of ??1CInPlaceBuffer@@QEAA@XZ @ 0x140008794
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000AE60 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14002D2BC (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CInPlaceBuffer::~CInPlaceBuffer(CInPlaceBuffer *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 24);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 1));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v1);
}
