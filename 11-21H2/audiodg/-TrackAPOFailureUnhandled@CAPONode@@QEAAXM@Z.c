/*
 * XREFs of ?TrackAPOFailureUnhandled@CAPONode@@QEAAXM@Z @ 0x1400817AC
 * Callers:
 *     ?TrackAPOFailureUnhandled@CAudioProcessor@@UEAAJM@Z @ 0x1400826D0 (-TrackAPOFailureUnhandled@CAudioProcessor@@UEAAJM@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAPONode::TrackAPOFailureUnhandled(CAPONode *this, float a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 1);
  v3 = 0LL;
  if ( (**v2)(v2, &GUID_1c5c2642_7b14_48c8_94d0_f2a41d7ea9bc, &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v3);
}
