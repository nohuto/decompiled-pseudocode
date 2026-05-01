/*
 * XREFs of ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180585B70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180239484 (-_Alloc_sentinel_and_proxy@-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18057DD48 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1805824B4 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_fd4539b3655cc22a40f9c1e0d2159299__&_ @ 0x180582CA8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_fd4539b3655cc22a40f9c1e0d2159299__-_.c)
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@$$QEAV01@@Z @ 0x18058408C (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_st.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall StartupFolderNotification::CheckForRemovedStartupApp(StartupFolderNotification *this)
{
  unsigned int v2; // eax
  bool v3; // zf
  __int64 v4; // rax
  DWORD v5; // ebx
  WCHAR *v6; // r8
  LPWSTR *v7; // rsi
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
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
  unsigned int lpcSubKeys; // [rsp+20h] [rbp-99h]
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-59h] BYREF
  DWORD cchValueName; // [rsp+64h] [rbp-55h] BYREF
  BYTE Data[4]; // [rsp+68h] [rbp-51h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-4Dh] BYREF
  _QWORD **v27; // [rsp+70h] [rbp-49h] BYREF
  __int64 v28; // [rsp+78h] [rbp-41h]
  StartupFolderNotification **p_Src; // [rsp+80h] [rbp-39h]
  LPWSTR lpValueName[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v31; // [rsp+98h] [rbp-21h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-19h]
  StartupFolderNotification *Src; // [rsp+A8h] [rbp-11h] BYREF
  _QWORD v34[3]; // [rsp+B0h] [rbp-9h] BYREF
  char v35[16]; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+D8h] [rbp+1Fh]
  __int64 v37; // [rsp+E0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(*((HKEY *)this + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      361LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  v3 = cbMaxValueNameLen == -1;
  v4 = cbMaxValueNameLen + 1;
  cbMaxValueNameLen = v4;
  cchValueName = v4;
  v31 = 0LL;
  v32 = 7LL;
  LOWORD(lpValueName[0]) = 0;
  if ( v3 )
  {
    v31 = (unsigned int)v4;
    *((_WORD *)lpValueName + v4) = 0;
  }
  else
  {
    std::wstring::append((wchar_t *)lpValueName, (unsigned int)v4, 0);
  }
  *(_DWORD *)Data = 0;
  cbData = 4;
  v5 = 0;
  v27 = 0LL;
  v28 = 0LL;
  std::list<std::wstring>::_Alloc_sentinel_and_proxy(&v27);
  while ( 1 )
  {
    v6 = (WCHAR *)lpValueName;
    if ( v32 >= 8 )
      v6 = lpValueName[0];
    if ( RegEnumValueW(*((HKEY *)this + 1), v5, v6, &cchValueName, 0LL, 0LL, Data, &cbData) )
      break;
    if ( *(_DWORD *)Data == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v7 = lpValueName;
      if ( v32 >= 8 )
        v7 = (LPWSTR *)lpValueName[0];
      v8 = (_QWORD *)((char *)this + 64);
      p_Src = &Src;
      v9 = *((_QWORD *)this + 10);
      if ( *((_QWORD *)this + 11) >= 8uLL )
        v8 = (_QWORD *)*v8;
      v34[1] = 0LL;
      v34[2] = 7LL;
      LOWORD(Src) = 0;
      std::wstring::assign((char *)&Src, v8, v9);
      p_Src = (StartupFolderNotification **)v35;
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)v7 + v10 + 12) );
      v36 = 0LL;
      v37 = 7LL;
      *(_WORD *)v35 = 0;
      std::wstring::assign(v35, v7 + 3, v10);
      std::filesystem::path::operator/=((std::filesystem *)&Src, (std::filesystem *)v35);
      std::wstring::_Tidy_deallocate((__int64)v35);
      if ( !std::filesystem::exists((std::filesystem *)&Src, v11) )
        std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)&v27, (__int64)v27, (__int64)lpValueName);
      std::wstring::_Tidy_deallocate((__int64)&Src);
    }
    ++v5;
    cchValueName = cbMaxValueNameLen;
    cbData = 4;
  }
  v12 = v28;
  Src = this;
  std::list<std::wstring>::list<std::wstring>(v34, &v27);
  if ( v12 )
  {
    v15 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_fd4539b3655cc22a40f9c1e0d2159299____(
            v13,
            *((_DWORD *)this + 4),
            v14,
            &Src);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19D,
        (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v15);
  }
  v16 = (_QWORD **)v34[0];
  **(_QWORD **)(v34[0] + 8LL) = 0LL;
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
  v19 = v27;
  *v27[1] = 0LL;
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
  std::_Deallocate<16,0>(v27, 0x30uLL);
  std::wstring::_Tidy_deallocate((__int64)lpValueName);
}
