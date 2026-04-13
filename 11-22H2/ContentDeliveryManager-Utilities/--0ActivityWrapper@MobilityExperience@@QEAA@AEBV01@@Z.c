/*
 * XREFs of ??0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z @ 0x18006E534
 * Callers:
 *     ??0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAVActivityToastNotificationCallback@ToastNotification@@AEBVActivityWrapper@MobilityExperience@@AEBV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@2@@Z @ 0x18006E02C (--0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV-$com_ptr_t@VActivityToastNotificationCal.c)
 *     ??R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ @ 0x18006E9DC (--R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VICDPActivity@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVICDPActivity@@@Z @ 0x18006E3C4 (--0-$com_ptr_t@VICDPActivity@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVICDPActivity@@@Z.c)
 */

MobilityExperience::ActivityWrapper *__fastcall MobilityExperience::ActivityWrapper::ActivityWrapper(
        MobilityExperience::ActivityWrapper *this,
        const struct MobilityExperience::ActivityWrapper *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  wil::com_ptr_t<ICDPActivity,wil::err_exception_policy>::com_ptr_t<ICDPActivity,wil::err_exception_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  return this;
}
