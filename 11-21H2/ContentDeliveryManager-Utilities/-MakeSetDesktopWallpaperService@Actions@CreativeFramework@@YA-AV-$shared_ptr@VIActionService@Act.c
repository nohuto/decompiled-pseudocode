/*
 * XREFs of ?MakeSetDesktopWallpaperService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800D1450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B8F84 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDesktopWallpaperService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800D0B44 (--$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-AV.c)
 */

_QWORD *__fastcall CreativeFramework::Actions::MakeSetDesktopWallpaperService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  void **v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v10; // [rsp+20h] [rbp-39h] BYREF
  void **v11; // [rsp+28h] [rbp-31h] BYREF
  void **v12; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-21h] BYREF
  int v14[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v15; // [rsp+58h] [rbp-1h]
  unsigned __int64 v16; // [rsp+60h] [rbp+7h]
  void *v17[3]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+27h]
  void *v19[4]; // [rsp+88h] [rbp+2Fh] BYREF

  v10 = a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v19, a3, (char *)L"portraitImage");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v11 = v5;
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"landscapeImage");
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  v12 = v6;
  v7 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v14,
                   a3,
                   (char *)L"ctx.contentId");
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  v10 = v7;
  v8 = std::make_shared<CreativeFramework::Actions::SetDesktopWallpaperService,wchar_t const *,wchar_t const *,wchar_t const *>(
         v13,
         (__int64 *)&v10,
         (char **)&v12,
         (char **)&v11);
  *a1 = *v8;
  a1[1] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v13);
  if ( v16 >= 8 )
    operator delete(*(void **)v14);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v18 = 7LL;
  v17[2] = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v19[3] >= (void *)8 )
    operator delete(v19[0]);
  return a1;
}
