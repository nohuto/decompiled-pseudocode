/*
 * XREFs of ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x1800BCBAC
 * Callers:
 *     ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C03A0 (-MakePinToStartService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ??$?0PEB_WPEB_WPEB_W_N@?$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00$$QEA_N@Z @ 0x1800BBEE8 (--$-0PEB_WPEB_WPEB_W_N@-$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
        _QWORD *a1,
        char **a2,
        char **a3,
        char **a4,
        char *a5)
{
  __int64 started; // rdi
  void *v10; // rax

  started = 0LL;
  v10 = operator new(0x80uLL);
  if ( v10 )
    started = std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>(
                (__int64)v10,
                a2,
                a3,
                a4,
                a5);
  a1[1] = started;
  *a1 = started + 16;
  return a1;
}
