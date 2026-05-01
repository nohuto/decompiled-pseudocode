/*
 * XREFs of ?Get@__abi_FTMWeakRefData@@QECAJXZ @ 0x180424F28
 * Callers:
 *     ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x180424AC4 (-CopyToOrDetach@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXml.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x180432434 (-CopyToOrDetach@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Pla.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x180441F4C (-CopyToOrDetach@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __abi_FTMWeakRefData::Get(__int64 a1)
{
  if ( *(_QWORD *)a1 )
    return *(unsigned int *)(*(_QWORD *)a1 + 12LL);
  else
    return 0xFFFFFFFFLL;
}
