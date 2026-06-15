/*
 * XREFs of _Microsoft::WRL::Details::Make_CBtAudioResourceManager__GUID_const_&__::_1_::dtor$0 @ 0x180113670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C69EC (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CBtAudioResourceManager__GUID_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
