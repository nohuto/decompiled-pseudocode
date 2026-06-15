/*
 * XREFs of wil::details::ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___::_ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___ @ 0x1800D85AC
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180043A3C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$8 @ 0x18007C3A4 (_BuildDeviceGraphForStream_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___::_ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_QWORD *)(result + 152) = 0LL;
  }
  return result;
}
