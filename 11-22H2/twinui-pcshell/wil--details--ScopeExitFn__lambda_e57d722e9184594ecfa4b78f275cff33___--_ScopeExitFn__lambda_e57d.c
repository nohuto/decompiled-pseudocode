/*
 * XREFs of wil::details::ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___::_ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___ @ 0x18059136C
 * Callers:
 *     _CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor$4 @ 0x1805926A4 (_CVirtualDesktopContainerElement--ItemRemoved_--_1_--dtor$4.c)
 * Callees:
 *     _lambda_e57d722e9184594ecfa4b78f275cff33_::operator() @ 0x1805914B0 (_lambda_e57d722e9184594ecfa4b78f275cff33_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___::_ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_e57d722e9184594ecfa4b78f275cff33_::operator()();
  }
  return result;
}
