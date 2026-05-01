/*
 * XREFs of _lambda_8f44ff5c8977fc530aba29e054e0c967_::_lambda_8f44ff5c8977fc530aba29e054e0c967_ @ 0x180233714
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_8f44ff5c8977fc530aba29e054e0c967_::_lambda_8f44ff5c8977fc530aba29e054e0c967_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
