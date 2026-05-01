/*
 * XREFs of ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z @ 0x1805A06E4
 * Callers:
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A10A4 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18059FAEC (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

__int64 __fastcall ViewSizePreferenceHelpers::GetWindowingPolicy(HWND a1)
{
  unsigned int v1; // edi
  HANDLE v2; // rbx
  __int64 v3; // rdx
  _DWORD v5[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF
  DWORD dwProcessId; // [rsp+68h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+70h] [rbp+30h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v6 = 0;
  if ( a1 )
  {
    GetWindowThreadProcessId(a1, &dwProcessId);
    TokenHandle = 0LL;
    v2 = OpenProcess(0x1000u, 0, dwProcessId);
    if ( v2 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &TokenHandle,
        0LL);
      if ( OpenProcessToken(v2, 8u, &TokenHandle) )
      {
        AppModelPolicy_GetPolicy_Internal((__int64)TokenHandle, v3, (int *)&v6, v5, &v9);
        v1 = v6;
      }
      CloseHandle(v2);
    }
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
  }
  return v1;
}
