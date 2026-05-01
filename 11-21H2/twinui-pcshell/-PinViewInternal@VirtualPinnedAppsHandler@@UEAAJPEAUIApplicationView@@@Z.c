/*
 * XREFs of ?PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180557930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805578D4 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::PinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, LPCWCH *); // rbx
  __int64 v5; // rbx
  __int64 v6; // rbp
  const WCHAR *v7; // r15
  bool v8; // si
  const WCHAR *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  LPCWCH lpString2; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)this + 128LL))(this) )
  {
    lpString2 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v4 = *(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    v14 = -1LL;
    v15 = -1LL;
    if ( v4(a2, &lpString2) < 0 || (v5 = *((_QWORD *)this + 12), v6 = *((_QWORD *)this + 13), v5 == v6) )
    {
LABEL_9:
      v8 = 0;
    }
    else
    {
      v7 = lpString2;
      v8 = 1;
      while ( 1 )
      {
        v9 = (const WCHAR *)v5;
        if ( *(_QWORD *)(v5 + 24) >= 8uLL )
          v9 = *(const WCHAR **)v5;
        if ( CompareStringOrdinal(v9, -1, v7, -1, 1) == 2 )
          break;
        v5 += 32LL;
        if ( v5 == v6 )
          goto LABEL_9;
      }
    }
    v10 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, v8);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      return v11;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  return 0LL;
}
