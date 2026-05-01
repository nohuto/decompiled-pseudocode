/*
 * XREFs of ??1_lambda_4888b64c5e64c473e9f2aad195409538_@@QEAA@XZ @ 0x1801B5E78
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x18054D708 (-RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDeskto.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_4888b64c5e64c473e9f2aad195409538_::~_lambda_4888b64c5e64c473e9f2aad195409538_(
        _lambda_4888b64c5e64c473e9f2aad195409538_ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
