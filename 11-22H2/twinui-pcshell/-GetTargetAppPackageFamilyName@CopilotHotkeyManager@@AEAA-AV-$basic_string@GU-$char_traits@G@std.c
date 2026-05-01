/*
 * XREFs of ?GetTargetAppPackageFamilyName@CopilotHotkeyManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802645D0
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall CopilotHotkeyManager::GetTargetAppPackageFamilyName(__int64 a1, _QWORD *a2)
{
  std::wstring::wstring(a2, a1 + 224);
  return a2;
}
