/*
 * XREFs of ?IsOrphanedView@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktopCollection@@@Z @ 0x18053FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CVirtualDesktopVisibilityPolicy::IsOrphanedView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktopCollection *a3)
{
  int v5; // eax
  char v6; // di
  int v7; // eax
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int (__fastcall *v13)(struct IVirtualDesktopCollection *, __int64 *, __int64 *); // rbx
  int v14; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v14);
  v6 = 0;
  if ( v5 >= 0 )
  {
    if ( !v14 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v5);
  }
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v15);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  if ( v15 )
    return 0;
LABEL_7:
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v17);
  if ( v8 >= 0 )
  {
    v16 = 0LL;
    v10 = v17 - 0x4CF966F2C2DDEA68LL;
    if ( v17 == 0x4CF966F2C2DDEA68LL )
      v10 = v18 + 0x534404FF02E49B7ELL;
    if ( v10 )
    {
      v11 = v17 - 0x4AB24DE3BB64D5B7LL;
      if ( v17 == 0x4AB24DE3BB64D5B7LL )
        v11 = v18 + 0x235851FE89248358LL;
      if ( v11 )
      {
        v12 = v17 - 0x45D551C0B4620C71LL;
        if ( v17 == 0x45D551C0B4620C71LL )
          v12 = v18 + 0xC8183C556F22755LL;
        if ( v12 )
        {
          v13 = *(int (__fastcall **)(struct IVirtualDesktopCollection *, __int64 *, __int64 *))(*(_QWORD *)a3 + 96LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
          if ( v13(a3, &v17, &v16) < 0 )
            v6 = 1;
        }
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    return v6;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
    return 1;
  }
}
