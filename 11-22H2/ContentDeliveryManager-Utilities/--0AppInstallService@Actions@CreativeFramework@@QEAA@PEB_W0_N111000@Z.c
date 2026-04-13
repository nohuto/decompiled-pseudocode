/*
 * XREFs of ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W0_N111000@Z @ 0x1800A9C38
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800AAED0 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=8
CreativeFramework::Actions::AppInstallService *__fastcall CreativeFramework::Actions::AppInstallService::AppInstallService(
        CreativeFramework::Actions::AppInstallService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        char a4,
        bool a5,
        bool a6,
        bool a7)
{
  *(_QWORD *)this = &CreativeFramework::Actions::AppInstallService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  *((_BYTE *)this + 72) = a4;
  *((_BYTE *)this + 73) = a6;
  *((_BYTE *)this + 74) = a5;
  *((_BYTE *)this + 75) = a7;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  std::wstring::wstring((__int64)this + 112);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 25) = 7LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 88) = 0;
  std::wstring::wstring((__int64)this + 208);
  std::wstring::wstring((__int64)this + 240);
  return this;
}
