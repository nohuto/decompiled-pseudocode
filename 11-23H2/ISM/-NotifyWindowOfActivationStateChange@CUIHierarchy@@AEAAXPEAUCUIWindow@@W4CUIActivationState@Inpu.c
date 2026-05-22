/*
 * XREFs of ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18009C470
 * Callers:
 *     ?PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z @ 0x18009D018 (-PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z.c)
 * Callees:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180023B80 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x1800555C4 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x18009AF44 (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x18009AFE8 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18009B6D0 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CUIHierarchy::NotifyWindowOfActivationStateChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct InputSiteManager *InputSiteManager; // rax
  const char *v8; // r9
  __int64 v9; // rbx
  const char *v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbp
  void (__fastcall *v13)(__int64, _QWORD, _QWORD); // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  char v16; // bp
  struct InputSiteManager *v17; // rax
  __int64 *i; // rdi
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22[11]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF

  v24 = a1;
  if ( a3 != *(_DWORD *)(a2 + 36) || a4 != *(_QWORD *)(a2 + 40) )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v24, 1, *(_QWORD *)(a2 + 16));
    v9 = v24;
    if ( !v24 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
        v8);
    InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(v24, &v25);
    v11 = v25;
    if ( !v25 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xAC,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
        v10);
    v12 = a4 & -(__int64)((a3 & 2) != 0);
    v13 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v25 + 8) + 40LL);
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v12);
    v13(v11 + 8, a3, ViewIdFromWindowId);
    *(_DWORD *)(a2 + 36) = a3;
    *(_QWORD *)(a2 + 40) = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v16 = (a3 & 3) != 0;
  if ( v16 != *(_BYTE *)(a2 + 49) )
  {
    *(_BYTE *)(a2 + 49) = v16;
    v17 = ISMStatics::GetInputSiteManager();
    std::vector<InputSite *>::vector<InputSite *>(v22, (__int64)v17 + 56);
    for ( i = (__int64 *)v22[0]; i != (__int64 *)v22[1]; ++i )
    {
      InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*i, &v24);
      v19 = v24;
      if ( v24 )
      {
        v20 = v24 + 8;
        if ( *(_QWORD *)(a2 + 16) == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 40LL))(v24 + 8) )
        {
          LOBYTE(v21) = (a3 & 3) != 0;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v19 + 8, v21);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          break;
        }
      }
      if ( v19 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    std::vector<_LUID>::_Tidy((__int64)v22);
  }
}
