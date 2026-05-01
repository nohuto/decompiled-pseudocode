/*
 * XREFs of ??$_Assign_range@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0Uforward_iterator_tag@1@@Z @ 0x18042C33C
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x180437BB0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Win_ea_180437BB0.c)
 * Callees:
 *     ??$_Copy_unchecked@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0PEAV12@@Z @ 0x18042C414 (--$_Copy_unchecked@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAV-$Agi.c)
 *     ??$_Destroy_range@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAXPEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAV12@AEAV?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@0@@Z @ 0x18042C464 (--$_Destroy_range@V-$allocator@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experience.c)
 *     ??0?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18042D3B8 (--0-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@P.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAX_K@Z @ 0x18043A194 (-_Clear_and_reserve_geometric@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Ex.c)
 */

__int64 __fastcall std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Assign_range<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax

  v4 = (__int64)a3 - a2;
  v6 = *a1;
  v8 = v4 >> 3;
  v9 = (a1[1] - *a1) >> 5;
  if ( v8 <= v9 )
  {
    i = v6 + 32 * v8;
    std::_Copy_unchecked<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * *,Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *>(
      a2,
      a3);
    v13 = a1[1];
    v12 = i;
  }
  else
  {
    if ( v8 > (a1[2] - v6) >> 5 )
    {
      std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Clear_and_reserve_geometric(
        a1,
        v8);
      v9 = 0LL;
    }
    v10 = (_QWORD *)(a2 + 8 * v9);
    std::_Copy_unchecked<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * *,Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *>(
      a2,
      v10);
    for ( i = a1[1]; ; i += 32LL )
    {
      v12 = i;
      if ( v10 == a3 )
        break;
      Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
        i,
        *v10++);
    }
    v13 = i;
  }
  result = std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>(
             v12,
             v13);
  a1[1] = i;
  return result;
}
