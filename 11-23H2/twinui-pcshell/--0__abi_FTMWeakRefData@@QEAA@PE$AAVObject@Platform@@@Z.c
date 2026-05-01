/*
 * XREFs of ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z @ 0x180067DFC
 * Callers:
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180067CD4 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ??0?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x180762170 (--0-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z.c)
 *     ??0?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18077C72C (--0-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableS.c)
 *     ??0?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x18077C7EC (--0-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInt.c)
 *     ??0?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x18077C948 (--0-$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Window.c)
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x18077CA18 (--0-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 *     ??0VectorChangedEventArgs@Details@Collections@Platform@@QE$AAA@W4CollectionChange@2Foundation@Windows@@I@Z @ 0x18077CC20 (--0VectorChangedEventArgs@Details@Collections@Platform@@QE$AAA@W4CollectionChange@2Foundation@Wi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_FTMWeakRefData::__abi_FTMWeakRefData(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  return a1;
}
