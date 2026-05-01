/*
 * XREFs of ?DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCollection@@PEAUIVirtualDesktop@@@Z @ 0x18055D528
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18055992C (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18055D7AC (-IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesk.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall MultitaskingViewGestureHandlerHelpers::DoesHaveVisibleNonIconicViews(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationViewCollection *a2,
        struct IVirtualDesktop *a3)
{
  char v4; // bl
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rax
  struct IVirtualDesktop *v8; // r8
  HWND hWnd[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+20h] BYREF
  MultitaskingViewGestureHandlerHelpers *v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)this;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int64 **, struct IVirtualDesktop *))(v5 + 24))(
         this,
         &v13,
         a3) >= 0
    && (*(int (__fastcall **)(__int64 *, unsigned int *))(*v13 + 24))(v13, &v11) >= 0 )
  {
    v6 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = 0LL;
        v7 = *v13;
        v12 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, MultitaskingViewGestureHandlerHelpers **))(v7 + 32))(
               v13,
               v6,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v12) >= 0
          && MultitaskingViewGestureHandlerHelpers::IsViewVisible(v12, a2, v8)
          && (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, HWND *))(*(_QWORD *)v12 + 72LL))(v12, hWnd) >= 0
          && !IsIconic(hWnd[0]) )
        {
          break;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
        if ( ++v6 >= v11 )
          goto LABEL_11;
      }
      v4 = 1;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
    }
  }
LABEL_11:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  return v4;
}
