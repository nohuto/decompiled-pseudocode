/*
 * XREFs of ?DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z @ 0x1804A3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIDismissAnimationController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A2D04 (--$As@UIDismissAnimationController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBA.c)
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x1804A2DBC (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSnapAssistViewHost::DismissAnimationFinished(CSnapAssistViewHost *this, struct IUnknown *a2)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 40);
  if ( *v4 )
  {
    v9 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IDismissAnimationController>(v4, &v9);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13B,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v5);
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 9);
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
           a2,
           &GUID_b406b6c5_d8ab_475a_b797_5e5d2d5d22c4,
           (char *)this + 72);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v7);
    AsyncControllerHelpers::CallControllerAsync<IDismissAnimationController,>(&v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
}
