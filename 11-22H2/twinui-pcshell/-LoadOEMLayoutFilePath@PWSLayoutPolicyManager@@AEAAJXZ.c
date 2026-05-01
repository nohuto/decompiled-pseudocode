/*
 * XREFs of ?LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ @ 0x18049504C
 * Callers:
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180494D38 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall PWSLayoutPolicyManager::LoadOEMLayoutFilePath(PWSLayoutPolicyManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  WCHAR Dst[264]; // [rsp+20h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  if ( !ExpandEnvironmentStringsW(
          L"%SystemDrive%\\Users\\Default\\AppData\\Local\\Microsoft\\Windows\\Shell\\InkWorkspaceModification.xml",
          Dst,
          0x104u) )
  {
    v2 = -2147467259;
    v3 = 244LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 56,
         Dst,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 < 0 )
  {
    v3 = 245LL;
    goto LABEL_3;
  }
  return 0LL;
}
