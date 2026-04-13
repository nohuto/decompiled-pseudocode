/*
 * XREFs of ??0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAVActivityToastNotificationCallback@ToastNotification@@AEBVActivityWrapper@MobilityExperience@@AEBV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@2@@Z @ 0x18006E02C
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180070858 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ??0?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActivityToastNotificationCallback@ToastNotification@@@Z @ 0x18006E374 (--0-$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@.c)
 *     ??0?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVICDPActivityStore@@@Z @ 0x18006E400 (--0-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVICDPActivityStore@@.c)
 *     ??0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z @ 0x18006E534 (--0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall _lambda_9381c80c14e95fe77b42b10959c65c30_::_lambda_9381c80c14e95fe77b42b10959c65c30_(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        const struct MobilityExperience::ActivityWrapper *a4,
        _QWORD *a5)
{
  __int64 v7; // r11

  wil::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>(
    a1,
    *a2);
  *(_QWORD *)(a1 + 8) = v7;
  MobilityExperience::ActivityWrapper::ActivityWrapper((MobilityExperience::ActivityWrapper *)(a1 + 16), a4);
  wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>(
    a1 + 32,
    *a5);
  return a1;
}
