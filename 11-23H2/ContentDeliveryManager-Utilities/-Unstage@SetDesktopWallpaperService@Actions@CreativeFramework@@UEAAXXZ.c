/*
 * XREFs of ?Unstage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BCF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800BBF9C (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 */

void __fastcall CreativeFramework::Actions::SetDesktopWallpaperService::Unstage(wchar_t *this, __int64 a2, bool *a3)
{
  char *v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (char *)(this + 4);
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v4 = *(char **)v4;
  v5 = CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative((LPCWCH)v4, this + 52, a3);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
      (const char *)(unsigned int)v5,
      v6);
}
