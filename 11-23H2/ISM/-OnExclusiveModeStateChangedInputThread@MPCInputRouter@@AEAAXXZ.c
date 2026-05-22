/*
 * XREFs of ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x18010AB8C
 * Callers:
 *     _lambda_ec705bf725d52d27b1686ede0253a48a_::_lambda_invoker_cdecl_ @ 0x180107850 (_lambda_ec705bf725d52d27b1686ede0253a48a_--_lambda_invoker_cdecl_.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18010B108 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18005F7A4 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BA10 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180107868 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$MPCInputRouter_OnExclusiveModeStateChangedInputThread@AEA_NAEAKAEA_K@ISMTracing@@SAXAEA_NAEAKAEA_K@Z @ 0x180107A90 (--$MPCInputRouter_OnExclusiveModeStateChangedInputThread@AEA_NAEAKAEA_K@ISMTracing@@SAXAEA_NAEAK.c)
 *     ?Attach@?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAXPEAUIMPCFocusTarget@@@Z @ 0x180108ADC (-Attach@-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180108FB8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x18010B1FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18010BD40 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1801B8758 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread(MPCInputRouter *this)
{
  bool *v2; // r15
  unsigned int *v3; // r13
  unsigned __int64 *v4; // r12
  __int64 *v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  void *v17; // r12
  struct InputSiteManager *InputSiteManager; // rax
  char v19; // r13
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  struct IInputTarget *v25; // [rsp+A8h] [rbp+50h] BYREF
  struct IInputTarget *v26; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+60h] BYREF

  v2 = (bool *)this + 888;
  if ( *((_BYTE *)this + 888) != *((_BYTE *)this + 872)
    || *((_DWORD *)this + 223) != *((_DWORD *)this + 219)
    || *((_QWORD *)this + 112) != *((_QWORD *)this + 110) )
  {
    *v2 = *((_BYTE *)this + 872);
    v3 = (unsigned int *)((char *)this + 892);
    *((_DWORD *)this + 223) = *((_DWORD *)this + 219);
    v4 = (unsigned __int64 *)((char *)this + 896);
    *((_QWORD *)this + 112) = *((_QWORD *)this + 110);
    v5 = (__int64 *)((char *)this + 784);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 98);
    if ( *v2 )
    {
      v6 = (__int64 *)((char *)this + 792);
      v7 = *((_QWORD *)this + 99);
      if ( v7 && (v8 = *((_QWORD *)this + 110), v8 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7))
        || (v6 = (__int64 *)((char *)this + 800), (v9 = *((_QWORD *)this + 100)) != 0)
        && (v10 = *((_QWORD *)this + 110), v10 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9)) )
      {
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v5, v6);
      }
      else
      {
        v26 = 0LL;
        v25 = 0LL;
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v26);
        v11 = *v4;
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v11);
        v14 = DWMInputRouter::CreateAndRegisterTarget(this, *v3, 0, ViewIdFromWindowId, v11, &v26);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x326,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v14,
            v23);
        v15 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v26,
                (__int64 *)&v25);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x327,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v15,
            v23);
        v17 = RefCountedObject::operator new(0x70uLL);
        if ( v17 )
        {
          MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v16, v25);
          InputSiteManager = ISMStatics::GetInputSiteManager();
          v19 = 1;
          v20 = InputSiteManager::GetOrCreateInputSiteFromId(
                  (__int64)InputSiteManager,
                  &v27,
                  1,
                  *((_QWORD *)this + 112));
          v21 = MPCFocusTarget::MPCFocusTarget(v17, v25, *v20, 0LL);
        }
        else
        {
          v21 = 0LL;
          v19 = 0;
        }
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::Attach(v5, (v21 + 80) & -(__int64)(v21 != 0));
        if ( (v19 & 1) != 0 )
        {
          v22 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v25);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v26);
        v3 = (unsigned int *)((char *)this + 892);
        v4 = (unsigned __int64 *)((char *)this + 896);
      }
      ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread<bool &,unsigned long &,unsigned __int64 &>(
        v2,
        v3,
        v4);
    }
    MPCInputRouter::Update3DFocusWNF(this);
  }
}
