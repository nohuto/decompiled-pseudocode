/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$4 @ 0x140034AFD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ @ 0x14000DE08 (--1-$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 312) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 312) &= ~1u;
    return ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)(a2 + 120));
  }
  return result;
}
