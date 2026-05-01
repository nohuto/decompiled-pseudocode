/*
 * XREFs of ?GetAutomationId@CScrollViewerHost@@UEAAJPEAPEAG@Z @ 0x1804C0930
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall CScrollViewerHost::GetAutomationId(CScrollViewerHost *this, unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned __int16 *v5; // r8
  unsigned __int16 *v6; // rcx
  __int64 v7; // rax
  signed __int64 v8; // rdx
  unsigned __int16 v9; // r9
  unsigned __int16 *v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  if ( (*((_BYTE *)this + 392) & 4) == 0 )
    return 2147500033LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
         (LPVOID *)&v11,
         0x13uLL);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
      (const char *)(unsigned int)v3);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
    return v4;
  }
  else
  {
    v5 = v11;
    v6 = v11;
    v7 = 20LL;
    v8 = (char *)L"TaskSwitchingWindow" - (char *)v11;
    while ( --v7 )
    {
      v9 = *(unsigned __int16 *)((char *)v6 + v8);
      if ( !v9 )
        break;
      *v6++ = v9;
    }
    v11 = 0LL;
    v13 = 0LL;
    v12 = 0LL;
    *v6 = 0;
    *a2 = v5;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
    return 0LL;
  }
}
