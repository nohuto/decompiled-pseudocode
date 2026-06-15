/*
 * XREFs of ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801311DC
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18012ED54 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18012F9DC (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801317C4 (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C8F7C (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801308F8 (--$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_Dynam.c)
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801309FC (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180130B04 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x180130C08 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x180130E9C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$com_ptr_t@UIPolicyRule@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIPolicyRule@@@Z @ 0x180130F00 (--4-$com_ptr_t@UIPolicyRule@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIPolicyRule@@@Z.c)
 *     _lambda_10d3e4122713d6ae4023577fc677e3ae_::operator() @ 0x180130F68 (_lambda_10d3e4122713d6ae4023577fc677e3ae_--operator().c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x180131898 (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180131C40 (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801329A0 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x180132D8C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180133B74 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DynamicAudioEndpointManager::AddRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3,
        __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r14
  int v8; // r9d
  char v9; // r12
  int v10; // edx
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int Rule; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r15d
  struct IUnknown *v21; // rcx
  __int64 v22; // rdx
  int refreshed; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r9
  struct IUnknown *v28; // rbx
  __int64 v29; // rax
  int v30; // eax
  int v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v32; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+58h] [rbp-A8h]
  __int128 v36; // [rsp+68h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-88h]
  char v38; // [rsp+88h] [rbp-78h]
  int v39[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int128 v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+B8h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+C0h] [rbp-40h]
  _BYTE v44[288]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v46; // [rsp+200h] [rbp+100h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v32 = a2;
  *(_QWORD *)&v34 = a3;
  v45 = 0LL;
  v46 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v43 = v7;
  *(_QWORD *)v31 = 0LL;
  v33 = 0LL;
  v9 = 1;
  if ( *(_DWORD *)a3 > 8u && *(_DWORD *)a3 != 0x7FFF || (v10 = *((_DWORD *)a3 + 1), v10 > 2) )
  {
    v11 = -2147024809;
    goto LABEL_44;
  }
  switch ( *((_DWORD *)a3 + 2) )
  {
    case 1:
      *(_QWORD *)v31 = 0LL;
      v11 = Microsoft::WRL::Details::MakeAndInitialize<AvoidEndpointPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v31,
              &v32,
              (struct _DynamicRoutingRule **)&v34);
      if ( v11 < 0 )
        goto LABEL_44;
      break;
    case 2:
      *(_QWORD *)v31 = 0LL;
      v19 = Microsoft::WRL::Details::MakeAndInitialize<RemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v31,
              &v32,
              (struct _DynamicRoutingRule **)&v34);
      v11 = v19;
      if ( v19 < 0 )
      {
        v13 = 378LL;
LABEL_37:
        v12 = (unsigned int)v19;
        goto LABEL_38;
      }
      break;
    case 3:
      *(_OWORD *)v39 = 0LL;
      v40 = 0LL;
      v41 = 0LL;
      v42 = 10;
      Rule = DynamicAudioEndpointManager::FindRule((_DWORD)this, v10, *(_DWORD *)a3, v8, (unsigned int)v39);
      v11 = Rule;
      if ( Rule < 0 )
      {
        v15 = 386LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)Rule);
        goto LABEL_27;
      }
      if ( v40 )
      {
        v9 = 0;
        if ( !*(_QWORD *)v39 )
          ATL::AtlThrowImpl(-2147467259);
        wil::com_ptr_t<IPolicyRule,wil::err_returncode_policy>::operator=(
          (__int64 *)v31,
          *(_QWORD *)(*(_QWORD *)v39 + 16LL));
        Rule = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v31 + 88LL))(
                 *(_QWORD *)v31,
                 v32,
                 v44);
        v11 = Rule;
        if ( Rule < 0 )
        {
          v15 = 399LL;
          goto LABEL_26;
        }
        Rule = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *))(**(_QWORD **)v31 + 72LL))(
                 *(_QWORD *)v31,
                 v32);
        v11 = Rule;
        if ( Rule < 0 )
        {
          v15 = 402LL;
          goto LABEL_26;
        }
        *(_QWORD *)&v34 = v31;
        *((_QWORD *)&v34 + 1) = &v32;
        *(_QWORD *)&v35 = v44;
        v36 = v34;
        *(_QWORD *)&v37 = v44;
        BYTE8(v37) = 1;
        v16 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v31 + 96LL))(
                *(_QWORD *)v31,
                v32,
                a3);
        v11 = v16;
        if ( v16 < 0 )
        {
          v17 = (unsigned int)v16;
          v18 = 414LL;
LABEL_22:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
            (const char *)v17);
          BYTE8(v37) = 0;
          lambda_10d3e4122713d6ae4023577fc677e3ae_::operator()((_QWORD **)&v36);
LABEL_27:
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v39);
          goto LABEL_44;
        }
        if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v45) )
        {
          v11 = -2147467259;
          v17 = 2147500037LL;
          v18 = 419LL;
          goto LABEL_22;
        }
      }
      else
      {
        *(_QWORD *)v31 = 0LL;
        Rule = Microsoft::WRL::Details::MakeAndInitialize<CommunicationsRemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
                 v31,
                 &v32,
                 (struct _DynamicRoutingRule **)&v34);
        v11 = Rule;
        if ( Rule < 0 )
        {
          v15 = 425LL;
          goto LABEL_26;
        }
      }
      ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v39);
      break;
    default:
      v11 = -2147467263;
      v12 = 2147500033LL;
      v13 = 430LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        (const char *)v12);
      goto LABEL_44;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v31 + 64LL))(*(_QWORD *)v31);
  v21 = v33;
  v33 = 0LL;
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  v19 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))v31)(
          *(_QWORD *)v31,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v33);
  v11 = v19;
  if ( v19 < 0 )
  {
    v13 = 437LL;
    goto LABEL_37;
  }
  v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)v32 + 400LL))(
          v32,
          this,
          v33);
  v11 = v19;
  if ( v19 < 0 )
  {
    v13 = 441LL;
    goto LABEL_37;
  }
  *(_QWORD *)&v34 = this;
  *((_QWORD *)&v34 + 1) = &v32;
  *(_QWORD *)&v35 = &v33;
  *((_QWORD *)&v35 + 1) = &v45;
  v36 = v34;
  v37 = v35;
  v38 = 1;
  LOBYTE(v22) = v9;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                this,
                v22,
                *(unsigned int *)a3,
                *((unsigned int *)a3 + 1),
                *(_QWORD *)v31,
                &v45);
  v11 = refreshed;
  if ( refreshed < 0 )
  {
    v24 = (unsigned int)refreshed;
    v25 = 457LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v24);
    DynamicAudioEndpointManager::RemoveRule(this, v32, v33, 1, (bool (*const)[9])&v45);
LABEL_44:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v31);
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)v11;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v45) )
  {
    v11 = -2147467259;
    v24 = 2147500037LL;
    v25 = 461LL;
    goto LABEL_43;
  }
  v38 = 0;
  v28 = v33;
  v29 = std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
          (__int64 *)this + 121,
          (__int64)&v34,
          (__int64 *)this + 123,
          v26);
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(*(_QWORD *)v29 + 40LL), (__int64)v28);
  *a4 = (*((_QWORD *)this + 123))++;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v31);
  if ( v7 )
    LeaveCriticalSection(v7);
  v30 = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])&v45, v20);
  v11 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v30);
    return (unsigned int)v11;
  }
  return 0LL;
}
