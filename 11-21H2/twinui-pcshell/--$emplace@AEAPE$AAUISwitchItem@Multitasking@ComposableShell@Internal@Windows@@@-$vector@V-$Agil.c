/*
 * XREFs of ??$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18042CC3C
 * Callers:
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x1804352C4 (-InsertAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windo_ea_1804352C4.c)
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAAAEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18042C4F0 (--$_Emplace_back_with_unused_capacity@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal.c)
 *     ??$_Emplace_reallocate@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAAPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAV23@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18042C520 (--$_Emplace_reallocate@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$ve.c)
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@$$QEAV01@@Z @ 0x18042D384 (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??0?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18042D3B8 (--0-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@P.c)
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x18042E88C (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@V01@@Z @ 0x18042F1F8 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 */

_QWORD *__fastcall std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::emplace<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v14[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-48h]
  _BYTE v16[40]; // [rsp+48h] [rbp-40h] BYREF

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    *a2 = std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Emplace_reallocate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * &>(
            a1,
            a3,
            a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Emplace_back_with_unused_capacity<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * &>(
        (__int64)a1,
        a4);
    }
    else
    {
      v8 = *a4;
      v15 = a1;
      Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
        v16,
        v8);
      v9 = v4 - 32;
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
        v4,
        v4 - 32);
      a1[1] += 32LL;
      while ( v9 != a3 )
      {
        v10 = v9;
        v9 -= 32LL;
        v11 = Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
                v14,
                v9);
        Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::operator=(
          v10,
          v11);
      }
      v12 = Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
              v14,
              v16);
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::operator=(
        a3,
        v12);
      Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(v16);
    }
    *a2 = a3;
  }
  return a2;
}
