/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$7 @ 0x1400385CB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400172FC (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 72) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 72) &= ~2u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 96));
  }
  return result;
}
