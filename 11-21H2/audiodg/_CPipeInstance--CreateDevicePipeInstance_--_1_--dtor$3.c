/*
 * XREFs of _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$3 @ 0x140037054
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400172FC (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateDevicePipeInstance_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 72) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 72) &= ~2u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 192));
  }
  return result;
}
