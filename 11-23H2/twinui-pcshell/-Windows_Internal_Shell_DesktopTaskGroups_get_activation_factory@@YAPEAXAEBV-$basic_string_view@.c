/*
 * XREFs of ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B55E0
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B555C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory(_QWORD *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // rcx
  _WORD *v3; // rax
  const unsigned __int16 *v5; // r8

  v1 = (_WORD *)*a1;
  v2 = a1[1];
  v3 = &v1[v2];
  if ( ((v2 * 2) & 0xFFFFFFFFFFFFFFFEuLL) != 0x9C )
    return 0LL;
  v5 = L"r";
  while ( v3 != v1 )
  {
    if ( *--v3 != *v5 )
      return 0LL;
    --v5;
  }
  return winrt_make_Windows_Internal_Shell_DesktopTaskGroups_DesktopTaskGroupsSwitchItemController();
}
