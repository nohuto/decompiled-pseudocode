/*
 * XREFs of ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180175710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180613BAC (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::ViewAddedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  unsigned int v4; // edi
  __int64 (__fastcall *v5)(struct IApplicationView *, LPCWCH *); // rbx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rbp
  const WCHAR *v11; // r15
  __int64 v12; // rdx
  const WCHAR *v13; // rcx
  LPCWCH lpString2; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  lpString2 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  v15 = -1LL;
  v16 = -1LL;
  v6 = v5(a2, &lpString2);
  v7 = v6;
  if ( v6 != -2147023728 )
  {
    if ( v6 < 0 )
    {
      v12 = 290LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v7);
      v4 = v7;
      goto LABEL_4;
    }
    v8 = *((_QWORD *)this + 11);
    v9 = *((_QWORD *)this + 12);
    if ( v8 != v9 )
    {
      v11 = lpString2;
      while ( 1 )
      {
        v13 = (const WCHAR *)v8;
        if ( *(_QWORD *)(v8 + 24) >= 8uLL )
          v13 = *(const WCHAR **)v8;
        if ( CompareStringOrdinal(v13, -1, v11, -1, 1) == 2 )
          break;
        v8 += 32LL;
        if ( v8 == v9 )
          goto LABEL_4;
      }
      v7 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
      if ( v7 < 0 )
      {
        v12 = 294LL;
        goto LABEL_14;
      }
    }
  }
LABEL_4:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  return v4;
}
