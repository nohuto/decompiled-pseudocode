/*
 * XREFs of ?EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z @ 0x180261C10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18027154C (-IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

__int64 __fastcall CopilotHotkeyManager::EnumWindowsCallback(HWND a1, __int64 a2)
{
  unsigned int PropW; // esi
  _QWORD *v5; // rax
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  PropW = (unsigned int)GetPropW(a1, L"CopilotKeyProviderFastPathMessage");
  if ( !PropW )
    return 1LL;
  v5 = std::wstring::wstring(v7, a2);
  if ( !(unsigned __int8)CopilotHotkeyManager::IsTargetAppWindow(a1, v5) )
    return 1LL;
  *(_QWORD *)(a2 + 40) = a1;
  result = 0LL;
  *(_DWORD *)(a2 + 32) = PropW;
  return result;
}
