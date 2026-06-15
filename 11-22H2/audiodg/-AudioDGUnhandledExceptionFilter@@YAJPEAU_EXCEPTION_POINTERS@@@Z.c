/*
 * XREFs of ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1400561B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140056518 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x140059DB8 (-TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z.c)
 */

__int64 __fastcall AudioDGUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  int v1; // edi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  CSystemAudioDeviceSharedBase **ValueAt; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+48h] [rbp-9h] BYREF
  int v12; // [rsp+50h] [rbp-1h]
  char v13[32]; // [rsp+58h] [rbp+7h] BYREF
  int *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]

  v1 = qword_1400CF7B0;
  v2 = 0;
  if ( (_DWORD)qword_1400CF7B0 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v11 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1400CF680;
      qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v11, v3, v4);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 2u )
    {
      v9 = v1;
      v14 = &v9;
      v15 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v5, byte_1400B2F9A, 0LL, 0LL, 3, (__int64)v13);
    }
    if ( v1 )
    {
      do
      {
        ValueAt = (CSystemAudioDeviceSharedBase **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                                                     v5,
                                                     v2);
        CSystemAudioDeviceSharedBase::TrackAPOFailureUnhandled(*ValueAt, (float)v1);
        ++v2;
      }
      while ( v2 < v1 );
    }
  }
  return 0LL;
}
