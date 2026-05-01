/*
 * XREFs of ??1?$array_size_proxy@E@impl@winrt@@QEAA@XZ @ 0x1801C21C4
 * Callers:
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$82 @ 0x180264220 (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$82.c)
 *     _winrt::get_interfaces_::_1_::dtor$1 @ 0x1804F6CD8 (_winrt--get_interfaces_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::array_size_proxy<unsigned char>::~array_size_proxy<unsigned char>(unsigned int *a1)
{
  __int64 result; // rax

  result = a1[2];
  *(_DWORD *)(*(_QWORD *)a1 + 8LL) = result;
  return result;
}
