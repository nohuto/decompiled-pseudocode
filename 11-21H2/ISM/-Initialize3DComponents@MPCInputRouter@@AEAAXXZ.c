/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800F0A1C
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800F1670 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18002C220 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18004DF20 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180090BF8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800A0C1C (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EE878 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800EEEE0 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@s.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800EF804 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Attach@?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800EF960 (-Attach@-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800F1BCC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800F27F8 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x18019A83C (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x18019C4DC (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this, __int64 a2, __int64 a3, const char *a4)
{
  struct IMPCFocusTarget **v5; // r14
  MPCHolographicInputManager *Instance; // rax
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  const char *v10; // r9
  struct IInputTarget *v11; // rbx
  struct IInputTarget *InputHostTargetForProcessId; // rax
  const char *v13; // r9
  int v14; // eax
  int v15; // eax
  void *v16; // rsi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromId; // rax
  char v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct IMPCFocusTarget *v22; // rbx
  RTL_SRWLOCK *v23; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v25; // eax
  int v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+20h] [rbp-48h]
  __int64 v28[2]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v29[24]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  struct IInputTarget *v31; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+48h] BYREF
  struct IInputTarget *v33; // [rsp+B8h] [rbp+50h] BYREF

  if ( !*((_BYTE *)this + 864) )
  {
    *((_BYTE *)this + 864) = 1;
    if ( !*((_QWORD *)this + 102) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        428LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        a4);
    v5 = (struct IMPCFocusTarget **)((char *)this + 808);
    if ( *((_QWORD *)this + 101) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        429LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        a4);
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::SetMPCInputRouter(Instance, this, v7, v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 102) + 24LL))(
           *((_QWORD *)this + 102),
           (char *)this + 824);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9,
        v26);
    v11 = 0LL;
    v33 = 0LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        33LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v10);
    if ( !*(_BYTE *)ISMTestMode::s_instance )
    {
      InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, *((_DWORD *)this + 206));
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)&v33, (__int64)InputHostTargetForProcessId);
      v11 = v33;
      if ( !v33 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          442LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          v13);
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v31);
    v14 = DWMFocusedInputTarget::Create(v11, *((_DWORD *)this + 207), 0, 0LL, &v31);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14,
        v27);
    v32 = 0LL;
    v15 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v31,
            &v32);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15,
        v27);
    v16 = RefCountedObject::operator new(0x60uLL);
    v28[1] = (__int64)v16;
    if ( v16 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      InputSiteFromId = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, v28, 1, 0LL);
      v19 = 1;
      v27 = 5;
      v20 = MPCFocusTarget::MPCFocusTarget(v16, v32, *InputSiteFromId, 0LL);
    }
    else
    {
      v20 = 0LL;
      v19 = 0;
    }
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::Attach((__int64 *)this + 101, (v20 + 64) & -(__int64)(v20 != 0));
    if ( (v19 & 1) != 0 )
    {
      v21 = v28[0];
      if ( v28[0] )
      {
        v28[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    MPCInputRouter::Set3DFocusTarget(this, *v5);
    v22 = *v5;
    v28[0] = 0LL;
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Try_emplace<unsigned __int64,>(
                             (float *)this + 226,
                             (__int64)v29,
                             (unsigned __int8 *)v28)
              + 24LL) = v22;
    v23 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v23);
    v25 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 96LL))(
            PostProcessor,
            (char *)this + 776);
    if ( v25 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1DA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v25,
        v27);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v33);
  }
}
