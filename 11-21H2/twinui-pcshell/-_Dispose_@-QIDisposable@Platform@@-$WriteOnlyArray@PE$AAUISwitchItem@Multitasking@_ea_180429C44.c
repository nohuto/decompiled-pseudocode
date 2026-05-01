/*
 * XREFs of ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAXXZ @ 0x180429C44
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@W7E$AAAXXZ @ 0x1801FF220 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShe.c)
 * Callees:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA@XZ @ 0x18042EA78 (--1-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 */

__int64 __fastcall __Dispose___QIDisposable_Platform____WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAXXZ(
        __int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 72) )
  {
    *(_BYTE *)(a1 + 72) = 1;
    return Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>();
  }
  return result;
}
