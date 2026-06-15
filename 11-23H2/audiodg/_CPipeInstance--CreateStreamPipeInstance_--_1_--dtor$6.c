/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$6 @ 0x140034CFE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ @ 0x14000DE08 (--1-$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)(a2 + 120));
  }
  return result;
}
