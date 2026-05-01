/*
 * XREFs of ?GetMostRecentlyUsedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIObjectArray@@PEAUIVirtualDesktop@@PEAPEAUIApplicationView@@@Z @ 0x18049DC70
 * Callers:
 *     ?SwitchToLastActivatedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktop@@@Z @ 0x18049E018 (-SwitchToLastActivatedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollect.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18049DE38 (-IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesk.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewGestureHandlerHelpers::GetMostRecentlyUsedView(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IApplicationView **a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // esi
  int v10; // r14d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned int v13; // ebx
  __int64 v14; // rax
  struct IVirtualDesktop *v15; // r8
  MultitaskingViewGestureHandlerHelpers *v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int v19; // [rsp+80h] [rbp+40h] BYREF
  struct IVirtualDesktop *v20; // [rsp+90h] [rbp+50h]
  int v21; // [rsp+98h] [rbp+58h] BYREF

  v20 = a3;
  v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, unsigned int *, struct IVirtualDesktop *, struct IApplicationView **))(*(_QWORD *)this + 24LL))(
         this,
         &v19,
         a3,
         a4);
  if ( v6 < 0 )
  {
    v7 = 88LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v19 )
  {
    v9 = -1;
    v10 = -1;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0;
    do
    {
      v14 = *(_QWORD *)this;
      v16 = 0LL;
      if ( (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, _QWORD, GUID *, MultitaskingViewGestureHandlerHelpers **))(v14 + 32))(
             this,
             v13,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             &v16) >= 0
        && MultitaskingViewGestureHandlerHelpers::IsViewVisible(v16, (struct IApplicationView *)a2, v15)
        && (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *))(*(_QWORD *)v16 + 88LL))(v16, &v21) >= 0
        && v21
        && (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, unsigned __int64 *))(*(_QWORD *)v16 + 184LL))(
             v16,
             &v17) >= 0
        && v17 > v12 )
      {
        if ( v11 )
        {
          if ( v17 <= v11 )
          {
            v9 = v13;
            v12 = v17;
          }
          else
          {
            v12 = v11;
            v9 = v10;
            v11 = v17;
            v10 = v13;
          }
        }
        else
        {
          v10 = v13;
          v11 = v17;
        }
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v16);
      ++v13;
    }
    while ( v13 < v19 );
    if ( v10 >= 0 && v9 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, _QWORD, GUID *, struct IVirtualDesktop *))(*(_QWORD *)this + 32LL))(
             this,
             (unsigned int)v9,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             v20);
      if ( v6 < 0 )
      {
        v7 = 137LL;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
