/*
 * XREFs of ?__move@?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AXAEBK@Z@23@@Z @ 0x1800A34E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::`vftable';
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  a2[1] = result;
  return result;
}
