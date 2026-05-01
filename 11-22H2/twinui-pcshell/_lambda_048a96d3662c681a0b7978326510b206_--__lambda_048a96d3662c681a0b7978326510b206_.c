/*
 * XREFs of _lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_ @ 0x1801F7628
 * Callers:
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180175258 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
