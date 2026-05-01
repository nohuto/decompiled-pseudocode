/*
 * XREFs of ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z @ 0x1804E8214
 * Callers:
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804E8C74 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1804E706C (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1804E767C (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewSizePreferenceHelpers::GetWindowingPolicy(HWND a1)
{
  unsigned int v1; // esi
  HANDLE v2; // rbx
  HANDLE v3; // r14
  DWORD LastError; // edi
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+30h] BYREF
  DWORD dwProcessId; // [rsp+78h] [rbp+38h] BYREF
  HANDLE hObject; // [rsp+80h] [rbp+40h] BYREF
  void *v12; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0;
  v9 = 0;
  if ( a1 )
  {
    GetWindowThreadProcessId(a1, &dwProcessId);
    hObject = 0LL;
    v2 = OpenProcess(0x1000u, 0, dwProcessId);
    v12 = v2;
    if ( v2 )
    {
      v3 = hObject;
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        LastError = GetLastError();
        CloseHandle(v3);
        SetLastError(LastError);
      }
      if ( OpenProcessToken(v2, 8u, &hObject) )
      {
        AppModelPolicy_GetPolicy_Internal((__int64)hObject, v5, (int *)&v9, &v8, &v7);
        v1 = v9;
      }
    }
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v12);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
  }
  return v1;
}
