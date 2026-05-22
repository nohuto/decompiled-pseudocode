/*
 * XREFs of ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180142610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004DF78 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18005EEE0 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x18009AFE8 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18009DCF4 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CUIComponentInputObjectProxy::TransferForegroundToHost(
        CUIComponentInputObjectProxy *this,
        const struct TransferForegroundInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  char v15; // [rsp+28h] [rbp-50h]
  _QWORD v16[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 9);
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cui"
           "componentinputobjectproxy.cpp",
      a4);
  InputSite::GetIdForNamespace(v6, (__int64)&v14, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  if ( !v15 )
    std::_Throw_bad_optional_access();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *, _QWORD *, __int64))(*(_QWORD *)InputSiteHierarchyManager
                                                                                 + 24LL))(
    InputSiteHierarchyManager,
    v16,
    v14);
  v8 = (__int64 *)v16[0];
  v9 = (__int64 *)v16[1];
  while ( v8 != v9 )
  {
    InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*v8, &v18);
    v10 = v18;
    if ( v18 )
    {
      v11 = v18 + 8;
      v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
      if ( v12 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v10 + 8) )
      {
        (*(void (__fastcall **)(__int64, const struct TransferForegroundInfo *))(*(_QWORD *)v11 + 24LL))(v10 + 8, a2);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        break;
      }
    }
    if ( v10 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    ++v8;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v16);
  return 0LL;
}
