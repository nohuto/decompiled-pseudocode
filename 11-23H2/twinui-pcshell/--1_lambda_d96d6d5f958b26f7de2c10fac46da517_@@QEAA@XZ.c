/*
 * XREFs of ??1_lambda_d96d6d5f958b26f7de2c10fac46da517_@@QEAA@XZ @ 0x18021E964
 * Callers:
 *     ??$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@SmartCookie@@QEAAJPEAUIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@Z @ 0x1801B3F90 (--$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVT.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _lambda_d96d6d5f958b26f7de2c10fac46da517_::~_lambda_d96d6d5f958b26f7de2c10fac46da517_(
        _lambda_d96d6d5f958b26f7de2c10fac46da517_ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
