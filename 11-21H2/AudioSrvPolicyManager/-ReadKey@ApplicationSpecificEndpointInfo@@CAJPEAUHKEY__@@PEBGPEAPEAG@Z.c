/*
 * XREFs of ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18003CC2C
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003A96C (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003C4AC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

LSTATUS __fastcall ApplicationSpecificEndpointInfo::ReadKey(HKEY hkey, LPCWSTR lpValue, unsigned __int16 **a3)
{
  LSTATUS result; // eax
  SIZE_T v7; // rdi
  _WORD *v8; // rax
  void *pvData; // rbx
  _WORD *i; // rcx
  unsigned int ValueW; // eax
  int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  pcbData = 0;
  result = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, 0LL, &pcbData);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    pcbData += 2;
    v7 = pcbData;
    v8 = CoTaskMemAlloc(v7 * 2);
    pvData = v8;
    if ( v8 )
    {
      for ( i = &v8[v7]; v8 != i; ++v8 )
        *v8 = 0;
      ValueW = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, pvData, &pcbData);
      if ( ValueW )
      {
        v12 = wil::details::in1diag3::Return_Win32(
                retaddr,
                639LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)ValueW);
        CoTaskMemFree(pvData);
        return v12;
      }
      else
      {
        *a3 = (unsigned __int16 *)pvData;
        return 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
      return -2147024882;
    }
  }
  return result;
}
