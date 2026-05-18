/*
 * XREFs of _Spectre::Utils::ConfigurationValue::GetKeys_::_1_::dtor$0 @ 0x1800F2093
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x18001F11C (--1-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$bas.c)
 */

__int64 __fastcall Spectre::Utils::ConfigurationValue::GetKeys_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<std::wstring>::~vector<std::wstring>();
  }
  return result;
}
