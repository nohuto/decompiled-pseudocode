/*
 * XREFs of ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B555C
 * Callers:
 *     ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1800B547C (-WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B55E0 (-Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV-$basic_string_view@.c)
 *     ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B5728 (-XamlExplorerHost_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 *     ?winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager@@YAPEAXXZ @ 0x1806868E4 (-winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager@@YAPEAXXZ.c)
 */

void *__fastcall winrt_get_activation_factory(_QWORD *a1)
{
  _WORD *v2; // rcx
  _WORD *v3; // rax
  const unsigned __int16 *v4; // r8
  void *result; // rax

  v2 = (_WORD *)*a1;
  v3 = &v2[a1[1]];
  if ( 2LL * a1[1] != 122 )
    goto LABEL_7;
  v4 = L"r";
  while ( v3 != v2 )
  {
    if ( *--v3 != *v4 )
      goto LABEL_7;
    --v4;
  }
  result = winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager();
  if ( !result )
  {
LABEL_7:
    result = (void *)Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory(a1);
    if ( !result )
    {
      result = (void *)XamlExplorerHost_get_activation_factory(a1);
      if ( !result )
        return (void *)XamlExplorerHost_WASDK_get_activation_factory(a1);
    }
  }
  return result;
}
