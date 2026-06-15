/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180044060
 * Callers:
 *     <none>
 * Callees:
 *     ??$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z @ 0x1800144E4 (--$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z.c)
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180042AB0 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bp
  char v6; // di
  void *v7; // rbx
  void *v8; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  void (__stdcall *v11)(LPVOID); // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v10 = 0LL;
  if ( (int)Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
              (char *)L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
              (__int64)L"AssignedAccessConfiguration",
              &v10,
              a4) < 0 )
  {
    if ( v10 )
    {
      v11 = CoTaskMemFree;
      wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v11, &v10);
    }
    return 0;
  }
  v6 = 1;
  v7 = v10;
  if ( v10 )
  {
    v8 = (void *)*((_QWORD *)this + 1);
    if ( v8 )
      CoTaskMemFree(v8);
    *((_QWORD *)this + 1) = v7;
    *((_QWORD *)this + 3) = -1LL;
    *((_QWORD *)this + 2) = -1LL;
    v5 = 1;
  }
  if ( !v5 )
    return 0;
  return v6;
}
