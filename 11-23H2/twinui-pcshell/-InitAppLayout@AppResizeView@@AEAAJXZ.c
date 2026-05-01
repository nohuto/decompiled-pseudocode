/*
 * XREFs of ?InitAppLayout@AppResizeView@@AEAAJXZ @ 0x1805D70A8
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x1805D7DE0 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView::InitAppLayout(AppResizeView *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  void *v5; // rbx
  __int64 (__fastcall *v6)(void *, char *); // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         *((IUnknown **)this + 2),
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &ppvOut);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 339LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_6;
  }
  v5 = ppvOut;
  v6 = *(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)ppvOut + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  v2 = v6(v5, (char *)this + 72);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 340LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v3;
}
