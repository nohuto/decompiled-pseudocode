/*
 * XREFs of ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180127140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x1800343F4 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18004DA74 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083EB0 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180086B74 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
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
  __int64 *v8; // r14
  __int64 *v9; // rbp
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+28h] [rbp-50h]
  _QWORD v15[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v17; // [rsp+80h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 9);
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      72LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\"
               "cuicomponentinputobjectproxy.cpp",
      a4);
  InputSite::GetIdForNamespace(v6, (__int64)&v13, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  if ( !v14 )
    std::_Throw_bad_optional_access();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *, _QWORD *, __int64))(*(_QWORD *)InputSiteHierarchyManager
                                                                                 + 24LL))(
    InputSiteHierarchyManager,
    v15,
    v13);
  v8 = (__int64 *)v15[0];
  v9 = (__int64 *)v15[1];
  while ( v8 != v9 )
  {
    InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*v8, &v17);
    v10 = v17;
    if ( v17 )
    {
      v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
      if ( v11 == (*(__int64 (__fastcall **)(_QWORD *))(v10[1] + 40LL))(v10 + 1) )
      {
        (*(void (__fastcall **)(_QWORD *, const struct TransferForegroundInfo *))(v10[1] + 24LL))(v10 + 1, a2);
        (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
        break;
      }
    }
    if ( v10 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
    }
    ++v8;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v15);
  return 0LL;
}
