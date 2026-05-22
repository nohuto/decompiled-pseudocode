/*
 * XREFs of _GamepadInterceptionHelper::Create_::_1_::dtor$0 @ 0x18006A8B7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A8F4 (--1-$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall GamepadInterceptionHelper::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<IContextualProcessorEventStreamEnded>::~ComPtr<IContextualProcessorEventStreamEnded>();
  }
  return result;
}
