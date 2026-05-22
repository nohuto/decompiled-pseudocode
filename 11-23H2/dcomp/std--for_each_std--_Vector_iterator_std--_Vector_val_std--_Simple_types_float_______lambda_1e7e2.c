/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_1e7e29a789397ed4e8377fc110abbbe7___ @ 0x1801A9714
 * Callers:
 *     ?TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1801A9910 (-TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_1e7e29a789397ed4e8377fc110abbbe7___(
        _OWORD *a1,
        float *a2,
        float *a3,
        double **a4)
{
  double *v4; // r10
  double *v5; // rax
  float v6; // xmm0_4
  _OWORD *result; // rax

  if ( a2 != a3 )
  {
    v4 = *a4;
    v5 = a4[1];
    do
    {
      v6 = *a2++;
      *v5 = (*v4 - v6) * (*v4 - v6) + *v5;
    }
    while ( a2 != a3 );
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
