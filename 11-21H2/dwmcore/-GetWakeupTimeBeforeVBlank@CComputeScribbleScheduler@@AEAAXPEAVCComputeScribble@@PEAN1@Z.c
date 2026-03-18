/*
 * XREFs of ?GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXPEAVCComputeScribble@@PEAN1@Z @ 0x1801E9D90
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x1801EA85C (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CComputeScribbleScheduler::GetWakeupTimeBeforeVBlank(
        CComputeScribbleScheduler *this,
        struct CComputeScribble *a2,
        double *a3,
        double *a4)
{
  double v4; // xmm6_8
  double v8; // xmm7_8
  int v9; // eax
  double v10; // xmm0_8
  float v11; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[4]; // [rsp+38h] [rbp-50h] BYREF
  int v13; // [rsp+3Ch] [rbp-4Ch]

  v4 = *((double *)this + 6) - *((double *)this + 7);
  v8 = fminf((float)CCommonRegistryData::SuperWetTiming::RefreshRatePercentage / 100.0, 0.5) * *((double *)this + 6);
  (*(void (__fastcall **)(struct CComputeScribble *, struct CComputeScribble *, _BYTE *, float *))(*(_QWORD *)a2 + 32LL))(
    a2,
    a2,
    v12,
    &v11);
  v9 = v13;
  if ( v13 < 0 )
    v9 = 0;
  v10 = v11;
  *a3 = (1.0 - (double)v9 / (double)*((int *)this + 11)) * v4 + v8 + v11 + *((double *)this + 7) + *(double *)this;
  *a4 = v10 + *(double *)this;
}
