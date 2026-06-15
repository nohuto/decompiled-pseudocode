/*
 * XREFs of wil::details::ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___::_ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___ @ 0x1800FE40C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall wil::details::ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___::_ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___(
        __int64 a1)
{
  volatile __int32 *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(volatile __int32 **)a1;
    if ( **(_BYTE **)a1 )
    {
      result = *(volatile __int32 **)(**(_QWORD **)(a1 + 8) + 96LL);
      _InterlockedExchange(result + 69, 0);
    }
  }
  return result;
}
