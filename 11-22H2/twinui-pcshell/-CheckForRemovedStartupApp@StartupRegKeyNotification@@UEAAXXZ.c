/*
 * XREFs of ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x180643BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18008CD34 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18063D588 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70__&_ @ 0x18064146C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70__-_.c)
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@$$QEAV01@@Z @ 0x180641EC0 (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_st.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall StartupRegKeyNotification::CheckForRemovedStartupApp(HKEY *this)
{
  unsigned int v2; // eax
  bool v3; // zf
  DWORD v4; // ebx
  WCHAR *v5; // r8
  LPWSTR *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // r8
  int v10; // eax
  _QWORD **v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  _QWORD **v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-59h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-19h] BYREF
  DWORD cchValueName; // [rsp+6Ch] [rbp-15h] BYREF
  BYTE Data[4]; // [rsp+70h] [rbp-11h] BYREF
  DWORD cbData; // [rsp+74h] [rbp-Dh] BYREF
  _QWORD **v22; // [rsp+78h] [rbp-9h] BYREF
  __int64 v23; // [rsp+80h] [rbp-1h]
  HKEY *v24; // [rsp+88h] [rbp+7h] BYREF
  _QWORD **v25; // [rsp+90h] [rbp+Fh] BYREF
  LPWSTR lpValueName[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+B0h] [rbp+2Fh]
  unsigned __int64 v28; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(this[1], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      219LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  v3 = cbMaxValueNameLen++ == -1;
  cchValueName = cbMaxValueNameLen;
  lpValueName[0] = 0LL;
  v27 = 0LL;
  v28 = 7LL;
  if ( v3 )
  {
    v27 = cbMaxValueNameLen;
    *((_WORD *)lpValueName + cbMaxValueNameLen) = 0;
  }
  else
  {
    std::wstring::append((wchar_t *)lpValueName, cbMaxValueNameLen, 0);
  }
  *(_DWORD *)Data = 0;
  cbData = 4;
  v4 = 0;
  v22 = 0LL;
  v23 = 0LL;
  std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::_Alloc_sentinel_and_proxy(&v22);
  while ( 1 )
  {
    v5 = (WCHAR *)lpValueName;
    if ( v28 >= 8 )
      v5 = lpValueName[0];
    if ( RegEnumValueW(this[1], v4, v5, &cchValueName, 0LL, 0LL, Data, &cbData) )
      break;
    if ( *(_DWORD *)Data == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v6 = lpValueName;
      if ( v28 >= 8 )
        v6 = (LPWSTR *)lpValueName[0];
      if ( RegQueryValueExW(this[8], (LPCWSTR)v6 + 12, 0LL, 0LL, 0LL, 0LL) == 2 )
        std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)&v22, (__int64)v22, (__int64)lpValueName);
    }
    ++v4;
    cchValueName = cbMaxValueNameLen;
    cbData = 4;
  }
  v7 = v23;
  v24 = this;
  std::list<std::wstring>::list<std::wstring>(&v25, &v22);
  if ( v7 )
  {
    v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70____(
            v8,
            *((unsigned int *)this + 4),
            v9,
            &v24);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10C,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v10);
  }
  v11 = v25;
  *v25[1] = 0LL;
  v12 = *v11;
  if ( *v11 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      std::wstring::_Tidy_deallocate((__int64)(v12 + 2));
      std::_Deallocate<16,0>(v12, 0x30uLL);
      v12 = v13;
    }
    while ( v13 );
  }
  std::_Deallocate<16,0>(v11, 0x30uLL);
  v14 = v22;
  *v22[1] = 0LL;
  v15 = *v14;
  if ( *v14 )
  {
    do
    {
      v16 = (_QWORD *)*v15;
      std::wstring::_Tidy_deallocate((__int64)(v15 + 2));
      std::_Deallocate<16,0>(v15, 0x30uLL);
      v15 = v16;
    }
    while ( v16 );
  }
  std::_Deallocate<16,0>(v22, 0x30uLL);
  std::wstring::_Tidy_deallocate((__int64)lpValueName);
}
