/*
 * XREFs of ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180043EC8
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180042520 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180043290 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180043C40 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015B50 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800243C0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::UpdateState(__int64 a1, int a2, int a3, const unsigned __int16 *a4)
{
  __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rax
  void **v10; // rdi
  __int64 v11; // rdx
  SIZE_T v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  void **v17; // rdi
  __int64 v18; // rdx
  SIZE_T v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v24 = v8;
  v9 = v6;
  if ( a3 != 1 )
  {
    v17 = (void **)(a1 + 168 + 8 * v6);
    if ( *v17 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)(a1 + 168 + 8 * v9),
        0LL);
    if ( a4 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v17,
        0LL);
      v20 = -1LL;
      do
        ++v20;
      while ( a4[v20] );
      v14 = _AllocStringWorker<CTCoAllocPolicy>(v19, v18, a4, v20, v22, (unsigned __int16 **)v17);
      v15 = v14;
      if ( v14 < 0 )
      {
        v16 = 504LL;
        goto LABEL_16;
      }
    }
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  v10 = (void **)(a1 + 96 + 8 * v6);
  if ( *v10 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)(a1 + 96 + 8 * v9),
      0LL);
  if ( !a4 )
    goto LABEL_17;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    v10,
    0LL);
  v13 = -1LL;
  do
    ++v13;
  while ( a4[v13] );
  v14 = _AllocStringWorker<CTCoAllocPolicy>(v12, v11, a4, v13, v22, (unsigned __int16 **)v10);
  v15 = v14;
  if ( v14 >= 0 )
    goto LABEL_17;
  v16 = 491LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)v14);
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v24);
  return v15;
}
