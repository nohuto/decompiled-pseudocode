/*
 * XREFs of ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180643870
 * Callers:
 *     <none>
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18008CD34 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180090B34 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x18019366C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18063D588 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36__&_ @ 0x18064150C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36__-_.c)
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@$$QEAV01@@Z @ 0x180641EC0 (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_st.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall StartupFolderNotification::CheckForRemovedStartupApp(HKEY *this)
{
  unsigned int v2; // eax
  bool v3; // zf
  DWORD v4; // ebx
  WCHAR *v5; // r8
  LPWSTR *v6; // rsi
  HKEY *v7; // rsi
  _QWORD *v8; // rax
  HKEY v9; // rcx
  __int64 v10; // rax
  const struct std::filesystem::path *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // r8
  int v15; // eax
  _QWORD **v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  _QWORD **v19; // rcx
  _QWORD *v20; // rdi
  _QWORD *v21; // rbx
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-E0h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cchValueName; // [rsp+6Ch] [rbp-9Ch] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD **v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h]
  HKEY *v28; // [rsp+88h] [rbp-80h] BYREF
  _QWORD **v29; // [rsp+90h] [rbp-78h] BYREF
  void *v30[2]; // [rsp+B8h] [rbp-50h] BYREF
  LPWSTR lpValueName[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v33; // [rsp+E0h] [rbp-28h]
  _QWORD Src[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v35[4]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(this[1], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      363LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  v3 = cbMaxValueNameLen++ == -1;
  cchValueName = cbMaxValueNameLen;
  lpValueName[0] = 0LL;
  v32 = 0LL;
  v33 = 7LL;
  if ( v3 )
  {
    v32 = cbMaxValueNameLen;
    *((_WORD *)lpValueName + cbMaxValueNameLen) = 0;
  }
  else
  {
    std::wstring::append((wchar_t *)lpValueName, cbMaxValueNameLen, 0);
  }
  *(_DWORD *)&Data[4] = 0;
  *(_DWORD *)Data = 4;
  v4 = 0;
  v26 = 0LL;
  v27 = 0LL;
  std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::_Alloc_sentinel_and_proxy(&v26);
  while ( 1 )
  {
    v5 = (WCHAR *)lpValueName;
    if ( v33 >= 8 )
      v5 = lpValueName[0];
    if ( RegEnumValueW(this[1], v4, v5, &cchValueName, 0LL, 0LL, &Data[4], (LPDWORD)Data) )
      break;
    if ( *(_DWORD *)&Data[4] == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v6 = lpValueName;
      if ( v33 >= 8 )
        v6 = (LPWSTR *)lpValueName[0];
      v7 = (HKEY *)(v6 + 3);
      v8 = this + 8;
      v9 = this[10];
      if ( (unsigned __int64)this[11] >= 8 )
        v8 = (_QWORD *)*v8;
      v30[0] = v8;
      v30[1] = v9;
      std::wstring::wstring(Src, v30);
      v28 = v7;
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)v7 + v10) );
      v29 = (_QWORD **)v10;
      std::wstring::wstring(v35, (void **)&v28);
      std::filesystem::path::operator/=((std::filesystem *)Src, (std::filesystem *)v35);
      std::wstring::_Tidy_deallocate((__int64)v35);
      if ( !std::filesystem::exists((std::filesystem *)Src, v11) )
        std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)&v26, (__int64)v26, (__int64)lpValueName);
      std::wstring::_Tidy_deallocate((__int64)Src);
    }
    ++v4;
    cchValueName = cbMaxValueNameLen;
    *(_DWORD *)Data = 4;
  }
  v12 = v27;
  v28 = this;
  std::list<std::wstring>::list<std::wstring>(&v29, &v26);
  if ( v12 )
  {
    v15 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36____(
            v13,
            *((unsigned int *)this + 4),
            v14,
            &v28);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19F,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v15);
  }
  v16 = v29;
  *v29[1] = 0LL;
  v17 = *v16;
  if ( *v16 )
  {
    do
    {
      v18 = (_QWORD *)*v17;
      std::wstring::_Tidy_deallocate((__int64)(v17 + 2));
      std::_Deallocate<16,0>(v17, 0x30uLL);
      v17 = v18;
    }
    while ( v18 );
  }
  std::_Deallocate<16,0>(v16, 0x30uLL);
  v19 = v26;
  *v26[1] = 0LL;
  v20 = *v19;
  if ( *v19 )
  {
    do
    {
      v21 = (_QWORD *)*v20;
      std::wstring::_Tidy_deallocate((__int64)(v20 + 2));
      std::_Deallocate<16,0>(v20, 0x30uLL);
      v20 = v21;
    }
    while ( v21 );
  }
  std::_Deallocate<16,0>(v26, 0x30uLL);
  std::wstring::_Tidy_deallocate((__int64)lpValueName);
}
