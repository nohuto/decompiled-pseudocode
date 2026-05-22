/*
 * XREFs of ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800AFEAC
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800AED50 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800AF170 (-OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Wind.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180024A90 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004E794 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x180070B6C (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800AD488 (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800AD52C (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800AE900 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800B0244 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
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
  __int64 *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r15
  char v15; // al
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  char v18; // [rsp+30h] [rbp-20h]
  _QWORD v19[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v23, 1, a2);
  v6 = v23;
  if ( !v23 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
      v5);
  InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(v23, &v16);
  v8 = v16;
  if ( !v16 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
      v7);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 56LL))(v16 + 8);
  CUIHierarchy::ModifyInputDisabledStateAndPropagate(this, a2, 2, v9);
  InputSite::GetIdForNamespace(v6, (__int64)&v17, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  if ( !v18 )
    std::_Throw_bad_optional_access();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *, _QWORD *, __int64))(*(_QWORD *)InputSiteHierarchyManager
                                                                                 + 24LL))(
    InputSiteHierarchyManager,
    v19,
    v17);
  v11 = (__int64 *)v19[0];
  v12 = (__int64 *)v19[1];
  while ( v11 != v12 )
  {
    InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*v11, &v22);
    v13 = v22;
    if ( v22 )
    {
      v14 = v22 + 8;
      if ( a2 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v22 + 8) + 40LL))(v22 + 8) )
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v13 + 8);
        CUIHierarchy::ModifyInputDisabledStateAndPropagate(this, a2, 1, v15);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        break;
      }
    }
    if ( v13 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    ++v11;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v19);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
