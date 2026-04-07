/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_f0bf7093c06592d2ef07a5499c562608___ @ 0x18010AAD0
 * Callers:
 *     ?TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x18010AC10 (-TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_f0bf7093c06592d2ef07a5499c562608___(
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
