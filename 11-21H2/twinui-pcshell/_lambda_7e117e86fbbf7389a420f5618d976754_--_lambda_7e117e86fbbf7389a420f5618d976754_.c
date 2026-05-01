/*
 * XREFs of _lambda_7e117e86fbbf7389a420f5618d976754_::_lambda_7e117e86fbbf7389a420f5618d976754_ @ 0x1801C3E08
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_7e117e86fbbf7389a420f5618d976754_::_lambda_7e117e86fbbf7389a420f5618d976754_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *a1 = *a2;
  result = a1;
  a1[1] = v2;
  return result;
}
