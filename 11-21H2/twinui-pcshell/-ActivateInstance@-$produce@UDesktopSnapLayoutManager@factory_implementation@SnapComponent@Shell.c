/*
 * XREFs of ?ActivateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805B3A00
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_not_implemented@winrt@@QEAA@XZ @ 0x180421B78 (--0hresult_not_implemented@winrt@@QEAA@XZ.c)
 */

void __fastcall __noreturn winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v2; // rdx
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  winrt::hresult_not_implemented::hresult_not_implemented((winrt::hresult_not_implemented *)pExceptionObject);
  try
  {
    throw (winrt::hresult_not_implemented *)pExceptionObject;
  }
  catch ( ... )
  {
    v2 = &v3;
    *((_DWORD *)v2 + 20) = *winrt::to_hresult((_DWORD *)v2 + 20);
  }
}
