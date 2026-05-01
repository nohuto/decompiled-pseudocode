/*
 * XREFs of ?CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x1801474E8
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180145BA0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSoftLandingHandler@@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180147B68 (--$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopSoftLandingHandler_CreateInstance(
        struct IApplicationViewCollection *a1,
        struct IVirtualDesktopNotificationServicePrivate *a2,
        struct IVirtualDesktopRegistryHelpers *a3,
        const struct _GUID *a4,
        void **a5)
{
  unsigned int v5; // ebx
  void **v6; // rsi
  int v7; // eax
  int v8; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationViewCollection *v13; // [rsp+40h] [rbp+8h] BYREF
  struct IVirtualDesktopNotificationServicePrivate *v14; // [rsp+48h] [rbp+10h] BYREF
  struct IVirtualDesktopRegistryHelpers *v15; // [rsp+50h] [rbp+18h] BYREF
  int (__fastcall ***v16)(_QWORD, GUID *, void **); // [rsp+58h] [rbp+20h] BYREF

  v15 = a3;
  v14 = a2;
  v13 = a1;
  v5 = 0;
  v6 = a5;
  *a5 = 0LL;
  v16 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSoftLandingHandler,CVirtualDesktopSoftLandingHandler,IApplicationViewCollection * &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopRegistryHelpers * &>(
         &v16,
         &v13,
         &v14,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 160LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
      (const char *)v10);
    v5 = v8;
    goto LABEL_4;
  }
  if ( !v16 )
  {
    *v6 = 0LL;
    goto LABEL_7;
  }
  if ( (**v16)(v16, &GUID_e78f38d6_dc0c_4e82_b397_c5c8d0516858, v6) < 0 )
  {
LABEL_7:
    v8 = -2147467262;
    v10 = 2147500034LL;
    v11 = 161LL;
    goto LABEL_8;
  }
LABEL_4:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  return v5;
}
