/*
 * XREFs of ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x180061120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180023DEC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180061304 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys(
        ContentManagement::ContentManagementService *this,
        HSTRING *a2,
        HSTRING *a3,
        HSTRING *a4,
        unsigned __int8 *a5)
{
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // edi
  void *v12; // rsi
  HSTRING_HEADER *v13; // rax
  unsigned __int16 *v14; // rdi
  HSTRING_HEADER *v15; // rax
  void *v16; // rbx
  HSTRING_HEADER *v17; // rax
  bool *v18; // [rsp+28h] [rbp-58h]
  unsigned __int16 *v19; // [rsp+30h] [rbp-50h] BYREF
  const WCHAR *v20; // [rsp+38h] [rbp-48h] BYREF
  LPVOID v21; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int16 *v22; // [rsp+48h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER v24; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  LOBYTE(v19) = 0;
  pv = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v8 = CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
         this,
         (const unsigned __int16 *)&v21,
         &v22,
         (unsigned __int16 **)&pv,
         &v19,
         v18);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v12 = v21;
    if ( a2 )
    {
      v20 = (const WCHAR *)v21;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v20, v9);
      WindowsDuplicateString((HSTRING)v13[1].Reserved.Reserved1, a2);
    }
    v14 = v22;
    if ( a3 )
    {
      v20 = v22;
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v20, v9);
      WindowsDuplicateString((HSTRING)v15[1].Reserved.Reserved1, a3);
    }
    v16 = pv;
    if ( a4 )
    {
      v20 = (const WCHAR *)pv;
      v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v20, v9);
      WindowsDuplicateString((HSTRING)v17[1].Reserved.Reserved1, a4);
    }
    if ( a5 )
      *a5 = (unsigned __int8)v19;
    if ( v16 )
      CoTaskMemFree(v16);
    if ( v14 )
      CoTaskMemFree(v14);
    if ( v12 )
      CoTaskMemFree(v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x378,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v22 )
      CoTaskMemFree(v22);
    if ( v21 )
      CoTaskMemFree(v21);
    return v10;
  }
}
