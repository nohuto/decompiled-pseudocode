/*
 * XREFs of ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x18057657C
 * Callers:
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1805757A0 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1802E4AE6 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 *     ?GetAccessibleAncestor@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18057F958 (-GetAccessibleAncestor@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@.c)
 *     ?GetFocusedDescendant@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18057FAC8 (-GetFocusedDescendant@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@P.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewElementBase::_RaiseFocusEvent(CMultitaskingViewElementBase *this)
{
  char v2; // di
  __int64 *RootElement; // rax
  bool v4; // si
  _QWORD *FocusedDescendant; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, GUID *, IRawElementProviderSimple **); // rdi
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  IRawElementProviderSimple *pProvider; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+48h] [rbp+28h] BYREF

  v2 = 0;
  LODWORD(pProvider) = 0;
  v4 = 0;
  if ( *((_BYTE *)this + 176) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this) )
    {
      if ( UiaClientsAreListening() )
      {
        RootElement = ElementHelpers::GetRootElement(&v14, (__int64)this);
        v2 = 1;
        LODWORD(pProvider) = 1;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*RootElement + 304LL))(*RootElement) )
          v4 = 1;
      }
    }
  }
  if ( (v2 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  if ( v4 )
  {
    FocusedDescendant = (_QWORD *)ElementHelpers::GetFocusedDescendant(&pProvider, this);
    ElementHelpers::GetAccessibleAncestor(&v14, *FocusedDescendant);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pProvider);
    v6 = v14;
    if ( v14 )
    {
      pProvider = 0LL;
      v7 = *(__int64 (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v14 + 376LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
      v8 = v7(v6, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1117LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        return v9;
      }
      v8 = UiaRaiseAutomationEvent(pProvider, 20005);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1118LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  return 0LL;
}
