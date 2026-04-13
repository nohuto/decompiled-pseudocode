/*
 * XREFs of ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x18005B220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800241B4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800454A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18005B3C4 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys(
        ContentManagement::ContentManagementService *this,
        HSTRING *a2,
        HSTRING *a3,
        HSTRING *a4,
        unsigned __int8 *a5)
{
  CreativeFramework::LockScreenCreativeConfigHelpers *v8; // rcx
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  HSTRING_HEADER *v12; // rax
  HSTRING_HEADER *v13; // rax
  HSTRING_HEADER *v14; // rax
  bool *v16; // [rsp+28h] [rbp-58h]
  unsigned __int16 *v17; // [rsp+30h] [rbp-50h] BYREF
  const WCHAR *v18; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 *v19; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int16 *v20; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 v21[4]; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER v22; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  *(_QWORD *)v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  LOBYTE(v17) = 0;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v19,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v20,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)v21,
    0LL);
  v9 = CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(v8, v21, &v20, &v19, &v17, v16);
  v11 = v9;
  if ( v9 >= 0 )
  {
    if ( a2 )
    {
      v18 = *(const WCHAR **)v21;
      v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v18, v10);
      WindowsDuplicateString((HSTRING)v12[1].Reserved.Reserved1, a2);
    }
    if ( a3 )
    {
      v18 = v20;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v18, v10);
      WindowsDuplicateString((HSTRING)v13[1].Reserved.Reserved1, a3);
    }
    if ( a4 )
    {
      v18 = v19;
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v18, v10);
      WindowsDuplicateString((HSTRING)v14[1].Reserved.Reserved1, a4);
    }
    if ( a5 )
      *a5 = (unsigned __int8)v17;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x378,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v19);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v20);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)v21);
  return v11;
}
