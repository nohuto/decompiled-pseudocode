/*
 * XREFs of _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$2 @ 0x1400360FB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ @ 0x14000DE08 (--1-$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateDevicePipeInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)(a2 + 208));
  }
  return result;
}
