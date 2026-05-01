/*
 * XREFs of ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x180525244
 * Callers:
 *     ??$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z @ 0x180524714 (--$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

__int64 __fastcall AppResizeAcc::RuntimeClassInitialize(LPVOID *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  char *v4; // rdx
  signed __int64 v5; // rcx
  __int64 v6; // rax
  __int16 v7; // r8
  const char *v8; // r9
  WNDCLASSEXW v10; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
         this + 9,
         0xEuLL);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = (char *)this[9];
    v5 = (char *)L"App Resize Bar" - v4;
    v6 = 15LL;
    while ( --v6 )
    {
      v7 = *(_WORD *)&v4[v5];
      if ( !v7 )
        break;
      *(_WORD *)v4 = v7;
      v4 += 2;
    }
    *(_WORD *)v4 = 0;
    this[10] = (LPVOID)14;
    v10.cbSize = 80;
    memset_0(&v10.style, 0, 0x4CuLL);
    v10.cbWndExtra = 8;
    v10.lpfnWndProc = (WNDPROC)CWRLImpWndProc<AppResizeAcc>::s_WndProcBase;
    v10.hInstance = &_ImageBase;
    v10.lpszClassName = L"AppResizeAcc";
    RegisterClassExW(&v10);
    CreateWindowExW(0x8200000u, L"AppResizeAcc", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
    if ( this[5] )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x63,
               (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
               v8);
  }
}
