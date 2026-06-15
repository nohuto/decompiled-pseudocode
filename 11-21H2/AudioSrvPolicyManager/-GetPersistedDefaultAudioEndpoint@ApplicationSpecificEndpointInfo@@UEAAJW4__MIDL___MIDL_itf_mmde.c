/*
 * XREFs of ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002AD28 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002B774 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003A96C (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpoint(
        ApplicationSpecificEndpointInfo *a1,
        unsigned int a2,
        signed int a3,
        char *a4)
{
  void *v8; // rbx
  char *v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  char *v13; // rdx
  bool v14; // di
  DWORD LastError; // edi
  int updated; // eax
  LPVOID v17; // [rsp+20h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]

  v8 = 0LL;
  v17 = 0LL;
  if ( a2 == 1 )
  {
    v9 = (char *)*((_QWORD *)a1 + a3 + 12);
    if ( !v9 )
      goto LABEL_22;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v9,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &v17,
      &pv);
    if ( pv )
      CoTaskMemFree(pv);
    v8 = v17;
    if ( !v17 )
    {
      v10 = 188LL;
LABEL_7:
      v11 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
      return v11;
    }
  }
  else
  {
    if ( a2 )
      goto LABEL_22;
    v13 = (char *)*((_QWORD *)a1 + a3 + 21);
    if ( !v13 )
      goto LABEL_22;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v13,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &v17,
      &pv);
    if ( pv )
      CoTaskMemFree(pv);
    v8 = v17;
    if ( !v17 )
    {
      v10 = 196LL;
      goto LABEL_7;
    }
  }
  pv = 0LL;
  v14 = (int)mmdDevGetMMDeviceFromInterfaceId(v8, &pv) >= 0;
  if ( pv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
  if ( !v14 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v8);
    SetLastError(LastError);
    v17 = 0LL;
    updated = ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId(a1, a2, a3, &v17);
    v11 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)updated);
      if ( v17 )
        CoTaskMemFree(v17);
      return v11;
    }
    v8 = v17;
  }
LABEL_22:
  *(_QWORD *)a4 = v8;
  return 0LL;
}
