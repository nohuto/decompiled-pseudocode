/*
 * XREFs of ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1806374C0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_not_implemented@winrt@@QEAA@XZ @ 0x1804F539C (--0hresult_not_implemented@winrt@@QEAA@XZ.c)
 */

void __noreturn winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::IsSupported()
{
  __int64 *v0; // rdx
  __int64 v1; // [rsp+0h] [rbp-48h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  winrt::hresult_not_implemented::hresult_not_implemented((winrt::hresult_not_implemented *)pExceptionObject);
  try
  {
    throw (winrt::hresult_not_implemented *)pExceptionObject;
  }
  catch ( ... )
  {
    v0 = &v1;
    *((_DWORD *)v0 + 20) = *winrt::to_hresult((_DWORD *)v0 + 20);
  }
}
