/*
 * XREFs of ?DestructElementsAndFree@?$array_helper@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$0A@@Details@Platform@@SAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x180442A3C
 * Callers:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x180440F70 (--1-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::array_helper<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,0>::DestructElementsAndFree(
        _QWORD *pv,
        unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = pv;
    v4 = a2;
    do
    {
      if ( *v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  CoTaskMemFree_0(pv);
}
