/*
 * XREFs of ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x180042B5C
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180041090 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1800427B0 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180037178 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::WritePersistedEndpoint(
        ApplicationSpecificEndpointInfo *this,
        HKEY a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 cbData; // [rsp+40h] [rbp+8h] BYREF

  cbData = 0LL;
  v7 = StringCbLengthW(a4, 0x104uLL, &cbData);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = RegSetValueExW(a2, a3, 0, 1u, (const BYTE *)a4, cbData);
    if ( v10 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               848LL,
               (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
               (const char *)v10);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34C,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
