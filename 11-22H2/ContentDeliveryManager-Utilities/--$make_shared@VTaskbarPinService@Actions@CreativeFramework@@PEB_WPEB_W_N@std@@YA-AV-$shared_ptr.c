/*
 * XREFs of ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x1800B5CC4
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800B6270 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800B64E0 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ??$_Resetp0@VTaskbarPinService@Actions@CreativeFramework@@@?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAAXPEAVTaskbarPinService@Actions@CreativeFramework@@PEAV_Ref_count_base@1@@Z @ 0x1800B5BB0 (--$_Resetp0@VTaskbarPinService@Actions@CreativeFramework@@@-$shared_ptr@VTaskbarPinService@Actio.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  _DWORD *v6; // rax
  __int64 v7; // r14
  char v8; // di

  v6 = operator new(0x80uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v8 = *a4;
    *((_QWORD *)v6 + 2) = &CreativeFramework::Actions::TaskbarPinService::`vftable';
    std::wstring::wstring((__int64)(v6 + 6));
    std::wstring::wstring(v7 + 56);
    *(_QWORD *)(v7 + 112) = 7LL;
    *(_QWORD *)(v7 + 104) = 0LL;
    *(_WORD *)(v7 + 88) = 0;
    *(_BYTE *)(v7 + 120) = v8;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::TaskbarPinService>::_Resetp0<CreativeFramework::Actions::TaskbarPinService>(
    a1,
    v7 + 16,
    v7);
  return a1;
}
