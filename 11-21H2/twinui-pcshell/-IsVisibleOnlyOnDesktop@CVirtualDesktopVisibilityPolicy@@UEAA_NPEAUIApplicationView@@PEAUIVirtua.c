/*
 * XREFs of ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18053FFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006FEC0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsVisibleOnlyOnDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-30h] BYREF
  int v16; // [rsp+24h] [rbp-2Ch] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v15);
  if ( v6 >= 0 )
  {
    if ( !v15 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  v16 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v16);
  if ( v7 >= 0 )
  {
    if ( v16 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
  }
  v8 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v17);
  if ( v8 >= 0 )
  {
    v9 = v17[0] - 0x4658059A45DB96FFLL;
    if ( v17[0] == 0x4658059A45DB96FFLL )
      v9 = v17[1] - 0x1012647F7CCD4687LL;
    if ( !v9 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
  }
  v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v18);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v10);
    return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
  }
  v11 = v18 - 0x4CF966F2C2DDEA68LL;
  if ( v18 == 0x4CF966F2C2DDEA68LL )
    v11 = v19 + 0x534404FF02E49B7ELL;
  if ( v11 )
  {
    v12 = v18 - 0x4AB24DE3BB64D5B7LL;
    if ( v18 == 0x4AB24DE3BB64D5B7LL )
      v12 = v19 + 0x235851FE89248358LL;
    if ( v12 )
    {
      v13 = v18 - 0x45D551C0B4620C71LL;
      if ( v18 == 0x45D551C0B4620C71LL )
        v13 = v19 + 0xC8183C556F22755LL;
      if ( v13 )
        return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
    }
  }
  return 0;
}
