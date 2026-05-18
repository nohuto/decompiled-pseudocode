/*
 * XREFs of _Spectre::GetHardwareVersion::Engine::GetHardwareVersion_::_1_::dtor$12 @ 0x1800E5C83
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x18001249C (--1-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall Spectre::GetHardwareVersion::Engine::GetHardwareVersion_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    return std::wstring::~wstring();
  }
  return result;
}
