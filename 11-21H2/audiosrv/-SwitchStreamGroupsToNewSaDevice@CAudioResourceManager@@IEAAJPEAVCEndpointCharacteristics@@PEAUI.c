/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180101B78
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x180100BC8 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180004218 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180027630 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_6517b6262ecdf23183dd0b53e82c30d6___ @ 0x180065124 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180065124.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7cf518ef51084420d7783fefa231489d___ @ 0x18006527C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006527C.c)
 *     _lambda_7cf518ef51084420d7783fefa231489d_::_lambda_7cf518ef51084420d7783fefa231489d_ @ 0x180065510 (_lambda_7cf518ef51084420d7783fefa231489d_--_lambda_7cf518ef51084420d7783fefa231489d_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065534 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___ @ 0x180065540 (wil--details--lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___--_lambda_call__lambda_bebb.c)
 *     wil::details::lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___::_lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___ @ 0x180065580 (wil--details--lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___--_lambda_call__lambda_dce0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     ??1?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800DF298 (--1-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamGroupPr.c)
 *     ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x1800F7288 (--1-$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_P @ 0x180102834 (WPP_SF_P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        __int64 a6,
        __int64 *a7)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // r8d
  int v14; // eax
  __int64 *v15; // rax
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 (__fastcall *v20)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, __int64, _DWORD, __int64 *, _QWORD, _QWORD, __int64 *); // rbx
  int v21; // eax
  __int64 *v22; // rax
  SaDeviceParams *v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  struct CEndpointCharacteristics *v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  void *v29; // [rsp+88h] [rbp-78h] BYREF
  struct SaDeviceParams *v30; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-58h]
  struct _GUID v33; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v34; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-30h]
  __int128 *v36; // [rsp+E0h] [rbp-20h]
  _OWORD v37[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 *v38; // [rsp+108h] [rbp+8h]
  char v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h] BYREF
  int v41; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v27 = a2;
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 184LL))(*a7);
  v31 = 0LL;
  v32 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 112LL))(a3, *a7, &v31);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_P(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29LL,
        &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
        (__int64)(*((_QWORD *)&v31 + 1) - v31) >> 3);
    }
    if ( (__int64)(*((_QWORD *)&v31 + 1) - v31) >> 3 )
    {
      v24[0] = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*a7 + 104LL))(*a7, v24);
      v11 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA86,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_25:
        ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(v24);
        goto LABEL_32;
      }
      v30 = 0LL;
      v13 = *((_DWORD *)v24[0] + 2);
      v25 = (struct _GUID)*((_OWORD *)v24[0] + 4);
      v33 = (struct _GUID)*((_OWORD *)v24[0] + 3);
      v14 = DeriveSaDeviceParametersForStream(v27, AUDCLNT_SHAREMODE_SHARED, v13, &v33, &v25, a4, Src, a6, &v30);
      v11 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA93,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_24:
        ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(&v30);
        goto LABEL_25;
      }
      v15 = lambda_7cf518ef51084420d7783fefa231489d_::_lambda_7cf518ef51084420d7783fefa231489d_((__int64 *)&v33, a7);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7cf518ef51084420d7783fefa231489d___(
        (__int64 *)&v25,
        (_QWORD *)v31,
        *((_QWORD **)&v31 + 1),
        v15);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v25);
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a7);
      v29 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &v29,
        0LL);
      v16 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)v27 + 2) + 40LL))(*((_QWORD *)v27 + 2), &v29);
      v11 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAA6,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_23:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((__int64)&v29);
        goto LABEL_24;
      }
      *(_QWORD *)&v34.Data1 = &v26;
      *(_QWORD *)v34.Data4 = a1;
      *(_QWORD *)&v35 = &v27;
      *((_QWORD *)&v35 + 1) = v24;
      v36 = &v31;
      v37[0] = v34;
      v37[1] = v35;
      v38 = &v31;
      v39 = 1;
      v41 = v26;
      v40 = 0LL;
      v17 = *(__int64 **)(a1 + 48);
      v18 = *v17;
      v25 = (struct _GUID)*((_OWORD *)v24[0] + 3);
      v19 = (*(__int64 (__fastcall **)(__int64 *, struct CEndpointCharacteristics *, struct _GUID *, _QWORD, int, __int64 *))(v18 + 56))(
              v17,
              v27,
              &v25,
              *((unsigned int *)v24[0] + 2),
              v26,
              &v40);
      v11 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAE6,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v19);
LABEL_22:
        wil::details::lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___::_lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___((__int64)v37);
        goto LABEL_23;
      }
      *(_QWORD *)&v25.Data1 = &v40;
      *(_QWORD *)v25.Data4 = a1;
      v34 = v25;
      LOBYTE(v35) = 1;
      v28 = 0LL;
      v20 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, __int64, _DWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
      v21 = v20(g_DeviceGraphManager, v27, v30, 2LL, 0, &v40, 0LL, 0LL, &v28);
      v11 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB01,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
        wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___((__int64)&v34);
        goto LABEL_22;
      }
      v22 = lambda_7cf518ef51084420d7783fefa231489d_::_lambda_7cf518ef51084420d7783fefa231489d_((__int64 *)&v25, &v28);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_6517b6262ecdf23183dd0b53e82c30d6___(
        (__int64 *)&v33,
        v31,
        *((__int64 *)&v31 + 1),
        v22);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v33);
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids);
      }
      v39 = 0;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
      wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___((__int64)&v34);
      wil::details::lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___::_lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___((__int64)v37);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((__int64)&v29);
      ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(&v30);
      ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(v24);
    }
    v11 = 0;
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA7F,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_32:
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>((__int64)&v31);
  return v11;
}
