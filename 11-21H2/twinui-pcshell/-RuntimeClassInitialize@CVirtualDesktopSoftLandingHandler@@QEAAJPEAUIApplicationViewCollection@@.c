/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18010CC80
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSoftLandingHandler@@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18010B970 (--$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVCVirtualDesktopSoftLandingHandler@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVCVirtualDesktopSoftLandingHandler@@@Z @ 0x18010CD48 (--$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktop_ea_18010CD48.c)
 *     ??4?$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewCollection@@@Z @ 0x18010E060 (--4-$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopSoftLandingHandler::RuntimeClassInitialize(
        CVirtualDesktopSoftLandingHandler *this,
        struct IApplicationViewCollection *a2,
        struct IVirtualDesktopNotificationServicePrivate *a3,
        struct IVirtualDesktopRegistryHelpers *a4)
{
  int v5; // ebp
  __int64 v7; // rdi
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (int)a3;
  wil::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>::operator=((char *)this + 40, a2);
  v7 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IVirtualDesktopRegistryHelpers *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 5) + 96LL))(
         *((_QWORD *)this + 5),
         (char *)this + 16,
         (char *)this + 48);
  v11 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
      (const char *)(unsigned int)v8);
    return v11;
  }
  else
  {
    v12 = ___Register_UIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVCVirtualDesktopSoftLandingHandler___SmartCookie__QEAAJPEAUIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVCVirtualDesktopSoftLandingHandler___Z(
            (int)this + 56,
            v5,
            v9,
            v10,
            (__int64)this);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    else
    {
      return 0LL;
    }
  }
}
