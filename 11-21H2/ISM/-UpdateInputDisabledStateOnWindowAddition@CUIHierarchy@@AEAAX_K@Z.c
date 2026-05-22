/*
 * XREFs of ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x180086850
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180085710 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180085B70 (-OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Wind.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x1800343F4 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18004DA74 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083E0C (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083EB0 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800852D4 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180086B74 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CUIHierarchy::UpdateInputDisabledStateOnWindowAddition(CUIHierarchy *this, unsigned __int64 a2)
{
  struct InputSiteManager *InputSiteManager; // rax
  const char *v5; // r9
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v8; // rdi
  char v9; // al
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax
  __int64 *v11; // r14
  __int64 *v12; // r12
  _QWORD *v13; // rsi
  char v14; // al
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  char v17; // [rsp+30h] [rbp-20h]
  _QWORD v18[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  _QWORD *v20; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, &v21, 1, a2);
  v6 = v21;
  if ( !v21 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      223LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\"
               "cuihierarchy.cpp",
      v5);
  InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(v21, &v15);
  v8 = v15;
  if ( !v15 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      225LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\"
               "cuihierarchy.cpp",
      v7);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 56LL))(v15 + 8);
  CUIHierarchy::ModifyInputDisabledStateAndPropagate(this, a2, 2, v9);
  InputSite::GetIdForNamespace(v6, (__int64)&v16, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  if ( !v17 )
    std::_Throw_bad_optional_access();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *, _QWORD *, __int64))(*(_QWORD *)InputSiteHierarchyManager
                                                                                 + 24LL))(
    InputSiteHierarchyManager,
    v18,
    v16);
  v11 = (__int64 *)v18[0];
  v12 = (__int64 *)v18[1];
  while ( v11 != v12 )
  {
    InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*v11, &v20);
    v13 = v20;
    if ( v20 && a2 == (*(__int64 (__fastcall **)(_QWORD *))(v20[1] + 40LL))(v20 + 1) )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD *))(v13[1] + 48LL))(v13 + 1);
      CUIHierarchy::ModifyInputDisabledStateAndPropagate(this, a2, 1, v14);
      (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
      break;
    }
    if ( v13 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
    }
    ++v11;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v18);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
