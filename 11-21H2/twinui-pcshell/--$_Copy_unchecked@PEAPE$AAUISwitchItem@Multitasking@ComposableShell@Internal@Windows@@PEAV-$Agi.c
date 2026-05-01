/*
 * XREFs of ??$_Copy_unchecked@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0PEAV12@@Z @ 0x18042C414
 * Callers:
 *     ??$_Assign_range@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0Uforward_iterator_tag@1@@Z @ 0x18042C33C (--$_Assign_range@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V.c)
 * Callees:
 *     ??4?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAAEAV01@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18042F1C0 (--4-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAAE.c)
 */

__int64 __fastcall std::_Copy_unchecked<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * *,Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *i; // rbx

  for ( i = a1; i != a2; ++i )
  {
    Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::operator=(a3, *i);
    a3 += 32LL;
  }
  return a3;
}
