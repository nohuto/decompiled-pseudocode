/*
 * XREFs of ??1?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA@XZ @ 0x18042EA78
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAXXZ @ 0x180429C0C (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composabl_ea_180429C0C.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAXXZ @ 0x180429C44 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@_ea_180429C44.c)
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJXZ @ 0x18043B7B0 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@PE$AAU_ea_18043B7B0.c)
 * Callees:
 *     ?DestructElementsAndFree@?$array_helper@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$0A@@Details@Platform@@SAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180433504 (-DestructElementsAndFree@-$array_helper@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@.c)
 */

__int64 __fastcall Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
        __int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 44) )
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
      result = Platform::Details::array_helper<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,0>::DestructElementsAndFree(v2);
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 44) = 0;
  return result;
}
