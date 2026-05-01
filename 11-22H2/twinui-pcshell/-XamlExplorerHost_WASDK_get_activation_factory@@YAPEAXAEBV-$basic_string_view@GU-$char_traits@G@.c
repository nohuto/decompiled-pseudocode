/*
 * XREFs of ?XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B3A44
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B555C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18004A604 (--$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 */

__int64 __fastcall XamlExplorerHost_WASDK_get_activation_factory(_QWORD *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // rcx
  _WORD *v3; // rax
  const unsigned __int16 *v5; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_WORD *)*a1;
  v2 = a1[1];
  v3 = &v1[v2];
  if ( ((v2 * 2) & 0xFFFFFFFFFFFFFFFEuLL) != 0x86 )
    return 0LL;
  v5 = L"K";
  while ( v3 != v1 )
  {
    if ( *--v3 != *v5 )
      return 0LL;
    --v5;
  }
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>(&v6);
  return v6;
}
