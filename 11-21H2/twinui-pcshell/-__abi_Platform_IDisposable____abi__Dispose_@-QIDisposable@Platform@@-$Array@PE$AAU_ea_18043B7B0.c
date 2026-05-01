/*
 * XREFs of ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJXZ @ 0x18043B7B0
 * Callers:
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAJXZ @ 0x180201000 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItem@M.c)
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCI@E$AAAJXZ @ 0x180201020 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@PE$AAU_ea_180201020.c)
 * Callees:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA@XZ @ 0x18042EA78 (--1-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 */

__int64 __fastcall ___abi_Platform_IDisposable____abi__Dispose___QIDisposable_Platform____Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAJXZ(
        __int64 a1)
{
  __int64 v1; // rcx

  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    v1 = a1 + 32;
    if ( v1 )
    {
      if ( !*(_BYTE *)(v1 + 72) )
      {
        try
        {
          *(_BYTE *)(v1 + 72) = 1;
          Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(v1);
        }
        catch ( ... )
        {
          __abi_translateCurrentException();
        }
      }
    }
  }
  return 0LL;
}
