/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x140057314
 * Callers:
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x140054540 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140056480 (--1-$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceSharedBase::TrackAPOFailureUnhandled(CSystemAudioDeviceSharedBase *this, float a2)
{
  _QWORD **v2; // rbx
  _QWORD **v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD **)*((_QWORD *)this + 41);
  v3 = v2;
  if ( v2 )
    ((void (__fastcall *)(_QWORD **))(*v2)[1])(v2);
  (*(void (__fastcall **)(_QWORD *))(*v2[18] + 128LL))(v2[18]);
  ATL::CComPtrBase<CAudioDeviceGraph>::~CComPtrBase<CAudioDeviceGraph>((__int64 *)&v3);
}
