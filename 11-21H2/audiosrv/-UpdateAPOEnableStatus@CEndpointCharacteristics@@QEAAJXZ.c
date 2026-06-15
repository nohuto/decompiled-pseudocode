/*
 * XREFs of ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18014CE3C
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18004DF00 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800025BC (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800FDF70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180143960 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180144FE8 (-AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18014A018 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::UpdateAPOEnableStatus(CEndpointCharacteristics *this)
{
  int v2; // esi
  _DWORD *v3; // r14
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall **v9)(_QWORD, GUID *, void **); // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  void **v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  void *v23; // [rsp+48h] [rbp-21h] BYREF
  void *v24; // [rsp+50h] [rbp-19h] BYREF
  int v25[2]; // [rsp+58h] [rbp-11h] BYREF
  int v26[2]; // [rsp+60h] [rbp-9h] BYREF
  PROPVARIANT *v27; // [rsp+68h] [rbp-1h]
  char v28; // [rsp+70h] [rbp+7h]
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  void *v32; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 *v33; // [rsp+E0h] [rbp+77h] BYREF
  __int64 *v34; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_OWORD *)pvar = 0LL;
  v30 = 0LL;
  v27 = pvar;
  v28 = 1;
  v2 = 1;
  v3 = (_DWORD *)((char *)this + 284);
  do
  {
    v4 = 0;
    if ( *((_DWORD *)this + 69) )
      goto LABEL_56;
    if ( !*((_DWORD *)this + 68) )
      CEndpointCharacteristics::InitializeAPOInfo(this);
    if ( !*v3 )
    {
LABEL_56:
      if ( !(unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
      {
        if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
               *((_QWORD *)this + 5),
               &byte_1801C1660[20 * v2],
               pvar) >= 0
          && LOWORD(pvar[0]) == 19
          && LODWORD(pvar[1]) >= 0x64 )
        {
          v4 = 1;
        }
        else
        {
          PropVariantClear(pvar);
          if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
                 *((_QWORD *)this + 5),
                 &byte_1801C16B0[20 * v2],
                 pvar) >= 0
            && LOWORD(pvar[0]) == 19
            && LODWORD(pvar[1]) >= 0x64 )
          {
            v4 = 1;
          }
        }
        PropVariantClear(pvar);
        if ( v4 )
        {
          v34 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)&v34,
            0LL);
          if ( (*(int (__fastcall **)(_QWORD, __int64 **))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &v34) >= 0 )
          {
            v23 = 0LL;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &v23,
              0LL);
            mmdDevGetInstanceIdFromMMDeviceId(v34, &v23);
            v7 = *((_QWORD *)this + 1223);
            if ( *(_DWORD *)v7 > 4u
              && (*(_QWORD *)(v7 + 16) & 0x400000000100LL) != 0
              && (*(_QWORD *)(v7 + 24) & 0x400000000100LL) == *(_QWORD *)(v7 + 24) )
            {
              LODWORD(v32) = v2;
              v24 = v23;
              *(_QWORD *)v25 = v34;
              *(_QWORD *)v26 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v7,
                byte_18018F2E9,
                v5,
                v6,
                (__int64)v26,
                (void **)v25,
                &v24,
                (__int64)&v32);
            }
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v23);
          }
          v33 = 0LL;
          v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, void **))*((_QWORD *)this + 2);
          v9 = *v8;
          v33 = 0LL;
          v10 = (*v9)(v8, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, (void **)&v33);
          v11 = v10;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2C6,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v10);
LABEL_50:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
            v18 = (void **)&v34;
LABEL_41:
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(v18);
            goto LABEL_53;
          }
          v22 = 0LL;
          v12 = *v33;
          v22 = 0LL;
          v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v12 + 40))(v33, 2LL, &v22);
          v11 = v13;
          if ( v13 < 0 )
          {
            v19 = 712LL;
LABEL_47:
            v20 = (unsigned int)v13;
LABEL_48:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)v20);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
            goto LABEL_50;
          }
          if ( !v22 )
          {
            v11 = -2147024894;
            v20 = 2147942402LL;
            v19 = 713LL;
            goto LABEL_48;
          }
          LOWORD(pvar[0]) = 19;
          LODWORD(pvar[1]) = 1;
          v13 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v22 + 48LL))(
                  v22,
                  &PKEY_AudioEndpoint_Disable_SysFx,
                  pvar);
          v11 = v13;
          if ( v13 < 0 )
          {
            v19 = 717LL;
            goto LABEL_47;
          }
          v13 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 48LL))(
                  *((_QWORD *)this + 5),
                  &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                  pvar);
          v11 = v13;
          if ( v13 < 0 )
          {
            v19 = 721LL;
            goto LABEL_47;
          }
          if ( !*((_QWORD *)this + 10) )
          {
            v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v33 + 40))(v33, 0LL);
            v11 = v13;
            if ( v13 < 0 )
            {
              v19 = 726LL;
              goto LABEL_47;
            }
          }
          PropVariantClear(pvar);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v34);
        }
      }
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(this)
    && (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
  {
    v32 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v32,
      0LL);
    if ( (*(int (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &v32) >= 0 )
    {
      v33 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v33,
        0LL);
      mmdDevGetInstanceIdFromMMDeviceId(v32, &v33);
      v16 = *((_QWORD *)this + 1223);
      if ( *(_DWORD *)v16 > 4u
        && (*(_QWORD *)(v16 + 16) & 0x400000000100LL) != 0
        && (*(_QWORD *)(v16 + 24) & 0x400000000100LL) == *(_QWORD *)(v16 + 24) )
      {
        v34 = v33;
        *(_QWORD *)v26 = v32;
        *(_QWORD *)v25 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v16,
          byte_18018F28A,
          v14,
          v15,
          (__int64)v25,
          (void **)v26,
          (void **)&v34);
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v33);
    }
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 0;
    v17 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 48LL))(
            *((_QWORD *)this + 5),
            &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
            pvar);
    v11 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F3,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17);
      v18 = &v32;
      goto LABEL_41;
    }
    PropVariantClear(pvar);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v32);
  }
  v11 = 0;
LABEL_53:
  PropVariantClear(pvar);
  return v11;
}
