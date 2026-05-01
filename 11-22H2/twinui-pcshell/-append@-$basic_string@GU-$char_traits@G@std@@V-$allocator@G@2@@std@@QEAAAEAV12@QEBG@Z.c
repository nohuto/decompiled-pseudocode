/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1802CED30
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, _WORD *a2)
{
  unsigned __int64 v2; // r8

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  return std::wstring::append(a1, a2, v2);
}
