/*
 * XREFs of _Spectre::Engine::ViewerEngine::ApplySceneStandardContent_::_1_::dtor$43 @ 0x1800E80A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x18001249C (--1-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall Spectre::Engine::ViewerEngine::ApplySceneStandardContent_::_1_::dtor_43(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return std::wstring::~wstring();
  }
  return result;
}
