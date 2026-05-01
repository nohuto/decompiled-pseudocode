/*
 * XREFs of ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x1801072D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801074BC (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x1801075A4 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18010761C (-GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindow::GetApplicationId(CClassicWindow *this, unsigned __int16 **a2, unsigned __int16 **a3)
{
  char *v5; // r14
  unsigned __int64 v6; // rdi
  char *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r8
  unsigned __int64 v13; // rdi
  signed __int64 v14; // rsi
  unsigned __int16 v15; // cx
  int WeakWindowAppId; // eax
  unsigned int v19; // esi
  CallerIdentity *v20; // rbx
  unsigned __int16 **v21; // r8
  unsigned __int16 **v22; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+8h] BYREF
  CallerIdentity *v25; // [rsp+60h] [rbp+18h] BYREF

  v5 = (char *)this + 40;
  v6 = -1LL;
  if ( !*((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 6) = -1LL;
    *((_QWORD *)this + 7) = -1LL;
    WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(*((CallerIdentity **)this + 2), (HWND)this + 10, a3);
    v19 = WeakWindowAppId;
    if ( WeakWindowAppId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
        (const char *)(unsigned int)WeakWindowAppId);
      return v19;
    }
    if ( !*(_QWORD *)v5 && GetWindowThreadProcessId(*((HWND *)this + 2), &dwProcessId) )
    {
      v20 = (CallerIdentity *)OpenProcess(0x1000u, 0, dwProcessId);
      v25 = v20;
      if ( (unsigned __int64)v20 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( *(_QWORD *)v5 )
        {
          CoTaskMemFree(*(LPVOID *)v5);
          *(_QWORD *)v5 = 0LL;
        }
        *((_QWORD *)v5 + 1) = -1LL;
        *((_QWORD *)v5 + 2) = -1LL;
        if ( (int)CallerIdentity::GetAppIdFromProcessId(dwProcessId, v5, v21) < 0 )
        {
          if ( *(_QWORD *)v5 )
          {
            CoTaskMemFree(*(LPVOID *)v5);
            *(_QWORD *)v5 = 0LL;
          }
          *((_QWORD *)v5 + 1) = -1LL;
          *((_QWORD *)v5 + 2) = -1LL;
          CallerIdentity::GetWeakProcessAppId(v20, v5, v22);
        }
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
    }
  }
  *a2 = 0LL;
  v7 = *(char **)v5;
  if ( *(_QWORD *)v5 )
  {
    v8 = *((_QWORD *)v5 + 1);
    if ( v8 == -1LL )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&v7[2 * v8] );
    }
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)&v7[2 * v9] );
    if ( v8 == -1LL )
    {
      v8 = v9;
      v6 = v9;
    }
    else if ( v8 < v9 )
    {
      v6 = v8;
    }
    else
    {
      do
        ++v6;
      while ( *(_WORD *)&v7[2 * v6] );
    }
    v10 = v8 + 1;
    if ( v8 + 1 >= v8 && is_mul_ok(v10, 2uLL) )
    {
      v11 = (unsigned __int16 *)CoTaskMemAlloc(2 * v10);
      v12 = v11;
      if ( v11 )
      {
        *v11 = 0;
        if ( v10 - 1 <= 0x7FFFFFFE && v6 <= 0x7FFFFFFE )
        {
          v13 = v6 - v10;
          v14 = v7 - (char *)v11;
          while ( v13 + v10 )
          {
            v15 = *(unsigned __int16 *)((char *)v11 + v14);
            if ( !v15 )
            {
              if ( v10 )
                break;
LABEL_40:
              --v11;
              break;
            }
            *v11++ = v15;
            if ( !--v10 )
              goto LABEL_40;
          }
          *v11 = 0;
        }
        *a2 = v12;
        return 0;
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
}
