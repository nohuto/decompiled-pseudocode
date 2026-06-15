/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x140076400
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000CFD8 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1400754A4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$01@@@-$_tlgWri.c)
 */

__int64 __fastcall CSystemEffectWrapper::TrackAPOFailureUnhandled(CSystemEffectWrapper *this, float a2)
{
  unsigned int v2; // edx
  union _RTL_RUN_ONCE *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rcx
  __int16 *v10; // rax
  __int16 v11; // dx
  LPVOID Context; // [rsp+40h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+50h] [rbp-10h]
  __int16 v16; // [rsp+80h] [rbp+20h] BYREF
  WINBOOL fPending; // [rsp+90h] [rbp+30h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF

  v2 = *((_DWORD *)this + 20);
  if ( v2 - 1 <= 2 )
  {
    v4 = (union _RTL_RUN_ONCE *)((char *)this + 56);
    TrackSystemEffectBehavior(*((_QWORD *)this + 9), v2, 0x8007023E, 1, (__int64)this + 56, SLODWORD(a2));
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v14 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1400CF680;
      qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v15 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v14, v7, v8);
    }
    v9 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v9 > 2u )
    {
      v10 = (__int16 *)*((_QWORD *)this + 9);
      v14 = v4;
      v11 = *v10;
      v18 = *((_DWORD *)this + 20);
      v16 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
        (__int64)v9,
        byte_1400B3C6A,
        v5,
        v6,
        (__int64)&v18,
        (__int64 *)&v14,
        (__int64)&v16);
    }
  }
  return 0LL;
}
