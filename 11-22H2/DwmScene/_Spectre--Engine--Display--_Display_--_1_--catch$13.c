/*
 * XREFs of _Spectre::Engine::Display::_Display_::_1_::catch$13 @ 0x1800E7754
 * Callers:
 *     <none>
 * Callees:
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::Display::_Display_::_1_::catch_13(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Display,
    3,
    "Exception in Display Destructor, message=%s",
    v2);
  return 0LL;
}
