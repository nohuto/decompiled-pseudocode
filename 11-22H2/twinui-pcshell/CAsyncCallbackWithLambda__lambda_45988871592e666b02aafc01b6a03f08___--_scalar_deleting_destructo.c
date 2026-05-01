/*
 * XREFs of CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::_scalar_deleting_destructor_ @ 0x1806801E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::_scalar_deleting_destructor_(
        char *a1,
        char a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  v4 = (winrt::Windows::Foundation::IUnknown *)(a1 + 48);
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
