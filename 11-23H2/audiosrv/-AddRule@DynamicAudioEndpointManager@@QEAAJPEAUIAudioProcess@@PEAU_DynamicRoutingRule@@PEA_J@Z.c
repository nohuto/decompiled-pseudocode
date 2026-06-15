/*
 * XREFs of ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E68C
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013C364 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18013CE64 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013ECE4 (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180002480 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180008CE0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084444 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800FDE48 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18013DD7C (--$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_Dynam.c)
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18013DE8C (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18013DFA0 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x18013E0B0 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     wil::details::lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___::_lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___ @ 0x18013E278 (wil--details--lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___--_lambda_call__lambda_0ae8.c)
 *     wil::details::lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___::_lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___ @ 0x18013E2B8 (wil--details--lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___--_lambda_call__lambda_10d3.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18013E350 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$com_ptr_t@UIPolicyRule@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIPolicyRule@@@Z @ 0x18013E3B0 (--4-$com_ptr_t@UIPolicyRule@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIPolicyRule@@@Z.c)
 *     _lambda_10d3e4122713d6ae4023577fc677e3ae_::operator() @ 0x18013E418 (_lambda_10d3e4122713d6ae4023577fc677e3ae_--operator().c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x18013EDBC (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18013F178 (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18013FE5C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
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
  int v10; // r8d
  int v11; // edx
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  int Rule; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r15d
  struct IUnknown *v20; // rcx
  __int64 v21; // rdx
  int refreshed; // eax
  __int64 v23; // r9
  struct IUnknown *v24; // rbx
  __int64 v25; // rax
  int v26; // eax
  int v28[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v29; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v30; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v32; // [rsp+58h] [rbp-A8h]
  __int128 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h]
  int v35[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+A8h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v40[2]; // [rsp+B8h] [rbp-48h] BYREF
  char v41; // [rsp+D8h] [rbp-28h]
  _BYTE v42[288]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v43; // [rsp+200h] [rbp+100h] BYREF
  __int16 v44; // [rsp+210h] [rbp+110h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v29 = a2;
  *(_QWORD *)&v31 = a3;
  v43 = 0LL;
  v44 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v39 = v7;
  *(_QWORD *)v28 = 0LL;
  v30 = 0LL;
  v9 = 1;
  v10 = *(_DWORD *)a3;
  if ( (*(int *)a3 < 0 || v10 >= 9) && v10 != 0x7FFF || (v11 = *((_DWORD *)a3 + 1), v11 > 2) )
  {
    v12 = -2147024809;
    goto LABEL_49;
  }
  switch ( *((_DWORD *)a3 + 2) )
  {
    case 1:
      *(_QWORD *)v28 = 0LL;
      v12 = Microsoft::WRL::Details::MakeAndInitialize<AvoidEndpointPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v28,
              &v29,
              (struct _DynamicRoutingRule **)&v31);
      if ( v12 < 0 )
        goto LABEL_49;
      break;
    case 2:
      *(_QWORD *)v28 = 0LL;
      v18 = Microsoft::WRL::Details::MakeAndInitialize<RemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v28,
              &v29,
              &v31);
      v12 = v18;
      if ( v18 < 0 )
      {
        v14 = 380LL;
LABEL_29:
        v13 = (unsigned int)v18;
        goto LABEL_30;
      }
      break;
    case 3:
      *(_OWORD *)v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v38 = 10;
      Rule = DynamicAudioEndpointManager::FindRule((_DWORD)this, v11, v10, v8, (unsigned int)v35);
      v12 = Rule;
      if ( Rule < 0 )
      {
        v16 = 388LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)Rule);
LABEL_12:
        ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v35);
LABEL_49:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v28);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v39);
        return (unsigned int)v12;
      }
      if ( v36 )
      {
        v9 = 0;
        if ( !*(_QWORD *)v35 )
          ATL::AtlThrowImpl(-2147467259);
        wil::com_ptr_t<IPolicyRule,wil::err_returncode_policy>::operator=(
          (__int64 *)v28,
          *(_QWORD *)(*(_QWORD *)v35 + 16LL));
        Rule = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v28 + 88LL))(
                 *(_QWORD *)v28,
                 v29,
                 v42);
        v12 = Rule;
        if ( Rule < 0 )
        {
          v16 = 401LL;
          goto LABEL_11;
        }
        Rule = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *))(**(_QWORD **)v28 + 72LL))(
                 *(_QWORD *)v28,
                 v29);
        v12 = Rule;
        if ( Rule < 0 )
        {
          v16 = 404LL;
          goto LABEL_11;
        }
        *(_QWORD *)&v31 = v28;
        *((_QWORD *)&v31 + 1) = &v29;
        v32 = v42;
        v33 = v31;
        *(_QWORD *)&v34 = v42;
        BYTE8(v34) = 1;
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v28 + 96LL))(
                *(_QWORD *)v28,
                v29,
                a3);
        v12 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A0,
            (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
            (const char *)(unsigned int)v17);
          wil::details::lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___::_lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___((__int64)&v33);
          goto LABEL_12;
        }
        if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v43) )
        {
          v12 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A5,
            (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
            (const char *)0x80004005LL);
          BYTE8(v34) = 0;
          lambda_10d3e4122713d6ae4023577fc677e3ae_::operator()((_QWORD **)&v33);
          goto LABEL_12;
        }
      }
      else
      {
        *(_QWORD *)v28 = 0LL;
        Rule = Microsoft::WRL::Details::MakeAndInitialize<CommunicationsRemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
                 v28,
                 &v29,
                 (struct _DynamicRoutingRule **)&v31);
        v12 = Rule;
        if ( Rule < 0 )
        {
          v16 = 427LL;
          goto LABEL_11;
        }
      }
      ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v35);
      break;
    default:
      v12 = -2147467263;
      v13 = 2147500033LL;
      v14 = 432LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        (const char *)v13);
      goto LABEL_49;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v28 + 64LL))(*(_QWORD *)v28);
  v20 = v30;
  v30 = 0LL;
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  v18 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))v28)(
          *(_QWORD *)v28,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v30);
  v12 = v18;
  if ( v18 < 0 )
  {
    v14 = 439LL;
    goto LABEL_29;
  }
  v18 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)v29 + 400LL))(
          v29,
          this,
          v30);
  v12 = v18;
  if ( v18 < 0 )
  {
    v14 = 443LL;
    goto LABEL_29;
  }
  *(_QWORD *)&v33 = this;
  *((_QWORD *)&v33 + 1) = &v29;
  *(_QWORD *)&v34 = &v30;
  *((_QWORD *)&v34 + 1) = &v43;
  v40[0] = v33;
  v40[1] = v34;
  v41 = 1;
  LOBYTE(v21) = v9;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                this,
                v21,
                *(unsigned int *)a3,
                *((unsigned int *)a3 + 1),
                *(_QWORD *)v28,
                &v43);
  v12 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CB,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)refreshed);
    wil::details::lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___::_lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___((__int64)v40);
    goto LABEL_49;
  }
  if ( DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v43) )
  {
    v41 = 0;
    v24 = v30;
    v25 = std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
            (__int64 *)this + 121,
            (__int64)&v31,
            (__int64 *)this + 123,
            v23);
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(*(_QWORD *)v25 + 40LL), (__int64)v24);
    *a4 = (*((_QWORD *)this + 123))++;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v28);
    if ( v7 )
      LeaveCriticalSection(v7);
    v26 = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])&v43, v19);
    v12 = v26;
    if ( v26 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v26);
  }
  else
  {
    v12 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CF,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80004005LL);
    DynamicAudioEndpointManager::RemoveRule(this, v29, v30, 1, (bool (*const)[9])&v43);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v28);
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  return (unsigned int)v12;
}
