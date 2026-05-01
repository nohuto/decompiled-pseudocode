/*
 * XREFs of ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x1805FA344
 * Callers:
 *     ?AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z @ 0x1805FA450 (-AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z.c)
 *     ?CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z @ 0x1805FA540 (-CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
        v7 = 302LL;
      }
      else
      {
        v7 = 301LL;
      }
    }
    else
    {
      v7 = 299LL;
    }
  }
  else
  {
    v7 = 298LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
