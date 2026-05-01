/*
 * XREFs of ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1370
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180113E9C (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800D14A8 (--$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewVisibilityService_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewVisibilityService,IMultitaskingViewVisibilityService,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 98LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewvisibilityservice.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_3;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, void **))v8)(v8, &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 99LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  return v4;
}
