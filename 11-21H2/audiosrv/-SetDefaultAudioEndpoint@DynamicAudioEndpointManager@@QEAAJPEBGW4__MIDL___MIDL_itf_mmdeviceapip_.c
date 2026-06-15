/*
 * XREFs of ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180133320
 * Callers:
 *     ?SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800EA580 (-SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180132540 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801329A0 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180134070 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicAudioEndpointManager::SetDefaultAudioEndpoint(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  DynamicAudioEndpointManager *v5; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  char *v10; // [rsp+38h] [rbp-40h]
  bool v11[16]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v12; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = (int)a3;
  v5 = g_DynamicAudioEndpointManager;
  *(_OWORD *)v11 = 0LL;
  v12 = 0;
  v9 = 0;
  if ( a3 <= 8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_DynamicAudioEndpointManager + 16));
    v10 = (char *)v5 + 16;
    v6 = CDefaultDeviceManager::SetDefaultEndpoint(v7, a2, (unsigned int)v3, &v9);
    if ( v6 >= 0 )
    {
      v11[9 * v9 + v3] = 1;
      DynamicAudioEndpointManager::OnRuleOperation((__int64)v5, a2, 1u, v11, 0);
    }
    if ( v5 != (DynamicAudioEndpointManager *)-16LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
    if ( v6 >= 0 )
      return (unsigned int)DynamicAudioEndpointManager::RefreshPublishedDefaults(v5, (bool (*const)[9])v11, 0);
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
  }
  return (unsigned int)v6;
}
