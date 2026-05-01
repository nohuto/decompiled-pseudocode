/*
 * XREFs of ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180132840
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x180132AE8 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180132B60 (-GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindow::GetApplicationId(CClassicWindow *this, unsigned __int16 **a2)
{
  char *v4; // r14
  unsigned __int64 v5; // rdi
  char *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rdx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rsi
  unsigned __int16 v14; // cx
  unsigned int v15; // ebx
  HWND v17; // rcx
  ATOM PropW; // ax
  CallerIdentity *v19; // rbx
  unsigned __int16 **v20; // r8
  unsigned __int16 **v21; // r8
  UINT AtomNameW; // eax
  const char *v23; // r9
  __int64 v24; // rax
  DWORD dwProcessId[2]; // [rsp+20h] [rbp-248h] BYREF
  CallerIdentity *v26; // [rsp+28h] [rbp-240h]
  WCHAR Buffer[256]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v4 = (char *)this + 40;
  v5 = -1LL;
  if ( !*((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 6) = -1LL;
    *((_QWORD *)this + 7) = -1LL;
    v17 = (HWND)*((_QWORD *)this + 2);
    *(_QWORD *)v4 = 0LL;
    PropW = (unsigned __int16)GetPropW(v17, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5");
    if ( PropW )
    {
      AtomNameW = GlobalGetAtomNameW(PropW, Buffer, 256);
      if ( AtomNameW )
      {
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          dwProcessId,
          (char *)Buffer,
          AtomNameW,
          v23);
        v24 = *(_QWORD *)dwProcessId;
        *(_QWORD *)v4 = *(_QWORD *)dwProcessId;
        if ( !v24 )
        {
          v15 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F,
            (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
            (const char *)0x8007000ELL);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x158,
            (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
            (const char *)0x8007000ELL);
          return v15;
        }
      }
    }
    if ( !*(_QWORD *)v4 && GetWindowThreadProcessId(*((HWND *)this + 2), dwProcessId) )
    {
      v19 = (CallerIdentity *)OpenProcess(0x1000u, 0, dwProcessId[0]);
      v26 = v19;
      if ( (unsigned __int64)v19 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( *(_QWORD *)v4 )
        {
          CoTaskMemFree(*(LPVOID *)v4);
          *(_QWORD *)v4 = 0LL;
        }
        *((_QWORD *)v4 + 1) = -1LL;
        *((_QWORD *)v4 + 2) = -1LL;
        if ( (int)CallerIdentity::GetAppIdFromProcessId(dwProcessId[0], v4, v20) < 0 )
        {
          if ( *(_QWORD *)v4 )
          {
            CoTaskMemFree(*(LPVOID *)v4);
            *(_QWORD *)v4 = 0LL;
          }
          *((_QWORD *)v4 + 1) = -1LL;
          *((_QWORD *)v4 + 2) = -1LL;
          CallerIdentity::GetWeakProcessAppId(v19, v4, v21);
        }
      }
      if ( (unsigned __int64)v19 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v19);
    }
  }
  *a2 = 0LL;
  v6 = *(char **)v4;
  if ( *(_QWORD *)v4 )
  {
    v7 = *((_QWORD *)v4 + 1);
    if ( v7 == -1LL )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)&v6[2 * v7] );
    }
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&v6[2 * v8] );
    if ( v7 == -1LL )
    {
      v7 = v8;
      v5 = v8;
    }
    else if ( v7 < v8 )
    {
      v5 = v7;
    }
    else
    {
      do
        ++v5;
      while ( *(_WORD *)&v6[2 * v5] );
    }
    v9 = v7 + 1;
    if ( v7 + 1 >= v7 && is_mul_ok(v9, 2uLL) )
    {
      v10 = (unsigned __int16 *)CoTaskMemAlloc(2 * v9);
      v11 = v10;
      if ( v10 )
      {
        *v10 = 0;
        if ( v9 )
        {
          if ( v9 <= 0x7FFFFFFF && v5 <= 0x7FFFFFFE )
          {
            v12 = v5 - v9;
            v13 = v6 - (char *)v10;
            while ( v12 + v9 )
            {
              v14 = *(unsigned __int16 *)((char *)v10 + v13);
              if ( !v14 )
                break;
              *v10++ = v14;
              if ( !--v9 )
              {
                --v10;
                break;
              }
            }
          }
          *v10 = 0;
        }
        v15 = 0;
        *a2 = v11;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v15;
}
