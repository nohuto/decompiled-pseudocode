/*
 * XREFs of ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B6DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     XamlLauncher_CreateInstance @ 0x180105EC4 (XamlLauncher_CreateInstance.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherFactory::CreateInstance(
        XamlLauncherFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v7 = -2147221232;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\XamlLauncher.h",
      (const char *)0x80040110LL);
    return v7;
  }
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  v6 = XamlLauncher_CreateInstance(&v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 237LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\XamlLauncher.h",
      (const char *)(unsigned int)v6);
    goto LABEL_4;
  }
  v6 = (**v11)(v11, a3, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 238LL;
    goto LABEL_9;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  return v7;
}
