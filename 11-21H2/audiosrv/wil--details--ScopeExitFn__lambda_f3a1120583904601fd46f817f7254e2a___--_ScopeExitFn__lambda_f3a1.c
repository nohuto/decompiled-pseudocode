/*
 * XREFs of wil::details::ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___::_ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___ @ 0x1800FE438
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$2 @ 0x18006FBA0 (_BuildDeviceGraphForStream_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___::_ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
