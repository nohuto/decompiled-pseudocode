/*
 * XREFs of ?SetCaptureEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z @ 0x180117734
 * Callers:
 *     ?GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GUID@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18011597C (-GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GU.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBtAudioResourceManager::SetCaptureEndpoint(
        CBtAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  void **v2; // rsi
  const WCHAR *v3; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  int v8; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (void **)((char *)this + 48);
  v3 = (const WCHAR *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    if ( CompareStringOrdinal(v3, -1, a2, -1, 1) == 2 )
      return 0LL;
    v8 = -2147418113;
    v10 = 238LL;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v2,
      0LL);
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = v6 + 1;
    *v2 = 0LL;
    if ( v6 + 1 >= v6 && is_mul_ok(v7, 2uLL) )
    {
      v8 = CTCoAllocPolicy::Alloc(v5, (v7 * (unsigned __int128)2uLL) >> 64, 2 * v7, v2);
      if ( v8 >= 0 )
      {
        StringCchCopyNExW((char *)*v2, v6 + 1, a2, v6);
        return 0LL;
      }
    }
    else
    {
      v8 = -2147024362;
    }
    v10 = 234LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
