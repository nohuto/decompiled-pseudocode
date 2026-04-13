/*
 * XREFs of ??0?$com_ptr_t@VICDPActivity@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVICDPActivity@@@Z @ 0x18006E374
 * Callers:
 *     ??$?0V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@?$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_9381c80c14e95fe77b42b10959c65c30_@@@Z @ 0x18006C290 (--$-0V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@-$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b1.c)
 *     ??0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z @ 0x18006E4E4 (--0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z.c)
 *     ??R_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEBA@XZ @ 0x18006E874 (--R_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEBA@XZ.c)
 *     ??R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ @ 0x18006E98C (--R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180070808 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ICDPActivity,wil::err_exception_policy>::com_ptr_t<ICDPActivity,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
