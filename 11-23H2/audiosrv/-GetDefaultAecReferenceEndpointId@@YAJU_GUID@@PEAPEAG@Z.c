/*
 * XREFs of ?GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z @ 0x1800DB46C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CFA0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800ED8FC (-SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

__int64 __fastcall GetDefaultAecReferenceEndpointId(struct _GUID *a1, unsigned __int16 **a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  rsize_t v6; // rdi
  char *v7; // rax
  char *v8; // rbx
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // rax
  rsize_t v12; // rdi
  char *v13; // rax
  char *v14; // rbx
  void *v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v16[0] = 0LL;
  v3 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
    v3 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
  v4 = 0x7FFFFFFFLL;
  if ( v3 )
  {
    v11 = L"ACTIVE_OR_DEFAULT_CONSOLE";
    do
    {
      if ( !*v11 )
        break;
      ++v11;
      --v4;
    }
    while ( v4 );
    v12 = 2 * (v11 - L"ACTIVE_OR_DEFAULT_CONSOLE");
    v13 = (char *)CoTaskMemAlloc(v12 + 2);
    v14 = v13;
    if ( v13 )
    {
      memcpy_s(v13, v12 + 2, L"ACTIVE_OR_DEFAULT_CONSOLE", v12);
      *(_WORD *)&v14[v12] = 0;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v16,
      v14);
    v9 = (unsigned __int16 *)v16[0];
    if ( !v16[0] )
    {
      v10 = 842LL;
      goto LABEL_19;
    }
LABEL_17:
    *a2 = v9;
    return 0LL;
  }
  v5 = L"ACTIVE_OR_DEFAULT_COMMUNICATIONS";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = 2 * (v5 - L"ACTIVE_OR_DEFAULT_COMMUNICATIONS");
  v7 = (char *)CoTaskMemAlloc(v6 + 2);
  v8 = v7;
  if ( v7 )
  {
    memcpy_s(v7, v6 + 2, L"ACTIVE_OR_DEFAULT_COMMUNICATIONS", v6);
    *(_WORD *)&v8[v6] = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    v16,
    v8);
  v9 = (unsigned __int16 *)v16[0];
  if ( v16[0] )
    goto LABEL_17;
  v10 = 836LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8007000ELL);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v16);
  return 2147942414LL;
}
