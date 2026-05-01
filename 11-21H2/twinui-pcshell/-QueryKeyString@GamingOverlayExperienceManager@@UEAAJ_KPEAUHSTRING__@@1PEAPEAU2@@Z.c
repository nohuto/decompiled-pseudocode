/*
 * XREFs of ?QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z @ 0x180337A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z @ 0x18033785C (-QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::QueryKeyString(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING *string)
{
  int v8; // ebx
  __int64 v9; // rdx
  GamingOverlayExperienceManager *v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp-248h] BYREF
  unsigned int v13[3]; // [rsp+44h] [rbp-244h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( !string )
  {
    v8 = -2147467261;
    v9 = 2199LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  memset_0(sourceString, 0, 0x208uLL);
  v12 = 520;
  v8 = GamingOverlayExperienceManager::QueryKey(v11, a2, a3, a4, (unsigned __int8 *)sourceString, &v12, v13);
  if ( v8 < 0 )
  {
    v9 = 2212LL;
    goto LABEL_3;
  }
  if ( v13[0] != 1 )
  {
    v8 = -2147024809;
    v9 = 2214LL;
    goto LABEL_3;
  }
  v8 = WindowsCreateString(sourceString, v12 >> 1, string);
  if ( v8 < 0 )
  {
    v9 = 2218LL;
    goto LABEL_3;
  }
  return 0LL;
}
