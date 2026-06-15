/*
 * XREFs of ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180042580
 * Callers:
 *     ??$MakeAndInitialize@VApplicationSpecificEndpointInfo@@UIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Z @ 0x180023C6C (--$MakeAndInitialize@VApplicationSpecificEndpointInfo@@UIApplicationSpecificEndpointInfo@@AEAPEA.c)
 * Callees:
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x18000BD40 (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015960 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800241D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180041E00 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::RuntimeClassInitialize(void **this, struct IAudioProcess *a2)
{
  unsigned __int16 **v4; // rdi
  const unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  SIZE_T v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  const unsigned __int16 *ApplicationName; // rax
  __int64 v14; // rdx
  SIZE_T v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned __int16 **)(this + 11);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 11,
    0LL);
  v5 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 56LL))(a2);
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( v5[v9] );
  v10 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, v5, v9, v19, v4);
  v11 = v10;
  if ( v10 >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      this + 10,
      0LL);
    ApplicationName = ApplicationSpecificEndpointInfo::GetApplicationName(a2);
    do
      ++v8;
    while ( ApplicationName[v8] );
    v16 = _AllocStringWorker<CTCoAllocPolicy>(v15, v14, ApplicationName, v8, v20, (unsigned __int16 **)this + 10);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = RpcImpersonateClient(0LL);
      if ( v18 )
      {
        return wil::details::in1diag3::Return_Win32(
                 retaddr,
                 32LL,
                 (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                 (const char *)v18);
      }
      else
      {
        ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints((unsigned __int16 **)this);
        RpcRevertToSelf();
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
