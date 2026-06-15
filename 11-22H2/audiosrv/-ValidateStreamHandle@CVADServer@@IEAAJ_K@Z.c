/*
 * XREFs of ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180012FE0 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180039B90 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x18011E000 (-GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z.c)
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x18011E240 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x18011F0C0 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x18011FC00 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 *     ?SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z @ 0x18011FEC0 (-SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z.c)
 *     ?SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z @ 0x180120070 (-SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z.c)
 *     ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x180120220 (-SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x180120390 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::ValidateStreamHandle(CVADServer *this, __int64 a2)
{
  __int64 v2; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 21);
  if ( *(_BYTE *)(v2 + 520) )
    return 2289827960LL;
  if ( a2 == *(_QWORD *)(v2 + 48) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x124F,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL,
    v4);
  return 2147942487LL;
}
