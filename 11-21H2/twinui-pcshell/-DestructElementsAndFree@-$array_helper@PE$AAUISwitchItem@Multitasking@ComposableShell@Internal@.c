/*
 * XREFs of ?DestructElementsAndFree@?$array_helper@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$0A@@Details@Platform@@SAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180433504
 * Callers:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA@XZ @ 0x18042EA78 (--1-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::array_helper<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,0>::DestructElementsAndFree(
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
