/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800DCD28
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x1800DBC24 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 * Callees:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E7C0 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x18004B4D0 (-ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7b8e2becd319044560765d93cfe1c665___ @ 0x18006AE1C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006AE1C.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_93252ad2b9527b988c1a160676e333ad___ @ 0x18006AEA0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006AEA0.c)
 *     _lambda_7b8e2becd319044560765d93cfe1c665_::_lambda_7b8e2becd319044560765d93cfe1c665_ @ 0x18006B058 (_lambda_7b8e2becd319044560765d93cfe1c665_--_lambda_7b8e2becd319044560765d93cfe1c665_.c)
 *     ??1?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B08C (--1-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___::_lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___ @ 0x18006B0D8 (wil--details--lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___--_lambda_call__lambda_d5c2.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x180081450 (--1-$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8720 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_P @ 0x1800DDD3C (WPP_SF_P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct EndpointCharacteristicsDescriptor *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6,
        __int64 *a7)
{
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  int v14; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // r8d
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 (__fastcall *v22)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, unsigned __int64 *, _QWORD, _QWORD, __int64 *); // rdi
  SaDeviceParams *v23; // rbx
  int v24; // eax
  int v25; // edi
  __int64 *v27; // rax
  SaDeviceParams *v28; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+70h] [rbp-90h] BYREF
  SaDeviceParams *v32; // [rsp+78h] [rbp-88h] BYREF
  struct EndpointCharacteristicsDescriptor *v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  __int128 v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h]
  struct _GUID v37; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v38; // [rsp+C0h] [rbp-40h]
  __int128 v39; // [rsp+D0h] [rbp-30h]
  __int128 *v40; // [rsp+E0h] [rbp-20h]
  _OWORD v41[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 *v42; // [rsp+108h] [rbp+8h]
  char v43; // [rsp+110h] [rbp+10h]
  unsigned __int64 v44; // [rsp+118h] [rbp+18h] BYREF
  int v45; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v33 = a2;
  v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 184LL))(*a7);
  v35 = 0LL;
  v36 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 112LL))(a3, *a7, &v35);
  v12 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_33:
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v35);
    return v12;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, v11, (__int64)(*((_QWORD *)&v35 + 1) - v35) >> 3);
  }
  v13 = (__int64 *)v35;
  if ( (__int64)(*((_QWORD *)&v35 + 1) - v35) >> 3 )
  {
    v28 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*a7 + 104LL))(*a7, &v28);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAFE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_10:
      ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(&v28);
      goto LABEL_33;
    }
    v32 = 0LL;
    v15 = *((_DWORD *)v28 + 2);
    v30 = (struct _GUID)*((_OWORD *)v28 + 4);
    v37 = (struct _GUID)*((_OWORD *)v28 + 3);
    v16 = DeriveSaDeviceParametersForStream(
            (EffectPack **)v33,
            AUDCLNT_SHAREMODE_SHARED,
            v15,
            &v37,
            &v30,
            a4,
            a5,
            a6,
            &v32);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_13:
      ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(&v32);
      goto LABEL_10;
    }
    *(_QWORD *)&v37.Data1 = *a7;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v37);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_93252ad2b9527b988c1a160676e333ad___(
      (__int64 *)&v30,
      (_QWORD *)v35,
      *((_QWORD **)&v35 + 1),
      (__int64 *)&v37);
    Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>((__int64 *)&v30);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a7);
    pv = 0LL;
    v17 = *(_QWORD *)v33;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(v17 + 40) + 40LL))(*(_QWORD *)(v17 + 40), &pv);
    v12 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_20:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      goto LABEL_13;
    }
    *(_QWORD *)&v38.Data1 = &v31;
    *(_QWORD *)v38.Data4 = a1;
    *(_QWORD *)&v39 = &v33;
    *((_QWORD *)&v39 + 1) = &v28;
    v40 = &v35;
    v41[0] = v38;
    v41[1] = v39;
    v42 = &v35;
    v43 = 1;
    v45 = v31;
    v44 = 0LL;
    v19 = *(__int64 **)(a1 + 48);
    v20 = *v19;
    v30 = (struct _GUID)*((_OWORD *)v28 + 3);
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct _GUID *, _QWORD, int, unsigned __int64 *))(v20 + 56))(
            v19,
            *(_QWORD *)v33,
            &v30,
            *((unsigned int *)v28 + 2),
            v31,
            &v44);
    v12 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v21);
      wil::details::lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___::_lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___((__int64)v41);
      goto LABEL_20;
    }
    *(_QWORD *)&v30.Data1 = &v44;
    *(_QWORD *)v30.Data4 = a1;
    v38 = v30;
    LOBYTE(v39) = 1;
    v34 = 0LL;
    v22 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, unsigned __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v34);
    v23 = v32;
    v24 = v22(g_DeviceGraphManager, v33, v32, 2LL, 0, &v44, 0LL, 0LL, &v34);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB78,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v24);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v34);
      if ( v44 )
      {
        CAudioResourceManager::ReleaseSaDeviceResource((CAudioResourceManager *)(a1 + 8), &v44);
        v44 = 0LL;
      }
      wil::details::lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___::_lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___((__int64)v41);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v23 )
        SaDeviceParams::`scalar deleting destructor'(v23);
      if ( v28 )
        SaDeviceParams::`scalar deleting destructor'(v28);
      v28 = 0LL;
      v12 = v25;
      goto LABEL_33;
    }
    v27 = lambda_7b8e2becd319044560765d93cfe1c665_::_lambda_7b8e2becd319044560765d93cfe1c665_((__int64 *)&v30, &v34);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7b8e2becd319044560765d93cfe1c665___(
      (__int64 *)&v37,
      v35,
      *((__int64 *)&v35 + 1),
      v27);
    Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>((__int64 *)&v37);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids);
    }
    v43 = 0;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v34);
    if ( v44 )
    {
      CAudioResourceManager::ReleaseSaDeviceResource((CAudioResourceManager *)(a1 + 8), &v44);
      v44 = 0LL;
    }
    wil::details::lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___::_lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___((__int64)v41);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v23 )
      SaDeviceParams::`scalar deleting destructor'(v23);
    if ( v28 )
      SaDeviceParams::`scalar deleting destructor'(v28);
    v13 = (__int64 *)v35;
  }
  if ( v13 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, *((__int64 **)&v35 + 1));
    std::_Deallocate<16,0>((void *)v35, (v36 - v35) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 0LL;
}
