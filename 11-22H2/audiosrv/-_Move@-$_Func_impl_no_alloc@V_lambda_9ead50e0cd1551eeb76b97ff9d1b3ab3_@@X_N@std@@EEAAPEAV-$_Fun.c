/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800F4550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_,void,bool>::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = &std::_Func_impl_no_alloc<_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_,void,bool>::`vftable';
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = a1[2];
  a2[3] = a1[3];
  result = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return result;
}
