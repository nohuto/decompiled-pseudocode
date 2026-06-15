/*
 * XREFs of ?Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ @ 0x1800424D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015960 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800426BC (-SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdev.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::Reset(ApplicationSpecificEndpointInfo *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  char v3; // di
  __int64 v4; // r14
  _QWORD *v5; // rbx
  void **v6; // rbp
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = v1;
  v4 = 9LL;
  v5 = (_QWORD *)((char *)this + 168);
  v6 = (void **)((char *)this + 168);
  do
  {
    if ( *(v5 - 9) || *v5 )
      v3 = 1;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v6 - 9,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v6++,
      0LL);
    ++v5;
    --v4;
  }
  while ( v4 );
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  if ( v3 )
    ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification(this, 2LL, 0x7FFFLL);
  return 0LL;
}
