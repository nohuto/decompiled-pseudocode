/*
 * XREFs of ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x18026127C
 * Callers:
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803D4B3C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall TargetAppExtensionDetails::operator=(__int64 a1, __int64 a2)
{
  std::wstring::operator=(a1, a2);
  std::wstring::operator=(a1 + 32, a2 + 32);
  std::wstring::operator=(a1 + 64, a2 + 64);
  *(_BYTE *)(a1 + 96) = *(_BYTE *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  std::wstring::operator=(a1 + 104, a2 + 104);
  *(_BYTE *)(a1 + 136) = *(_BYTE *)(a2 + 136);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
  std::wstring::operator=(a1 + 144, a2 + 144);
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 180);
  return a1;
}
