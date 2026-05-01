/*
 * XREFs of ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x18053F984
 * Callers:
 *     ?AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z @ 0x18053FA90 (-AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z.c)
 *     ?CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z @ 0x18053FB80 (-CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  _DWORD v9[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CVirtualDesktopVisibilityPolicy *v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = this;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v12);
  v6 = 0;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, CVirtualDesktopVisibilityPolicy **))(*(_QWORD *)a3 + 216LL))(
           a3,
           &v11);
    if ( v5 >= 0 )
    {
      if ( v12 != (_DWORD)v11 )
        return v6;
      v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, _DWORD *))(*(_QWORD *)a2 + 336LL))(a2, v9);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a3 + 336LL))(a3, &v13);
        if ( v5 >= 0 )
          return v9[0] == v13;
        v7 = 239LL;
      }
      else
      {
        v7 = 238LL;
      }
    }
    else
    {
      v7 = 236LL;
    }
  }
  else
  {
    v7 = 235LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
