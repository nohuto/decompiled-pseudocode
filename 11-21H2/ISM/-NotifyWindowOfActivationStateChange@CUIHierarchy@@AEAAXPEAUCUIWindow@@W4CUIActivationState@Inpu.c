/*
 * XREFs of ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18008538C
 * Callers:
 *     ?PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z @ 0x180085F58 (-PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083E0C (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083EB0 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180084600 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x180086B38 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
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
  char v16; // si
  struct InputSiteManager *v17; // rax
  __int64 *i; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  _QWORD v21[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _QWORD *v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v23 = (_QWORD *)a1;
  if ( a3 != *(_DWORD *)(a2 + 36) || a4 != *(_QWORD *)(a2 + 40) )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64 *)&v23, 1, *(_QWORD *)(a2 + 16));
    v9 = (__int64)v23;
    if ( !v23 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        169LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\serve"
                 "r\\cuihierarchy.cpp",
        v8);
    InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>((__int64)v23, &v24);
    v11 = v24;
    if ( !v24 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        172LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\serve"
                 "r\\cuihierarchy.cpp",
        v10);
    v12 = a4 & -(__int64)((a3 & 2) != 0);
    v13 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v24 + 8) + 40LL);
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
    std::vector<InputSite *>::vector<InputSite *>(v21, (__int64)v17 + 56);
    for ( i = (__int64 *)v21[0]; i != (__int64 *)v21[1]; ++i )
    {
      InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*i, &v23);
      v19 = v23;
      if ( v23 && *(_QWORD *)(a2 + 16) == (*(__int64 (__fastcall **)(_QWORD *))(v23[1] + 40LL))(v23 + 1) )
      {
        LOBYTE(v20) = (a3 & 3) != 0;
        (*(void (__fastcall **)(_QWORD *, __int64))(v19[1] + 32LL))(v19 + 1, v20);
        (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
        break;
      }
      if ( v19 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
      }
    }
    std::vector<_LUID>::_Tidy(v21);
  }
}
