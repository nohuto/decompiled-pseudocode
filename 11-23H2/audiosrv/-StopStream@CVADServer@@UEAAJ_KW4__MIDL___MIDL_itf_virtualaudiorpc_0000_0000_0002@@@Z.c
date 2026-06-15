/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180012FE0
 * Callers:
 *     AudioServerStopStream @ 0x1800127E0 (AudioServerStopStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180015400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180024898 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800303D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180073A08 (--0-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180073A44 (--1-$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800822C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     ??B?$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x180104F50 (--B-$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     wil::details::lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___::_lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___ @ 0x18011C6F4 (wil--details--lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___--_lambda_call__lambda_4cf3.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, __int64 *); // rbx
  const struct _tlgProvider_t *v19; // rax
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  _QWORD *v28; // rdi
  int v29; // eax
  const struct _tlgProvider_t *v30; // rax
  int v31; // ebx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rdi
  __int64 i; // rbx
  int v40; // eax
  int v42; // [rsp+20h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-30h] BYREF
  __int64 v44; // [rsp+48h] [rbp-28h] BYREF
  __int64 v45; // [rsp+50h] [rbp-20h] BYREF
  __int64 v46; // [rsp+58h] [rbp-18h] BYREF
  __int64 v47; // [rsp+60h] [rbp-10h] BYREF
  char v48; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v50; // [rsp+90h] [rbp+20h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+38h] BYREF

  v3 = a1 + 192;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v7 = *(_DWORD *)(a1 + 160) == 0;
  v44 = v3;
  v47 = a1;
  v48 = 1;
  if ( v7 )
  {
    v8 = -2004287487;
    v9 = 1788LL;
    v10 = 2290679809LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10,
      v42);
    goto LABEL_35;
  }
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v8 = -2004287487;
    v9 = 1789LL;
    v10 = 2290679809LL;
    goto LABEL_15;
  }
  v11 = CVADServer::ValidateStreamHandle((CVADServer *)a1, a2);
  v13 = v11;
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a3 == 1;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 144) + 264LL))(
            *(_QWORD *)(a1 + 144),
            *(_QWORD *)(a1 + 168),
            v12);
    v13 = v15;
    if ( v15 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 164) )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 232LL))(
                *(_QWORD *)(a1 + 144),
                *(_QWORD *)(a1 + 168));
        v8 = v16;
        if ( v16 < 0 )
        {
          v10 = (unsigned int)v16;
          v9 = 1798LL;
          goto LABEL_15;
        }
        v43 = 0LL;
        v17 = *(_QWORD *)(a1 + 168);
        *(_BYTE *)(a1 + 164) = 0;
        if ( v17 )
        {
          if ( *(_QWORD *)(a1 + 144) )
          {
            v18 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v17 + 8) + 24LL);
            wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v43);
            if ( v18(v17 + 8, &v43) >= 0 )
            {
              v19 = AudioSrvTelemetryProvider::Provider();
              v20 = (int)v19;
              if ( *(_DWORD *)v19 > 4u )
              {
                if ( (unsigned __int8)tlgKeywordOn(v19, 512LL) )
                {
                  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
                  v22 = *(_QWORD *)(a1 + 144) + 8LL;
                  LODWORD(v50) = v21;
                  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 64LL))(v22);
                  v24 = *(_QWORD *)(a1 + 168) + 8LL;
                  v45 = v23;
                  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 80LL))(v24);
                  LODWORD(v51) = a3;
                  v46 = v25;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    v20,
                    (unsigned int)&unk_180194295,
                    v26,
                    v27,
                    (__int64)&v51,
                    (__int64)&v46,
                    (__int64)&v45,
                    (__int64)&v50);
                }
              }
            }
          }
        }
        v28 = (_QWORD *)(a1 + 568);
        if ( (unsigned __int8)wil::com_ptr_t<IBridgeStreamInstanceProxy,wil::err_returncode_policy>::operator bool(a1 + 568) )
        {
          v29 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 48LL))(*v28);
          if ( v29 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x71A,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v29);
          v30 = AudioSrvTelemetryProvider::Provider();
          v31 = (int)v30;
          if ( *(_DWORD *)v30 > 4u && (unsigned __int8)tlgKeywordOn(v30, 512LL) )
          {
            v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
            v33 = *(_QWORD *)(a1 + 144) + 8LL;
            LODWORD(v50) = v32;
            v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 64LL))(v33);
            v35 = *v28;
            v51 = v34;
            v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 96LL))(v35);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v31,
              (unsigned int)&unk_180194230,
              v36,
              v37,
              (__int64)&v46,
              (__int64)&v51,
              (__int64)&v50);
          }
          v38 = *(_QWORD *)(a1 + 584);
          for ( i = *(_QWORD *)(a1 + 576); i != v38; i += 8LL )
          {
            wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>::com_ptr_t<IAudioClient,wil::err_returncode_policy>(
              &v50,
              i);
            v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 88LL))(v50);
            if ( v40 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x728,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v40);
            wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>(&v50);
          }
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v43);
      }
      v8 = 0;
      goto LABEL_35;
    }
    v8 = -2004287484;
    if ( v15 != -2004287484 )
    {
      v14 = 1793LL;
      goto LABEL_8;
    }
  }
  else
  {
    v8 = -2005139336;
    if ( v11 != -2005139336 )
    {
      v14 = 1790LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v13,
        v42);
      v8 = v13;
    }
  }
LABEL_35:
  wil::details::lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___::_lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___(&v47);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v44);
  return v8;
}
