/*
 * XREFs of ?ViewOwnerChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180607370
 * Callers:
 *     <none>
 * Callees:
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18003A960 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::ViewOwnerChangedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, struct IApplicationView **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v4 = *(int (__fastcall **)(struct IApplicationView *, struct IApplicationView **))(*(_QWORD *)a2 + 360LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
  if ( v4(a2, &v9) < 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *))(**((_QWORD **)this + 14) + 88LL))(
         *((_QWORD *)this + 14),
         a2,
         v9) )
  {
    v6 = 0;
  }
  else
  {
    v5 = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(
           (CVirtualDesktopManager *)((char *)this - 8),
           v9);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E4,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
  return v6;
}
