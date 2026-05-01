/*
 * XREFs of ??_G?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAAPEAXI@Z @ 0x1806FD7B8
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@WDA@EAAPEAXI@Z @ 0x1802ACC90 (--_E-$heap_implements@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ @ 0x1806FD638 (--1-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ.c)
 */

void *__fastcall wil::details::module_count_wrapper<CopilotHotkeyManager>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  wil::details::module_count_wrapper<CopilotHotkeyManager>::~module_count_wrapper<CopilotHotkeyManager>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
