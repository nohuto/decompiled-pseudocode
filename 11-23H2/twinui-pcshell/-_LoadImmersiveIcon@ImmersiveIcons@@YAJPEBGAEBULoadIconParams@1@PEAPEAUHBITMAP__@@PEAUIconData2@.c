/*
 * XREFs of ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x180745D94
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180744800 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1807421B4 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 */

__int64 __fastcall ImmersiveIcons::_LoadImmersiveIcon(
        WCHAR *pszItem,
        ImmersiveIcons *this,
        struct tagSIZE *a3,
        HBITMAP *a4)
{
  struct ImmersiveIcons::IconData2 *v7; // r9
  int IconData; // ebx
  __int64 v9; // rdx
  const struct ImmersiveIcons::IconData2 *v11; // [rsp+30h] [rbp-258h]
  WCHAR v12[272]; // [rsp+40h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  *a3 = 0LL;
  memset_0(v12, 0, 0x218uLL);
  IconData = ImmersiveIcons::GetIconData(pszItem, this, (const struct ImmersiveIcons::LoadIconParams *)v12, v7);
  if ( IconData < 0 )
  {
    v9 = 584LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)IconData);
    return (unsigned int)IconData;
  }
  IconData = ImmersiveIcons::CreateIconBitmap(
               *(ImmersiveIcons **)this,
               *(struct tagSIZE *)((char *)this + 8),
               *(struct tagSIZE *)((char *)this + 16),
               (struct tagSIZE)*((unsigned int *)this + 6),
               *((_BYTE *)this + 32),
               v12,
               v11,
               a3);
  if ( IconData < 0 )
  {
    v9 = 586LL;
    goto LABEL_3;
  }
  return 0LL;
}
