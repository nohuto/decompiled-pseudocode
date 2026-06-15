/*
 * XREFs of wil::details::lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___::_lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___ @ 0x14005AA80
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B570 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___::_lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(_QWORD *)(**(_QWORD **)a1 + 64LL);
    return ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v2);
  }
  return result;
}
