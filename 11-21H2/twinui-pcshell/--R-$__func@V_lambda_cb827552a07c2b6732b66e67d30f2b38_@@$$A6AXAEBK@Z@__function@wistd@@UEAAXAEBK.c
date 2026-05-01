/*
 * XREFs of ??R?$__func@V_lambda_cb827552a07c2b6732b66e67d30f2b38_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x180040440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_cb827552a07c2b6732b66e67d30f2b38_,void (unsigned long const &)>::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + 248) = *a2 != 0;
  return result;
}
