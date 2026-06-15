/*
 * XREFs of ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x18003D6B8
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003A96C (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18003D050 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::WritePersistedEndpoint(
        ApplicationSpecificEndpointInfo *this,
        HKEY a2,
        const unsigned __int16 *a3,
        const BYTE *lpData)
{
  const BYTE *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !lpData )
  {
    v6 = -2147024809;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x347,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)v6);
    return v6;
  }
  v4 = lpData;
  v5 = 130LL;
  do
  {
    if ( !*(_WORD *)v4 )
      break;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = v5 == 0 ? 0x80070057 : 0;
  if ( !v5 )
    goto LABEL_10;
  v7 = RegSetValueExW(a2, a3, 0, 1u, lpData, v5 != 0 ? 2 * (130 - v5) : 0);
  if ( v7 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             843LL,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
             (const char *)v7);
  else
    return 0LL;
}
