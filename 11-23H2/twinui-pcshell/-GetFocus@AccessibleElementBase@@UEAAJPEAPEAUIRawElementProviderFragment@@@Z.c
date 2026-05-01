/*
 * XREFs of ?GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1805842C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAccessibleAncestor@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18057F958 (-GetAccessibleAncestor@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@.c)
 *     ?GetFocusedDescendant@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18057FAC8 (-GetFocusedDescendant@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@P.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AccessibleElementBase::GetFocus(
        AccessibleElementBase *this,
        struct IRawElementProviderFragment **a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  __int64 *FocusedDescendant; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  Element = AccessibleElementBase::_GetElement(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v9);
  if ( Element >= 0 )
  {
    FocusedDescendant = ElementHelpers::GetFocusedDescendant(&v11, (__int64)v9);
    ElementHelpers::GetAccessibleAncestor(&v10, *FocusedDescendant);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    if ( v10 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderFragment **))(*(_QWORD *)v10 + 376LL))(
             v10,
             &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
             a2);
      Element = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x140,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v6);
    }
    else
    {
      Element = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return (unsigned int)Element;
}
