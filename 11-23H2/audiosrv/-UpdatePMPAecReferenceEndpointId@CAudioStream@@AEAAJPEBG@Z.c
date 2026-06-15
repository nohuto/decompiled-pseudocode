/*
 * XREFs of ?UpdatePMPAecReferenceEndpointId@CAudioStream@@AEAAJPEBG@Z @ 0x1800EE2D4
 * Callers:
 *     ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800ED8FC (-SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::UpdatePMPAecReferenceEndpointId(void **this, const unsigned __int16 *a2)
{
  unsigned __int16 **v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // edi
  void **v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (unsigned __int16 **)(this + 77);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 77,
    0LL);
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  v9 = _AllocStringWorker<CTCoAllocPolicy>(v6, v5, a2, v8, v17, v2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = (void **)((char *)this[78] + 80);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v12,
      0LL);
    do
      ++v7;
    while ( a2[v7] );
    v15 = _AllocStringWorker<CTCoAllocPolicy>(v14, v13, a2, v7, v18, (unsigned __int16 **)v12);
    v16 = v15;
    if ( v15 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x866,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x864,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
