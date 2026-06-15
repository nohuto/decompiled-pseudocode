/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$7 @ 0x140034D2B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ @ 0x14000DE08 (--1-$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~2u;
    return ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)(a2 + 96));
  }
  return result;
}
