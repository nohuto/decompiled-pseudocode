/*
 * XREFs of ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x1805DDBE4
 * Callers:
 *     ??$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z @ 0x1805DD0CC (--$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall AppResizeAcc::RuntimeClassInitialize(AppResizeAcc *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *v5; // r9
  WNDCLASSEXW v6; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 72,
         L"App Resize Bar",
         0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6.cbSize = 80;
    memset_0(&v6.style, 0, 0x4CuLL);
    v6.cbWndExtra = 8;
    v6.lpfnWndProc = (WNDPROC)CWRLImpWndProc<AppResizeAcc>::s_WndProcBase;
    v6.hInstance = &_ImageBase;
    v6.lpszClassName = L"AppResizeAcc";
    RegisterClassExW(&v6);
    CreateWindowExW(0x8200000u, L"AppResizeAcc", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
    if ( *((_QWORD *)this + 5) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x63,
               (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
               v5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
