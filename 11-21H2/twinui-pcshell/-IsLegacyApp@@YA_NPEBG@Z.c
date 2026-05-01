/*
 * XREFs of ?IsLegacyApp@@YA_NPEBG@Z @ 0x1803EED74
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F2EE0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800E7D88 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall IsLegacyApp(CallerIdentity *this)
{
  bool v2; // bl
  unsigned __int16 **v3; // r8
  int PackageFullNameFromAppId; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
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
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(this, (char **)v8, v3);
  v5 = retaddr;
  if ( PackageFullNameFromAppId >= 0 )
  {
    PackageFullNameFromAppId = QuirkIsEnabledForPackage(*(_QWORD *)v8, this, 1114112LL, &v12);
    v5 = retaddr;
    if ( PackageFullNameFromAppId >= 0 )
    {
      v2 = v12 != 0;
      goto LABEL_7;
    }
    v6 = 222LL;
  }
  else
  {
    v6 = 211LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v5,
    (void *)v6,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
    (const char *)(unsigned int)PackageFullNameFromAppId);
LABEL_7:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  return v2;
}
