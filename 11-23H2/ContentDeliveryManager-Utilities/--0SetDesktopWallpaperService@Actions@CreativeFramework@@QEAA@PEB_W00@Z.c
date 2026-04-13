/*
 * XREFs of ??0SetDesktopWallpaperService@Actions@CreativeFramework@@QEAA@PEB_W00@Z @ 0x1800BBE84
 * Callers:
 *     ??$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDesktopWallpaperService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800BBDF0 (--$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-AV.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=4
CreativeFramework::Actions::SetDesktopWallpaperService *__fastcall CreativeFramework::Actions::SetDesktopWallpaperService::SetDesktopWallpaperService(
        CreativeFramework::Actions::SetDesktopWallpaperService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  char v6; // al
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::SetDesktopWallpaperService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  std::wstring::wstring((__int64)this + 72);
  if ( !*((_QWORD *)this + 3) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
      (const char *)0x80070057LL,
      v8);
  if ( *a2 != 49 || a2[1] )
  {
    if ( !*((_QWORD *)this + 7) || (v6 = 0, !*((_QWORD *)this + 11)) )
      v6 = 1;
    if ( v6 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
        (const char *)0x80070057LL,
        v8);
  }
  return this;
}
