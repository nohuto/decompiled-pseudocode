/*
 * XREFs of ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x180585EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180239484 (-_Alloc_sentinel_and_proxy@-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18057DD48 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_ad47fb4abf013fdcb1f378688d8640ff__&_ @ 0x180582C08 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_ad47fb4abf013fdcb1f378688d8640ff__-_.c)
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@$$QEAV01@@Z @ 0x18058408C (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_st.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall StartupRegKeyNotification::CheckForRemovedStartupApp(StartupRegKeyNotification *this)
{
  unsigned int v2; // eax
  bool v3; // zf
  __int64 v4; // rax
  DWORD v5; // ebx
  WCHAR *v6; // r8
  LPWSTR *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // r8
  int v11; // eax
  _QWORD **v12; // rsi
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  _QWORD **v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *v17; // rbx
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-59h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-19h] BYREF
  DWORD cchValueName; // [rsp+6Ch] [rbp-15h] BYREF
  BYTE Data[4]; // [rsp+70h] [rbp-11h] BYREF
  DWORD cbData; // [rsp+74h] [rbp-Dh] BYREF
  _QWORD **v23; // [rsp+78h] [rbp-9h] BYREF
  __int64 v24; // [rsp+80h] [rbp-1h]
  StartupRegKeyNotification *v25; // [rsp+88h] [rbp+7h] BYREF
  _QWORD **v26; // [rsp+90h] [rbp+Fh] BYREF
  LPWSTR lpValueName[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+B0h] [rbp+2Fh]
  unsigned __int64 v29; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(*((HKEY *)this + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      217LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  v3 = cbMaxValueNameLen == -1;
  v4 = cbMaxValueNameLen + 1;
  cbMaxValueNameLen = v4;
  cchValueName = v4;
  v28 = 0LL;
  v29 = 7LL;
  LOWORD(lpValueName[0]) = 0;
  if ( v3 )
  {
    v28 = (unsigned int)v4;
    *((_WORD *)lpValueName + v4) = 0;
  }
  else
  {
    std::wstring::append((wchar_t *)lpValueName, (unsigned int)v4, 0);
  }
  *(_DWORD *)Data = 0;
  cbData = 4;
  v5 = 0;
  v23 = 0LL;
  v24 = 0LL;
  std::list<std::wstring>::_Alloc_sentinel_and_proxy(&v23);
  while ( 1 )
  {
    v6 = (WCHAR *)lpValueName;
    if ( v29 >= 8 )
      v6 = lpValueName[0];
    if ( RegEnumValueW(*((HKEY *)this + 1), v5, v6, &cchValueName, 0LL, 0LL, Data, &cbData) )
      break;
    if ( *(_DWORD *)Data == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v7 = lpValueName;
      if ( v29 >= 8 )
        v7 = (LPWSTR *)lpValueName[0];
      if ( RegQueryValueExW(*((HKEY *)this + 8), (LPCWSTR)v7 + 12, 0LL, 0LL, 0LL, 0LL) == 2 )
        std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)&v23, (__int64)v23, (__int64)lpValueName);
    }
    ++v5;
    cchValueName = cbMaxValueNameLen;
    cbData = 4;
  }
  v8 = v24;
  v25 = this;
  std::list<std::wstring>::list<std::wstring>(&v26, &v23);
  if ( v8 )
  {
    v11 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_ad47fb4abf013fdcb1f378688d8640ff____(
            v9,
            *((_DWORD *)this + 4),
            v10,
            &v25);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10A,
        (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = v26;
  *v26[1] = 0LL;
  v13 = *v12;
  if ( *v12 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      std::wstring::_Tidy_deallocate((__int64)(v13 + 2));
      std::_Deallocate<16,0>(v13, 0x30uLL);
      v13 = v14;
    }
    while ( v14 );
  }
  std::_Deallocate<16,0>(v12, 0x30uLL);
  v15 = v23;
  *v23[1] = 0LL;
  v16 = *v15;
  if ( *v15 )
  {
    do
    {
      v17 = (_QWORD *)*v16;
      std::wstring::_Tidy_deallocate((__int64)(v16 + 2));
      std::_Deallocate<16,0>(v16, 0x30uLL);
      v16 = v17;
    }
    while ( v17 );
  }
  std::_Deallocate<16,0>(v23, 0x30uLL);
  std::wstring::_Tidy_deallocate((__int64)lpValueName);
}
