/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180042D30
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180041DB4 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ??$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z @ 0x1800144E4 (--$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z.c)
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180042AB0 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x180042BC4 (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(
        LPVOID *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  void *v6; // rbx
  void *v7; // [rsp+38h] [rbp+10h] BYREF
  void (__stdcall *v8)(LPVOID); // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( (int)Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
              (char *)L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
              (__int64)L"AssignedAccessConfiguration",
              &v7,
              a4) < 0 )
  {
    if ( v7 )
    {
      v8 = CoTaskMemFree;
      wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v8, &v7);
    }
    return 0;
  }
  v6 = v7;
  if ( !v7 )
    return 0;
  if ( *this )
    CoTaskMemFree(*this);
  *this = v6;
  this[2] = (LPVOID)-1LL;
  this[1] = (LPVOID)-1LL;
  *((_DWORD *)this + 6) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion((LPCWSTR *)this);
  return 1;
}
