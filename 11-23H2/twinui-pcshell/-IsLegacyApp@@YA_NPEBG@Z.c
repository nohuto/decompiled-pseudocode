/*
 * XREFs of ?IsLegacyApp@@YA_NPEBG@Z @ 0x1801934C0
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800C0B90 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall IsLegacyApp(CallerIdentity *this)
{
  bool v2; // bl
  unsigned __int16 **v3; // r8
  int PackageFullNameFromAppId; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v7; // rdx
  unsigned __int16 v8[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  *(_QWORD *)v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  v9 = -1LL;
  v10 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(this, v8, v3);
  v5 = retaddr;
  if ( PackageFullNameFromAppId < 0 )
  {
    v7 = 211LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      v5,
      (void *)v7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)PackageFullNameFromAppId);
    goto LABEL_4;
  }
  PackageFullNameFromAppId = QuirkIsEnabledForPackage(*(_QWORD *)v8, this, 1114112LL, &v12);
  v5 = retaddr;
  if ( PackageFullNameFromAppId < 0 )
  {
    v7 = 222LL;
    goto LABEL_7;
  }
  v2 = v12 != 0;
LABEL_4:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  return v2;
}
