/*
 * XREFs of ??$?0PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$AutoValue@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x18004C8AC
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUISwitchItem@Multitasking@ComposableShell@25@_N@Z @ 0x18004C754 (-InsertAtInternal@-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$Def.c)
 *     ?SetAt@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUISwitchItem@Multitasking@ComposableShell@25@@Z @ 0x180791620 (-SetAt@-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 * Callees:
 *     ??$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x18004C92C (--$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTrait.c)
 */

_QWORD *__fastcall XWinRT::AutoValue<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::AutoValue<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
         a1,
         *a2);
  *a3 = v5;
  if ( v5 < 0 )
    *a1 = 0LL;
  return a1;
}
