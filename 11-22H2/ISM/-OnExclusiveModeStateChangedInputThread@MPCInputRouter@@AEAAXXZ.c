/*
 * XREFs of ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180118F6C
 * Callers:
 *     _lambda_ec705bf725d52d27b1686ede0253a48a_::_lambda_invoker_cdecl_ @ 0x180116390 (_lambda_ec705bf725d52d27b1686ede0253a48a_--_lambda_invoker_cdecl_.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180119508 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180071430 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800ADF54 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801163A8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Attach@?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAXPEAUIMPCFocusTarget@@@Z @ 0x180117134 (-Attach@-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180117610 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x180118AA4 (-MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801195FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18011A140 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1801C5E88 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread(MPCInputRouter *this)
{
  __int64 *v2; // r14
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  void *v15; // r15
  char v16; // r12
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  ISMTracing *v22; // rcx
  int v23; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IInputTarget *v25; // [rsp+98h] [rbp+48h] BYREF
  struct IInputTarget *v26; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF

  if ( *((_BYTE *)this + 896) != *((_BYTE *)this + 880)
    || *((_DWORD *)this + 225) != *((_DWORD *)this + 221)
    || *((_QWORD *)this + 113) != *((_QWORD *)this + 111) )
  {
    *((_BYTE *)this + 896) = *((_BYTE *)this + 880);
    *((_DWORD *)this + 225) = *((_DWORD *)this + 221);
    *((_QWORD *)this + 113) = *((_QWORD *)this + 111);
    v2 = (__int64 *)((char *)this + 792);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 99);
    if ( *((_BYTE *)this + 896) )
    {
      v3 = (__int64 *)((char *)this + 800);
      v4 = *((_QWORD *)this + 100);
      if ( v4 && (v5 = *((_QWORD *)this + 111), v5 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4))
        || (v3 = (__int64 *)((char *)this + 808), (v6 = *((_QWORD *)this + 101)) != 0)
        && (v7 = *((_QWORD *)this + 111), v7 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6)) )
      {
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v2, v3);
      }
      else
      {
        v26 = 0LL;
        v25 = 0LL;
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v26);
        v9 = *((_QWORD *)this + 113);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v9);
        v12 = DWMInputRouter::CreateAndRegisterTarget(this, *((_DWORD *)this + 225), 0, ViewIdFromWindowId, v9, &v26);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x326,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v12,
            v23);
        v13 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v26,
                (__int64 *)&v25);
        if ( v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x327,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v13,
            v23);
        v15 = RefCountedObject::operator new(0x70uLL);
        v16 = 1;
        if ( v15 )
        {
          MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v14, v25);
          InputSiteManager = ISMStatics::GetInputSiteManager();
          v18 = InputSiteManager::GetOrCreateInputSiteFromId(
                  (__int64)InputSiteManager,
                  &v27,
                  1,
                  *((_QWORD *)this + 113));
          v19 = MPCFocusTarget::MPCFocusTarget(v15, v25, *v18, 0LL);
        }
        else
        {
          v19 = 0LL;
          v16 = 0;
        }
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::Attach(v2, (v19 + 80) & -(__int64)(v19 != 0));
        if ( (v16 & 1) != 0 )
        {
          v20 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v25);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v26);
      }
      if ( ISMTracing::IsEnabled(v8) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v21,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
          v22,
          *((_BYTE *)this + 896),
          *((_DWORD *)this + 225),
          *((_QWORD *)this + 113));
      }
    }
    MPCInputRouter::Update3DFocusWNF(this);
  }
}
