/*
 * XREFs of ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003CF44
 * Callers:
 *     ?Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ @ 0x18003CE50 (-Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18003D050 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int *v8; // r14
  unsigned int *i; // rdi
  _DWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 CurrentProcessId; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+3Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a3 < 9 || a2 == 2 || a3 == 0x7FFF )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v8 = *(unsigned int **)(a1 + 64);
    for ( i = *(unsigned int **)(a1 + 56); i != v8; ++i )
    {
      v12 = 0LL;
      v10[0] = 32;
      v10[1] = 0x100000;
      CurrentProcessId = GetCurrentProcessId();
      v13 = a2;
      v14 = a3;
      GenerateMediaEvent(v10, *i);
    }
    if ( v7 )
      LeaveCriticalSection(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x304,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
