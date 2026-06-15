/*
 * XREFs of ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18003D564
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003A96C (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003C4AC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18003D050 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationSpecificEndpointInfo::UpdateState(
        __int64 a1,
        __int64 a2,
        int a3,
        const unsigned __int16 *a4)
{
  unsigned __int16 **v5; // r14
  unsigned __int16 *v6; // rbp
  DWORD LastError; // ebx
  unsigned __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  unsigned __int16 **v12; // r14
  unsigned __int16 *v13; // rbp
  DWORD v14; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 == 1 )
  {
    v5 = (unsigned __int16 **)(a1 + 96 + 8LL * (int)a2);
    v6 = *v5;
    if ( *v5 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v6);
      SetLastError(LastError);
      *v5 = 0LL;
    }
    if ( a4 )
    {
      *v5 = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( a4[v8] );
      v9 = _AllocStringWorker<CTCoAllocPolicy>(a1, a2, a4, v8, v16, v5);
      if ( v9 < 0 )
      {
        v10 = 486LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
  }
  else
  {
    v12 = (unsigned __int16 **)(a1 + 168 + 8LL * (int)a2);
    v13 = *v12;
    if ( *v12 )
    {
      v14 = GetLastError();
      CoTaskMemFree(v13);
      SetLastError(v14);
      *v12 = 0LL;
    }
    if ( a4 )
    {
      *v12 = 0LL;
      v15 = -1LL;
      do
        ++v15;
      while ( a4[v15] );
      v9 = _AllocStringWorker<CTCoAllocPolicy>(a1, a2, a4, v15, v16, v12);
      if ( v9 < 0 )
      {
        v10 = 499LL;
        goto LABEL_9;
      }
    }
  }
  return 0LL;
}
