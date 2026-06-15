/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140059218
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400140E0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14002D2BC (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
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
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  operator delete(this);
  return this;
}
