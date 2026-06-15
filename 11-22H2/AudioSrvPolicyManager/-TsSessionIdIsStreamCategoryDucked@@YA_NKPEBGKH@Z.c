/*
 * XREFs of ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x1800394B8
 * Callers:
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180032670 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x1800091E0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E250 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001361C (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z @ 0x180040544 (-IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TsSessionIdIsStreamCategoryDucked(__int64 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  DWORD v7; // ebx
  int v8; // eax
  char v9; // bl
  CStreamClassPolicyGains *v10; // rdi
  CStreamClassPolicyGains *v12; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13[2]; // [rsp+28h] [rbp-10h] BYREF

  v7 = a1;
  CApplicationManager::Lock(a1, v13);
  v8 = TsSessionFromSessionId(v7, 1, &v12);
  v9 = 0;
  if ( v8 >= 0 )
  {
    v10 = v12;
    CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
      (CStreamClassPolicyGains *)((char *)v12 + 72),
      a2,
      &v12);
    if ( (unsigned int)CStreamClassPolicyGains::IsStreamCategoryDucked(v12, a3, a4)
      || (unsigned int)CStreamClassPolicyGains::IsStreamCategoryDucked(
                         (CStreamClassPolicyGains *)((char *)v10 + 136),
                         a3,
                         a4) )
    {
      v9 = 1;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v13);
  return v9;
}
