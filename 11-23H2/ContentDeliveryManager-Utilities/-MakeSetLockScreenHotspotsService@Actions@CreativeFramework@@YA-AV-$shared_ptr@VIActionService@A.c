/*
 * XREFs of ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800BB4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800A92B4 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800A93A8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVSetLockScreenHotspotsService@Actions@CreativeFramework@@@Z @ 0x1800BAC10 (--$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@-$shared_ptr@VIActionServic.c)
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x1800BACD4 (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall CreativeFramework::Actions::MakeSetLockScreenHotspotsService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char v5; // bl
  CreativeFramework::Actions::SetLockScreenHotspotsService *v6; // rax
  CreativeFramework::Actions::SetLockScreenHotspotsService *v7; // r13
  __int64 v8; // rax
  const WCHAR *lpString1; // rsi
  __int64 v10; // rax
  const wchar_t *v11; // r14
  __int64 v12; // rax
  const wchar_t *v13; // r15
  __int64 v14; // rax
  char v15; // bl
  _QWORD v17[4]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v20[4]; // [rsp+A0h] [rbp-9h] BYREF

  v5 = 0;
  v6 = (CreativeFramework::Actions::SetLockScreenHotspotsService *)operator new(0x80uLL);
  v7 = v6;
  if ( v6 )
  {
    v8 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v20, a3);
    lpString1 = (const WCHAR *)v8;
    if ( *(_QWORD *)(v8 + 24) >= 8uLL )
      lpString1 = *(const WCHAR **)v8;
    v10 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v19, a3);
    v11 = (const wchar_t *)v10;
    if ( *(_QWORD *)(v10 + 24) >= 8uLL )
      v11 = *(const wchar_t **)v10;
    v12 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v18, a3);
    v13 = (const wchar_t *)v12;
    if ( *(_QWORD *)(v12 + 24) >= 8uLL )
      v13 = *(const wchar_t **)v12;
    v14 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3);
    v5 = 15;
    if ( *(_QWORD *)(v14 + 24) >= 8uLL )
      v14 = *(_QWORD *)v14;
    v6 = CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
           v7,
           (const wchar_t *)v14,
           v13,
           v11,
           lpString1);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::IActionService>::_Resetp<CreativeFramework::Actions::SetLockScreenHotspotsService>(
    a1,
    (__int64)v6);
  v15 = v5 | 0x10;
  if ( (v15 & 8) != 0 )
  {
    v15 &= ~8u;
    std::wstring::_Tidy(v17, 1, 0LL);
  }
  if ( (v15 & 4) != 0 )
  {
    v15 &= ~4u;
    std::wstring::_Tidy(v18, 1, 0LL);
  }
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    std::wstring::_Tidy(v19, 1, 0LL);
  }
  if ( (v15 & 1) != 0 )
    std::wstring::_Tidy(v20, 1, 0LL);
  return a1;
}
