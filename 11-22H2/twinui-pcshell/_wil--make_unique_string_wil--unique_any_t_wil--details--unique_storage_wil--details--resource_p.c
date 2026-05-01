/*
 * XREFs of _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_HSTRING_____long_(__cdecl_)(HSTRING____)_&WindowsDeleteString_wistd::integral_constant_unsigned___int64_0__HSTRING_____HSTRING_____0_std::nullptr_t________::_1_::dtor$0 @ 0x1802124AA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801626F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 */

HRESULT __fastcall wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_HSTRING_____long____cdecl___HSTRING_______WindowsDeleteString_wistd::integral_constant_unsigned___int64_0__HSTRING_____HSTRING_____0_std::nullptr_t________::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  HRESULT result; // eax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(*(HSTRING **)(a2 + 64));
  }
  return result;
}
