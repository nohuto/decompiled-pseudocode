/*
 * XREFs of ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z @ 0x1800C7C10
 * Callers:
 *     ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800C7E10 (-GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEB.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::ClampToMonitorBounds(
        MagnifierExperienceHelper *this,
        double *a2,
        double *a3)
{
  double v3; // xmm1_8
  double v4; // xmm3_8
  double v5; // xmm2_8
  double v6; // xmm1_8
  double v7; // xmm0_8
  double v8; // xmm1_8
  double v9; // xmm1_8

  v3 = (double)*((int *)this + 14);
  v4 = fmax((double)*((int *)this + 12), *a2);
  v5 = fmax((double)*((int *)this + 13), *a3);
  if ( *((double *)this + 10) + v4 <= v3 )
    v6 = v4;
  else
    v6 = v3 - *((double *)this + 10);
  v7 = *((double *)this + 11);
  *a2 = v6;
  v8 = (double)*((int *)this + 15);
  if ( v7 + v5 <= v8 )
    v9 = v5;
  else
    v9 = v8 - *((double *)this + 11);
  *a3 = v9;
}
