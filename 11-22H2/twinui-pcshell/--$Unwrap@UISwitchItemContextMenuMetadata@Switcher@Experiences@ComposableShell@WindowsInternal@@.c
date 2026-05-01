/*
 * XREFs of ??$Unwrap@UISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18077BD78
 * Callers:
 *     ??$VectorGetMany@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18077BEC4 (--$VectorGetMany@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     ??$VectorIndexOf@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18077BFA4 (--$VectorIndexOf@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     ?GetAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x18077F4D4 (-GetAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Compos_ea_18077F4D4.c)
 *     ?GetAt@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x18077F570 (-GetAt@-Q-$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell.c)
 *     ?get@?QCurrent@?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@1?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@3Platform@@UE$AAAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x180785AC0 (-get@-QCurrent@-$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableS.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Get@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEBAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18077F0A4 (-Get@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Platform::Collections::Details::Unwrap<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata>()
{
  __int64 v0; // rbx
  __int64 v1; // rdi

  v0 = Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Get();
  v1 = __abi_winrt_ptr_ctor(v0);
  if ( v0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  return v1;
}
