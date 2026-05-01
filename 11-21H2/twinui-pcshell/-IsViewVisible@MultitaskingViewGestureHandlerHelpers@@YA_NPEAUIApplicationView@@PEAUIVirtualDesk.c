/*
 * XREFs of ?IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18049DE38
 * Callers:
 *     ?DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCollection@@PEAUIVirtualDesktop@@@Z @ 0x18049DB2C (-DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCo.c)
 *     ?GetMostRecentlyUsedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIObjectArray@@PEAUIVirtualDesktop@@PEAPEAUIApplicationView@@@Z @ 0x18049DC70 (-GetMostRecentlyUsedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIObjectArray@@PEAUIVirtua.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall MultitaskingViewGestureHandlerHelpers::IsViewVisible(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  char v3; // bl
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+24h] [rbp-34h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = 0;
  if ( !a2 )
    goto LABEL_21;
  v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int64 *, struct IVirtualDesktop *))(*(_QWORD *)this + 200LL))(
         this,
         &v19,
         a3);
  if ( v6 < 0 )
  {
    v7 = 18LL;
LABEL_25:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
      (const char *)(unsigned int)v6);
    return v3;
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v17);
  if ( v6 < 0 )
  {
    v7 = 19LL;
    goto LABEL_25;
  }
  v8 = v17 - 0x4658059A45DB96FFLL;
  if ( v17 == 0x4658059A45DB96FFLL )
    v8 = v18 - 0x1012647F7CCD4687LL;
  if ( !v8 )
    goto LABEL_21;
  v9 = v19 - v17;
  if ( v19 == v17 )
    v9 = v20 - v18;
  if ( !v9 )
    goto LABEL_21;
  v10 = v19 - 0x4CF966F2C2DDEA68LL;
  if ( v19 == 0x4CF966F2C2DDEA68LL )
    v10 = v20 + 0x534404FF02E49B7ELL;
  if ( !v10 )
    goto LABEL_21;
  v11 = v19 - 0x4AB24DE3BB64D5B7LL;
  if ( v19 == 0x4AB24DE3BB64D5B7LL )
    v11 = v20 + 0x235851FE89248358LL;
  if ( !v11 )
    goto LABEL_21;
  v12 = v19 - 0x45D551C0B4620C71LL;
  if ( v19 == 0x45D551C0B4620C71LL )
    v12 = v20 + 0xC8183C556F22755LL;
  if ( !v12 )
  {
LABEL_21:
    v13 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *, struct IVirtualDesktop *))(*(_QWORD *)this + 216LL))(
            this,
            &v15,
            a3);
    if ( v13 >= 0 )
    {
      if ( v15 )
        return 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
        (const char *)(unsigned int)v13);
    }
    v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *))(*(_QWORD *)this + 336LL))(
           this,
           &v16);
    if ( v6 >= 0 )
      return v16 != 0;
    v7 = 37LL;
    goto LABEL_25;
  }
  return v3;
}
