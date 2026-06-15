/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180039B90
 * Callers:
 *     AudioServerStartStream @ 0x180011E90 (AudioServerStartStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180015400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180024898 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800303D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x180039FE4 (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180073A38 (--0-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180073A74 (--1-$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     ??B?$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x180104FA0 (--B-$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, __int64 *); // rbx
  __int64 v17; // rcx
  const struct _tlgProvider_t *v18; // rax
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rcx
  const WCHAR *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdi
  int v27; // eax
  __int64 v28; // rcx
  const struct _tlgProvider_t *v29; // rax
  int v30; // ebx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 i; // rbx
  int v39; // eax
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v42; // [rsp+48h] [rbp-18h] BYREF
  int v43[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v45; // [rsp+80h] [rbp+20h] BYREF
  __int64 v46; // [rsp+98h] [rbp+38h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v7 = *(_DWORD *)(a1 + 160) == 0;
  v41 = v3;
  if ( v7 )
  {
    v8 = -2004287487;
    v9 = 1630LL;
    goto LABEL_10;
  }
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v8 = -2004287487;
    v9 = 1631LL;
    goto LABEL_10;
  }
  v10 = CVADServer::ValidateStreamHandle((CVADServer *)a1, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( !a3 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 264LL))(
              *(_QWORD *)(a1 + 144),
              *(_QWORD *)(a1 + 168),
              0LL);
      v8 = v13;
      if ( v13 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 164) )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids);
          }
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 224LL))(
                  *(_QWORD *)(a1 + 144),
                  *(_QWORD *)(a1 + 168));
          v8 = v14;
          if ( v14 < 0 )
          {
            v12 = (unsigned int)v14;
            v9 = 1642LL;
            goto LABEL_11;
          }
          *(_BYTE *)(a1 + 164) = 1;
          *(_BYTE *)(a1 + 176) = 0;
          CVADServer::AcquirePowerReference((CVADServer *)a1);
          v15 = *(_QWORD *)(a1 + 168);
          v46 = 0LL;
          v16 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v15 + 8) + 24LL);
          wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v46);
          if ( v16(v15 + 8, &v46) >= 0 )
          {
            v18 = AudioSrvTelemetryProvider::Provider(v17);
            v19 = (int)v18;
            if ( *(_DWORD *)v18 > 4u && tlgKeywordOn((__int64)v18, 512LL) )
            {
              v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 40LL))(v46);
              v21 = *(_QWORD *)(a1 + 144) + 8LL;
              LODWORD(v45) = v20;
              v22 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 64LL))(v21);
              v23 = *(_QWORD *)(a1 + 168) + 8LL;
              v42 = v22;
              *(_QWORD *)v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 80LL))(v23);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v19,
                (int)&unk_1801943FE,
                v24,
                v25,
                (__int64)v43,
                &v42,
                (__int64)&v45);
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 48LL))(v46);
            IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
          }
          v26 = (_QWORD *)(a1 + 568);
          if ( (unsigned __int8)wil::com_ptr_t<IBridgeStreamInstanceProxy,wil::err_returncode_policy>::operator bool(a1 + 568) )
          {
            v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 40LL))(*v26);
            if ( v27 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x684,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v27);
            v29 = AudioSrvTelemetryProvider::Provider(v28);
            v30 = (int)v29;
            if ( *(_DWORD *)v29 > 4u && tlgKeywordOn((__int64)v29, 512LL) )
            {
              v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 40LL))(v46);
              v32 = *(_QWORD *)(a1 + 144) + 8LL;
              LODWORD(v45) = v31;
              v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 64LL))(v32);
              v34 = *v26;
              *(_QWORD *)v43 = v33;
              v42 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 96LL))(v34);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v30,
                (int)&unk_180194399,
                v35,
                v36,
                (__int64)&v42,
                (const WCHAR **)v43,
                (__int64)&v45);
            }
            v37 = *(_QWORD *)(a1 + 584);
            for ( i = *(_QWORD *)(a1 + 576); i != v37; i += 8LL )
            {
              wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>::com_ptr_t<IAudioClient,wil::err_returncode_policy>(
                &v45,
                i);
              v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 80LL))(v45);
              if ( v39 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x692,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (const char *)(unsigned int)v39);
              wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>(&v45);
            }
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v46);
        }
        v8 = 0;
        goto LABEL_39;
      }
      v12 = (unsigned int)v13;
      v9 = 1638LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v12);
      goto LABEL_39;
    }
    v8 = -2147418113;
    v9 = 1635LL;
LABEL_10:
    v12 = v8;
    goto LABEL_11;
  }
  v8 = -2005139336;
  if ( v10 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x660,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    v8 = v11;
  }
LABEL_39:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v41);
  return v8;
}
