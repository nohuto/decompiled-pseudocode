/*
 * XREFs of ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@@Z @ 0x1800933D8
 * Callers:
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18009330C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBI@Z @ 0x180719524 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@F.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180719620 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@S.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x1807196A4 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

int *__fastcall winrt::impl::check_hresult_allow_bounds(int *a1, int a2)
{
  if ( a2 != -2147483637 && a2 != -2147467259 && a2 != -2147024894 && a2 < 0 )
    winrt::throw_hresult((unsigned int)a2);
  *a1 = a2;
  return a1;
}
