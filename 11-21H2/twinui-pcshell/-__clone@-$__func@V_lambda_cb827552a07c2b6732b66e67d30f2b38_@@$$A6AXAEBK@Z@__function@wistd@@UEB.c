/*
 * XREFs of ?__clone@?$__func@V_lambda_cb827552a07c2b6732b66e67d30f2b38_@@$$A6AXAEBK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AXAEBK@Z@23@@Z @ 0x1805E2770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_cb827552a07c2b6732b66e67d30f2b38_,void (unsigned long const &)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &wistd::__function::__func<_lambda_cb827552a07c2b6732b66e67d30f2b38_,void (unsigned long const &)>::`vftable';
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
