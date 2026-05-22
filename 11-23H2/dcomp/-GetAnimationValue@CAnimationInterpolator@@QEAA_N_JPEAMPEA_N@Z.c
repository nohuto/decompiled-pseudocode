/*
 * XREFs of ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1801B2760
 * Callers:
 *     ?GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z @ 0x1800E8BF0 (-GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1801B2658 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1801B282C (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimationInterpolator::GetAnimationValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  bool result; // al
  float v8; // [rsp+40h] [rbp-10h] BYREF
  float v9; // [rsp+44h] [rbp-Ch] BYREF
  signed __int64 v10; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+7Ch] [rbp+2Ch]

  v12 = HIDWORD(a4);
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0LL;
  v11 = 0;
  result = CAnimationInterpolator::GetInterpolatedValue(this, a2, &v8, a4);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, float *, signed __int64 *))(**(_QWORD **)this + 16LL))(
               *(_QWORD *)this,
               &v11,
               &v9,
               &v10);
    if ( result
      && (!v11
       || (result = CAnimationInterpolator::GetAdjustedHandoffValue((__int64)this, a2, v8, (bool *)v11, v9, v10, &v8))) )
    {
      *a3 = v8;
    }
  }
  return result;
}
