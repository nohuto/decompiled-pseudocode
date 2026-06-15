/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000AE50
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140007F70 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008030 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14000DE20 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14005BFC0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v7; // rbx
  int v9; // r8d
  int v10; // r9d
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  _DWORD *v15; // rcx
  LPVOID v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  union _RTL_RUN_ONCE *v19; // [rsp+48h] [rbp-28h] BYREF
  int v20; // [rsp+50h] [rbp-20h]
  union _RTL_RUN_ONCE *v21; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  WINBOOL fPending; // [rsp+B0h] [rbp+40h] BYREF
  __int64 *v24; // [rsp+B8h] [rbp+48h]
  WINBOOL v25; // [rsp+C0h] [rbp+50h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp+58h] BYREF

  v24 = a2;
  v2 = a2;
  v3 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    do
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, &v17);
      if ( v6 < 0 )
      {
        if ( *(_DWORD *)(v5 + 40) == 2 )
        {
          v12 = *(_QWORD *)(v5 + 32);
          if ( *(_DWORD *)(v12 + 4) )
          {
            *(double *)&v16 = 0.0;
            if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v25, &v16)
              && v25 )
            {
              v21 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
              *(double *)&v16 = COERCE_DOUBLE(&qword_1400CF680);
              qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
              qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
              v22 = 0;
              wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v21);
            }
            v15 = (_DWORD *)*((_QWORD *)v16 + 1);
            if ( *v15 > 2u )
            {
              LODWORD(Context) = v6;
              v18 = v12 + 8;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                (_DWORD)v15,
                (unsigned int)&unk_1400B2FD1,
                v13,
                v14,
                (__int64)&v18,
                (__int64)&Context);
            }
          }
        }
      }
      else
      {
        v3 += v17;
        if ( *(_DWORD *)(v5 + 40) == 2 )
        {
          v7 = *(_QWORD *)(v5 + 32);
          if ( *(_DWORD *)(v7 + 4) )
          {
            Context = 0LL;
            if ( __std_init_once_begin_initialize(
                   &`AudioDgTelemetryProvider::Instance'::`2'::wrapper,
                   0,
                   &fPending,
                   &Context)
              && fPending )
            {
              v19 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
              Context = &qword_1400CF680;
              qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
              qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
              v20 = 0;
              wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v19);
            }
            v11 = (_DWORD *)*((_QWORD *)Context + 1);
            if ( *v11 > 4u )
            {
              *(double *)&v16 = (double)(int)v17 / 10000000.0;
              v18 = v7 + 8;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                (_DWORD)v11,
                (unsigned int)&unk_1400B3005,
                v9,
                v10,
                (__int64)&v18,
                (__int64)&v16);
            }
          }
        }
      }
    }
    while ( v4 );
    v2 = v24;
  }
  *v2 = v3;
  return 0LL;
}
