/*
 * XREFs of ?NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z @ 0x1800855E0
 * Callers:
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800852D4 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083E0C (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CUIHierarchy::NotifyWindowOfInputDisabledStateChange(__int64 a1, __int64 a2, int a3, int a4)
{
  char v5; // si
  char result; // al
  struct InputSiteManager *InputSiteManager; // rax
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 v12; // rdi
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = a1;
  v5 = (a4 & 0xFFFFFFFD) == 0;
  result = (a3 & 0xFFFFFFFD) == 0;
  if ( v5 != result )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, &v15, 1, a2);
    v9 = v15;
    if ( !v15 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        309LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\serve"
                 "r\\cuihierarchy.cpp",
        v8);
    InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(v15, v13);
    v12 = v13[0];
    if ( !v13[0] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        311LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\serve"
                 "r\\cuihierarchy.cpp",
        v11);
    LOBYTE(v10) = v5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v13[0] + 8LL) + 32LL))(v13[0] + 8LL, v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return result;
}
