/*
 * XREFs of ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x180570F98
 * Callers:
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x180570ED4 (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083DE4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_IsOnlyWhitespace@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBA_NXZ @ 0x180570E30 (-_IsOnlyWhitespace@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItem::_LoadTitleFromWinRTFrame(SwitchItem *this, unsigned __int16 **a2)
{
  int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, GUID *, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  unsigned __int16 *v12; // rbx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  HWND hWnd[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pString[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  v16 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))this + 12,
         (__int64)&v16);
  if ( v3 >= 0 )
  {
    v15 = 0LL;
    v4 = v16;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v15);
    v7 = v5(v4, AddressOf);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v14 = 0LL;
      v8 = v15;
      v9 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v3 = v9(v8, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v14);
      if ( v3 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 32LL))(v14, hWnd);
        v3 = v10;
        if ( v10 >= 0 )
        {
          InternalGetWindowText(hWnd[0], pString, 260);
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                  (__int64)&v17,
                  pString,
                  0xFFFFFFFFFFFFFFFFuLL);
          v3 = v11;
          if ( v11 >= 0 )
          {
            v12 = v17;
            if ( v17
              && *v17
              && !Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_IsOnlyWhitespace(&v17) )
            {
              v17 = 0LL;
              v19 = 0LL;
              v18 = 0LL;
              *a2 = v12;
              v3 = 0;
            }
            else
            {
              v3 = -2147023728;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9A,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
              (const char *)(unsigned int)v11);
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x94,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
            (const char *)(unsigned int)v10);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return (unsigned int)v3;
}
