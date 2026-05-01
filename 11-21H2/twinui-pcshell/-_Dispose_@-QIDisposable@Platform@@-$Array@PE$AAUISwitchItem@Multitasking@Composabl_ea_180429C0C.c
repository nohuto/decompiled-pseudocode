/*
 * XREFs of ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAXXZ @ 0x180429C0C
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAXXZ @ 0x1801FF1E0 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Intern.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCI@E$AAAXXZ @ 0x1801FF200 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composabl_ea_1801FF200.c)
 * Callees:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA@XZ @ 0x18042EA78 (--1-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 */

__int64 __fastcall __Dispose___QIDisposable_Platform____Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAXXZ(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    v1 = a1 + 32;
    if ( v1 )
    {
      if ( !*(_BYTE *)(v1 + 72) )
      {
        *(_BYTE *)(v1 + 72) = 1;
        return Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>();
      }
    }
  }
  return result;
}
