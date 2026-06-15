/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180029F30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x180029C38 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z @ 0x180037A64 (-IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall CStreamClassPolicyManager::IsStreamCategoryDucked(
        CStreamClassPolicyManager *this,
        DWORD a2,
        unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int a6)
{
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  BOOL v10; // esi
  LPCRITICAL_SECTION v11; // rbx
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+20h] [rbp-18h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  lpCriticalSection[1] = v9;
  v10 = 1;
  if ( (int)TsSessionFromSessionId(a2, 1, (struct TSSession **)lpCriticalSection) < 0 )
  {
    if ( v9 )
      LeaveCriticalSection(v9);
    return 0;
  }
  else
  {
    v11 = lpCriticalSection[0];
    CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
      (CStreamClassPolicyGainsWrapper *)&lpCriticalSection[0][1].SpinCount,
      a3,
      (struct CStreamClassPolicyGains **)lpCriticalSection);
    if ( !(unsigned int)CStreamClassPolicyGains::IsStreamCategoryDucked(lpCriticalSection[0], a4, a6) )
      v10 = CStreamClassPolicyGains::IsStreamCategoryDucked((LPCRITICAL_SECTION)((char *)v11 + 136), a4, a6) != 0;
    if ( v9 )
      LeaveCriticalSection(v9);
  }
  return v10;
}
