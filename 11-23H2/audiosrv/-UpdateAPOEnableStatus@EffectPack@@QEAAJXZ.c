/*
 * XREFs of ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x1801503C8
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180005A10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTem.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18002D140 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___ @ 0x18011B01C (wil--details--lambda_call__lambda_bb75d7955c525a160db854778f06b41a___--_lambda_call__lambda_bb75.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180149F90 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U-$_tlgWrapperB.c)
 *     ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18014B200 (-AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18014CFC8 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall EffectPack::UpdateAPOEnableStatus(EffectPack *this)
{
  int v2; // esi
  _DWORD *v3; // r14
  bool v4; // di
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  void *v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // [rsp+50h] [rbp-49h] BYREF
  LPVOID v26; // [rsp+58h] [rbp-41h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-31h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v30; // [rsp+80h] [rbp-19h]
  int v31[2]; // [rsp+88h] [rbp-11h] BYREF
  const WCHAR *v32; // [rsp+90h] [rbp-9h] BYREF
  const WCHAR *v33; // [rsp+98h] [rbp-1h] BYREF
  int v34[2]; // [rsp+A0h] [rbp+7h] BYREF
  PROPVARIANT *v35; // [rsp+A8h] [rbp+Fh] BYREF
  char v36; // [rsp+B0h] [rbp+17h]
  __int128 v37; // [rsp+B8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_OWORD *)pvar = 0LL;
  v30 = 0LL;
  v35 = pvar;
  v36 = 1;
  v2 = 1;
  v3 = (_DWORD *)((char *)this + 1204);
  do
  {
    v4 = 0;
    if ( *((_DWORD *)this + 305) )
      goto LABEL_52;
    if ( !*((_DWORD *)this + 304) )
      EffectPack::InitializeCriticalAPOMetadata(this);
    if ( !*v3 )
    {
LABEL_52:
      if ( !(unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(*((CEndpointCharacteristics **)this
                                                                                  + 161)) )
      {
        if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL) + 40LL))(
               *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
               &byte_1801CEB40[20 * v2],
               pvar) >= 0
          && LOWORD(pvar[0]) == 19
          && LODWORD(pvar[1]) >= 0x64 )
        {
          v4 = 1;
        }
        else
        {
          PropVariantClear(pvar);
          if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL)
                                                                    + 40LL))(
                 *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
                 &byte_1801CEB90[20 * v2],
                 pvar) >= 0
            && LOWORD(pvar[0]) == 19 )
          {
            v4 = LODWORD(pvar[1]) >= 0x64;
          }
        }
        PropVariantClear(pvar);
        if ( v4 )
        {
          pv = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(*((_QWORD *)this + 161) + 48LL), &pv);
          v5 = (_DWORD *)*((_QWORD *)this + 219);
          if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 0x400000000100LL) )
          {
            LODWORD(v26) = v2;
            *(_QWORD *)v31 = pv;
            v37 = *(_OWORD *)*((_QWORD *)this + 159);
            v32 = (const WCHAR *)&v37;
            v33 = *(const WCHAR **)(*((_QWORD *)this + 161) + 48LL);
            *(_QWORD *)v34 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v6,
              byte_18019669A,
              v7,
              v8,
              (__int64)v34,
              &v33,
              (__int64 *)&v32,
              (const WCHAR **)v31,
              (__int64)&v26);
          }
          v27 = 0LL;
          v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 161) + 40LL);
          v10 = *v9;
          v27 = 0LL;
          v11 = (*v10)(v9, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, (__int64 *)&v27);
          v12 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x288,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v11);
LABEL_46:
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
LABEL_37:
            wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___((__int64)&v35);
            return v12;
          }
          v25 = 0LL;
          v13 = *v27;
          v25 = 0LL;
          v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v13 + 40))(v27, 2LL, &v25);
          v12 = v14;
          if ( v14 < 0 )
          {
            v23 = 650LL;
LABEL_43:
            v24 = (unsigned int)v14;
LABEL_44:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)v24);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
            goto LABEL_46;
          }
          if ( !v25 )
          {
            v12 = -2147024894;
            v24 = 2147942402LL;
            v23 = 651LL;
            goto LABEL_44;
          }
          LOWORD(pvar[0]) = 19;
          LODWORD(pvar[1]) = 1;
          v14 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v25 + 48LL))(
                  v25,
                  &PKEY_AudioEndpoint_Disable_SysFx,
                  pvar);
          v12 = v14;
          if ( v14 < 0 )
          {
            v23 = 655LL;
            goto LABEL_43;
          }
          v14 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL)
                                                                         + 48LL))(
                  *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
                  &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                  pvar);
          v12 = v14;
          if ( v14 < 0 )
          {
            v23 = 659LL;
            goto LABEL_43;
          }
          if ( !*(_QWORD *)(*((_QWORD *)this + 161) + 80LL) )
          {
            v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v27 + 40))(v27, 0LL);
            v12 = v15;
            if ( v15 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x298,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)(unsigned int)v15);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
              v21 = pv;
LABEL_35:
              if ( v21 )
                CoTaskMemFree(v21);
              goto LABEL_37;
            }
          }
          PropVariantClear(pvar);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
          if ( pv )
            CoTaskMemFree(pv);
        }
      }
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(*((CEndpointCharacteristics **)this + 161))
    && (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(*((CEndpointCharacteristics **)this + 161)) )
  {
    v26 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v26,
      0LL);
    mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(*((_QWORD *)this + 161) + 48LL), &v26);
    v16 = (_DWORD *)*((_QWORD *)this + 219);
    if ( *v16 > 4u && tlgKeywordOn((__int64)v16, 0x400000000100LL) )
    {
      *(_QWORD *)v34 = v26;
      v37 = *(_OWORD *)*((_QWORD *)this + 159);
      v33 = (const WCHAR *)&v37;
      v32 = *(const WCHAR **)(*((_QWORD *)this + 161) + 48LL);
      *(_QWORD *)v31 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v17,
        (int)&unk_18019670F,
        v18,
        v19,
        (__int64)v31,
        &v32,
        (__int64 *)&v33,
        (const WCHAR **)v34);
    }
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 0;
    v20 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL) + 48LL))(
            *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
            &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
            pvar);
    v12 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B2,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v20);
      v21 = v26;
      goto LABEL_35;
    }
    PropVariantClear(pvar);
    if ( v26 )
      CoTaskMemFree(v26);
  }
  PropVariantClear(pvar);
  return 0LL;
}
