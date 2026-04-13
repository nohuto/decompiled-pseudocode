/*
 * XREFs of ??$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDesktopWallpaperService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800BBDF0
 * Callers:
 *     ?MakeSetDesktopWallpaperService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800BC660 (-MakeSetDesktopWallpaperService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0SetDesktopWallpaperService@Actions@CreativeFramework@@QEAA@PEB_W00@Z @ 0x1800BBE84 (--0SetDesktopWallpaperService@Actions@CreativeFramework@@QEAA@PEB_W00@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::SetDesktopWallpaperService,wchar_t const *,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        const wchar_t **a2,
        const wchar_t **a3,
        const wchar_t **a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx

  v8 = operator new(0x80uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    CreativeFramework::Actions::SetDesktopWallpaperService::SetDesktopWallpaperService(
      (CreativeFramework::Actions::SetDesktopWallpaperService *)(v8 + 4),
      *a2,
      *a3,
      *a4);
  }
  else
  {
    v9 = 0LL;
  }
  a1[1] = v9;
  *a1 = v9 + 4;
  return a1;
}
