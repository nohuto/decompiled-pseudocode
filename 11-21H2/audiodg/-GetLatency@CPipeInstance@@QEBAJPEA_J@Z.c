/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140019B28
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400192A0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x1400194D0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140058FE0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v11; // rbx
  _DWORD *v12; // rcx
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-49h]
  double v18; // [rsp+48h] [rbp-41h] BYREF
  __int64 v19; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v20[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v21; // [rsp+60h] [rbp-29h]
  unsigned __int16 *v22; // [rsp+70h] [rbp-19h] BYREF
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  void *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  __int64 v28; // [rsp+90h] [rbp+7h]
  int v29; // [rsp+98h] [rbp+Fh]
  int v30; // [rsp+9Ch] [rbp+13h]
  double *v31; // [rsp+A0h] [rbp+17h]
  int v32; // [rsp+A8h] [rbp+1Fh]
  int v33; // [rsp+ACh] [rbp+23h]

  v3 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  while ( v4 )
  {
    v6 = v4[2];
    v4 = (_QWORD *)*v4;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 56LL))(v6, &v16);
    if ( v8 < 0 )
    {
      if ( *(_DWORD *)(v6 + 40) == 2 )
      {
        v11 = *(_QWORD *)(v6 + 32);
        if ( *(_DWORD *)(v11 + 4) )
        {
          v12 = *(_DWORD **)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                               v7,
                               _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                           + 8);
          if ( *v12 > 2u )
          {
            v15 = v8;
            v19 = v11 + 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              (_DWORD)v12,
              (unsigned int)&unk_1400A6501,
              v13,
              v14,
              (__int64)&v19,
              (__int64)&v15);
          }
        }
      }
    }
    else
    {
      v3 += v16;
      if ( *(_DWORD *)(v6 + 40) == 2 )
      {
        v9 = *(_QWORD *)(v6 + 32);
        if ( *(_DWORD *)(v9 + 4) )
        {
          v5 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                             v7,
                             _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                         + 8);
          if ( *(_DWORD *)v5 > 4u )
          {
            v18 = (double)(int)v16 / 10000000.0;
            v31 = &v18;
            v32 = 8;
            v33 = 0;
            v28 = v9 + 8;
            v29 = 16;
            v30 = 0;
            v20[0] = 184549376;
            v20[1] = 4;
            v21 = 0LL;
            v22 = *(unsigned __int16 **)(v5 + 8);
            v23 = *v22;
            v24 = 2;
            v25 = &unk_1400A6540;
            v26 = 37;
            v27 = 1;
            v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v20, 0LL, 0LL, 4, &v22);
          }
        }
      }
    }
  }
  *a2 = v3;
  return 0LL;
}
