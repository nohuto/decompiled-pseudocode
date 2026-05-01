/*
 * XREFs of ?QueryKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAK@Z @ 0x180405560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z @ 0x180405474 (-QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::QueryKeyDWord(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        unsigned int *a5)
{
  int v8; // ebx
  __int64 v9; // rdx
  GamingOverlayExperienceManager *v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp-248h] BYREF
  unsigned int v13[3]; // [rsp+44h] [rbp-244h] BYREF
  unsigned __int8 v14[528]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( !a5 )
  {
    v8 = -2147467261;
    v9 = 2259LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  memset_0(v14, 0, 0x208uLL);
  v12 = 520;
  v8 = GamingOverlayExperienceManager::QueryKey(v11, a2, a3, a4, v14, &v12, v13);
  if ( v8 < 0 )
  {
    v9 = 2272LL;
    goto LABEL_3;
  }
  if ( v13[0] != 4 )
  {
    v8 = -2147024809;
    v9 = 2274LL;
    goto LABEL_3;
  }
  *a5 = *(_DWORD *)v14;
  return 0LL;
}
