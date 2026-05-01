/*
 * XREFs of ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1800AED0C
 * Callers:
 *     ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x1800AEC74 (--$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

__int64 __fastcall JointResizeAcc::RuntimeClassInitialize(LPVOID *this)
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
         0x14uLL);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = (char *)this[9];
    v5 = (char *)L"Joint Resize Divider" - v4;
    v6 = 21LL;
    while ( --v6 )
    {
      v7 = *(_WORD *)&v4[v5];
      if ( !v7 )
        break;
      *(_WORD *)v4 = v7;
      v4 += 2;
    }
    *(_WORD *)v4 = 0;
    this[10] = (LPVOID)20;
    v10.cbSize = 80;
    memset_0(&v10.style, 0, 0x4CuLL);
    v10.cbWndExtra = 8;
    v10.lpfnWndProc = (WNDPROC)CWRLImpWndProc<JointResizeAcc>::s_WndProcBase;
    v10.hInstance = &_ImageBase;
    v10.lpszClassName = L"JointResizeAcc";
    RegisterClassExW(&v10);
    CreateWindowExW(0x8200000u, L"JointResizeAcc", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
    if ( this[5] )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x4D,
               (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
               v8);
  }
}
