/*
 * XREFs of ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800F0928
 * Callers:
 *     ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x1800EED00 (-GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z.c)
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x1800EEEE0 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800EF950 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 *     ?SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z @ 0x1800F02E0 (-SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z.c)
 *     ?SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z @ 0x1800F0440 (-SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z.c)
 *     ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x1800F05A0 (-SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800F06D0 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::ValidateStreamHandle(CVADServer *this, __int64 a2)
{
  __int64 v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 24);
  if ( *(_BYTE *)(v2 + 496) )
    return 2289827960LL;
  if ( a2 == *(_QWORD *)(v2 + 48) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12A5,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
