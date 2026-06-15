/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180043FAC
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800428B8 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     ??$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z @ 0x1800144E4 (--$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002AD28 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002B774 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  void *v6; // rbx
  void *v7; // rcx
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+48h] [rbp+10h] BYREF
  void (__stdcall *v11)(LPVOID); // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v10 = 0LL;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v9,
    (char *)L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown",
    0xFFFFFFFFFFFFFFFFuLL,
    a4);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    &v10,
    &v9);
  if ( v9 )
  {
    v11 = CoTaskMemFree;
    wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v11, &v9);
  }
  v6 = v10;
  if ( v10 )
  {
    v7 = (void *)*((_QWORD *)this + 1);
    if ( v7 )
      CoTaskMemFree(v7);
    *((_QWORD *)this + 1) = v6;
    *((_QWORD *)this + 3) = -1LL;
    *((_QWORD *)this + 2) = -1LL;
    return 1;
  }
  return v5;
}
