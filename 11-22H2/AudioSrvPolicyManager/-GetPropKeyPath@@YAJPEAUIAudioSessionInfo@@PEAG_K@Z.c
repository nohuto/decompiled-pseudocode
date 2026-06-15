/*
 * XREFs of ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003E08C
 * Callers:
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x18003F72C (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F700 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015B50 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180016038 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x1800389C0 (-TsSessionGetUserSid@@YAJKPEAPEAG@Z.c)
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x18003E1FC (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180040084 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPropKeyPath(struct IAudioSessionInfo *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  DWORD v5; // eax
  DWORD v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int ThreadUserStringSid; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = a3;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 128LL))(a1) )
  {
LABEL_8:
    v13 = 0LL;
    ThreadUserStringSid = GetThreadUserStringSid(&v13);
    v8 = ThreadUserStringSid;
    if ( ThreadUserStringSid >= 0 )
    {
      ThreadUserStringSid = StringCbPrintfW(
                              a2,
                              0x208uLL,
                              L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry",
                              v13);
      v8 = ThreadUserStringSid;
      if ( ThreadUserStringSid >= 0 )
      {
        v8 = 0;
        goto LABEL_14;
      }
      v10 = 198LL;
    }
    else
    {
      v10 = 196LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)ThreadUserStringSid);
LABEL_14:
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v13);
    return v8;
  }
  v5 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 136LL))(a1);
  v13 = 0LL;
  v6 = v5;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v13,
    0LL);
  TsSessionGetUserSid(v6, &v13);
  if ( !v13 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
    goto LABEL_8;
  }
  v7 = StringCbPrintfW(a2, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry");
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v7);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
  return v8;
}
