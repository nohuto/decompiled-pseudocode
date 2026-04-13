/*
 * XREFs of ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x1800C8A64
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C8CB0 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C8F80 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$_Resetp0@VTaskbarPinService@Actions@CreativeFramework@@@?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAAXPEAVTaskbarPinService@Actions@CreativeFramework@@PEAV_Ref_count_base@1@@Z @ 0x1800C8884 (--$_Resetp0@VTaskbarPinService@Actions@CreativeFramework@@@-$shared_ptr@VTaskbarPinService@Actio.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(
        _QWORD *a1,
        char **a2,
        char *a3)
{
  void *v6; // rax
  __int64 v7; // rbx
  char v8; // bp
  char *v9; // rdx
  unsigned __int64 v10; // r8

  v6 = operator new(0x80uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v8 = *a3;
    v9 = *a2;
    *((_QWORD *)v6 + 2) = &CreativeFramework::Actions::TaskbarPinService::`vftable';
    *((_QWORD *)v6 + 6) = 7LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_WORD *)v6 + 12) = 0;
    *((_QWORD *)v6 + 10) = 7LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_WORD *)v6 + 28) = 0;
    *((_QWORD *)v6 + 14) = 7LL;
    *((_QWORD *)v6 + 13) = 0LL;
    *((_WORD *)v6 + 44) = 0;
    if ( *(_WORD *)v9 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)&v9[2 * v10] );
    }
    else
    {
      v10 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)v6 + 11, v9, v10);
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
