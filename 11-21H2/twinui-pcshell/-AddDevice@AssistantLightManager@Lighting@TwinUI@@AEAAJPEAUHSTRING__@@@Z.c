/*
 * XREFs of ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055E718
 * Callers:
 *     ?OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformation@567@@Z @ 0x18055F290 (-OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Device.c)
 *     ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x18055F3D0 (-OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18055E338 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Win.c)
 *     ??$_Find_lower_bound@PEAUHSTRING__@@@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@AEBQEAUHSTRING__@@@Z @ 0x18055E494 (--$_Find_lower_bound@PEAUHSTRING__@@@-$_Tree@V-$_Tmap_traits@PEAUHSTRING__@@V-$shared_ptr@VIAssi.c)
 *     ??$_Try_emplace@AEBQEAUHSTRING__@@$$V@?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@_N@1@AEBQEAUHSTRING__@@@Z @ 0x18055E4E4 (--$_Try_emplace@AEBQEAUHSTRING__@@$$V@-$map@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighti.c)
 *     ?IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windows@@PEA_N@Z @ 0x18055EDDC (-IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windo.c)
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x180560224 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::AddDevice(LPCRITICAL_SECTION lpCriticalSection, HSTRING a2)
{
  __int64 v3; // rbx
  int ActivationFactory; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  DWORD v7; // edx
  int v8; // r8d
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  int v11; // eax
  TwinUI::Lighting::AssistantLightManager *v12; // rcx
  struct Windows::Devices::Lights::ILampArray *v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  int IsCortanaDevice; // eax
  struct Windows::Devices::Lights::ILampArray *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::Devices::Lights::ILampArray *v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  int AssistantLight; // eax
  struct Windows::Devices::Lights::ILampArray *v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r8
  std::_Ref_count_base *v26; // rdx
  std::_Ref_count_base *v27; // rbx
  std::_Ref_count_base *v28; // rcx
  struct Windows::Devices::Lights::ILampArray *v29; // rcx
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::Devices::Lights::ILampArray *v31; // rcx
  __int64 result; // rax
  bool v33; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-70h] BYREF
  struct Windows::Devices::Lights::ILampArray *v35; // [rsp+40h] [rbp-68h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-60h] BYREF
  HSTRING v37; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+58h] [rbp-50h] BYREF
  std::_Ref_count_base *v39[2]; // [rsp+60h] [rbp-48h] BYREF
  HSTRING_HEADER v40; // [rsp+70h] [rbp-38h] BYREF
  __int64 v41; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v37 = a2;
  v38 = 0LL;
  v41 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v40, L"Windows.Devices.Lights.LampArray", 0x21u, 0x20u);
  v3 = v41;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_64652a6a_1d85_45b9_84f0_b7a1316ac766, &v38);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_57;
  }
  v34 = 0LL;
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, HSTRING, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v38 + 48LL))(
    v38,
    v37,
    v5,
    &v34);
  v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::LampArray *> *>(
         v34,
         v7,
         v8);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v9);
    v10 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
    }
    goto LABEL_57;
  }
  v35 = 0LL;
  v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), struct Windows::Devices::Lights::ILampArray **))(*v34)[8])(
          v34,
          &v35);
  v6 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v11);
    v13 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[2])(v14);
    }
    goto LABEL_57;
  }
  v33 = 0;
  IsCortanaDevice = TwinUI::Lighting::AssistantLightManager::IsCortanaDevice(v12, v35, &v33);
  v6 = IsCortanaDevice;
  if ( IsCortanaDevice < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)IsCortanaDevice);
    v16 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v17)[2])(v17);
    }
    goto LABEL_57;
  }
  if ( !v33 )
  {
    v18 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v34;
    if ( !v34 )
      goto LABEL_56;
    goto LABEL_55;
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  *(_OWORD *)v39 = 0LL;
  SystemTimeAsFileTime = (struct _FILETIME)v35;
  if ( v35 )
    (*(void (**)(void))(*(_QWORD *)v35 + 8LL))();
  AssistantLight = TwinUI::Lighting::AssistantLightFactory::GetAssistantLight(&SystemTimeAsFileTime, v39);
  v6 = AssistantLight;
  if ( AssistantLight < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)AssistantLight);
    if ( v39[1] )
      std::_Ref_count_base::_Decref(v39[1]);
    v21 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v22)[2])(v22);
    }
    goto LABEL_57;
  }
  EnterCriticalSection(lpCriticalSection);
  SystemTimeAsFileTime = (struct _FILETIME)lpCriticalSection;
  std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Find_lower_bound<HSTRING__ *>(
    (__int64 *)&lpCriticalSection[1],
    (__int64)&v40,
    (unsigned __int64 *)&v37);
  v24 = *(_QWORD *)&v40.Reserved.Reserved2[16];
  if ( *(_BYTE *)(*(_QWORD *)&v40.Reserved.Reserved2[16] + 25LL)
    || (unsigned __int64)v37 < *(_QWORD *)(*(_QWORD *)&v40.Reserved.Reserved2[16] + 32LL) )
  {
    v24 = *v23;
  }
  if ( v24 == *v23 )
  {
    try
    {
      v25 = *(_QWORD *)std::map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::_Try_emplace<HSTRING__ * const &,>(
                         v23,
                         (__int64)&v40,
                         (unsigned __int64 *)&v37);
      v26 = v39[1];
      v27 = 0LL;
      v39[1] = 0LL;
      *(std::_Ref_count_base **)(v25 + 40) = v39[0];
      v28 = *(std::_Ref_count_base **)(v25 + 48);
      *(_QWORD *)(v25 + 48) = v26;
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
    }
    catch ( std::exception )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&SystemTimeAsFileTime);
      if ( v39[1] )
        std::_Ref_count_base::_Decref(v39[1]);
      v29 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v30)[2])(v30);
      }
      v6 = -2147024882;
LABEL_57:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      result = v6;
    }
  }
  else
  {
    v27 = v39[1];
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&SystemTimeAsFileTime);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  v31 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v19 = v34;
  if ( !v34 )
    goto LABEL_56;
LABEL_55:
  v34 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v19)[2])(v19);
LABEL_56:
  v6 = 0;
  goto LABEL_57;
}
