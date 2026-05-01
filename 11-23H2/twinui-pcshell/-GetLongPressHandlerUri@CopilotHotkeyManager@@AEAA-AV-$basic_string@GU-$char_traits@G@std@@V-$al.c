/*
 * XREFs of ?GetLongPressHandlerUri@CopilotHotkeyManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1802637A0
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall CopilotHotkeyManager::GetLongPressHandlerUri(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rdx

  v4 = a1 + 296;
  if ( !a3 )
    v4 = a1 + 336;
  std::wstring::wstring(a2, v4);
  return a2;
}
