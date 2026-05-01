/*
 * XREFs of ?QueryInterface@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1803B5B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>::QueryInterface(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))((a1 - 24) & -(__int64)(a1 != 0));
  return (**v1)(v1);
}
