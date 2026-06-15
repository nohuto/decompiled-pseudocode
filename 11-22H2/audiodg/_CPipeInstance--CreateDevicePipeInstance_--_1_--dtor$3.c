/*
 * XREFs of _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$3 @ 0x14003616B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ @ 0x14000DE08 (--1-$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateDevicePipeInstance_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    return ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)(a2 + 264));
  }
  return result;
}
