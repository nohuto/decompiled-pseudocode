/*
 * XREFs of _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x1800B3730
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18007EE44 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_(_DWORD *a1)
{
  if ( *a1 != 4 )
  {
    if ( *a1 == 64 )
    {
      operator delete(a1);
      return;
    }
    if ( *a1 != 128 )
      wil::details::in1diag3::FailFastImmediate_Unexpected((wil::details::in1diag3 *)a1);
  }
  operator delete(a1);
}
