/*
 * XREFs of ?WriteMonitorValue@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@KPEBX_K@Z @ 0x18055D764
 * Callers:
 *     ?VirtualDesktopMonitorChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@1W4VirtualDesktopMonitorChangeReason@@@Z @ 0x18055D280 (-VirtualDesktopMonitorChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18055C8A0 (-GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMO.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall VirtualDesktopPersistence::WriteMonitorValue(
        __int64 a1,
        struct IVirtualDesktop *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 (__fastcall *v9)(struct IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  VirtualDesktopPersistence *v13; // rcx
  unsigned int v14; // ebx
  int VirtualDesktopMonitorRegKeyName; // eax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int128 *v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int128 *v22; // r8
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // [rsp+40h] [rbp-68h] BYREF
  HMONITOR v26; // [rsp+48h] [rbp-60h] BYREF
  __int128 v27; // [rsp+50h] [rbp-58h] BYREF
  __int64 v28; // [rsp+60h] [rbp-48h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    v25 = 0LL;
    v9 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    v10 = v9(a2, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &v25);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v25 + 32LL))(v25, &v26);
      v14 = v12;
      if ( v12 >= 0 )
      {
        v28 = 0LL;
        v29 = 7LL;
        LOWORD(v27) = 0;
        VirtualDesktopMonitorRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopMonitorRegKeyName(
                                            v13,
                                            a2,
                                            v26,
                                            &v27);
        v17 = VirtualDesktopMonitorRegKeyName;
        if ( VirtualDesktopMonitorRegKeyName >= 0 )
        {
          v18 = &v27;
          if ( v29 >= 8 )
            v18 = (__int128 *)v27;
          LOBYTE(v16) = 1;
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**(_QWORD **)(a1 + 16) + 56LL))(
                  *(_QWORD *)(a1 + 16),
                  v16,
                  v18);
          v21 = v19;
          if ( v19 >= 0 )
          {
            v22 = &v27;
            if ( v29 >= 8 )
              v22 = (__int128 *)v27;
            LOBYTE(v20) = 1;
            v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD, int, __int64, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(
                    *(_QWORD *)(a1 + 16),
                    v20,
                    v22,
                    *a3,
                    4,
                    a5,
                    4LL);
            v24 = v23;
            if ( v23 >= 0 )
            {
              std::wstring::_Tidy_deallocate((__int64)&v27);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
              return 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1FB,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                (const char *)(unsigned int)v23);
              std::wstring::_Tidy_deallocate((__int64)&v27);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
              return v24;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1FA,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v19);
            std::wstring::_Tidy_deallocate((__int64)&v27);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
            return v21;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F9,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)VirtualDesktopMonitorRegKeyName);
          std::wstring::_Tidy_deallocate((__int64)&v27);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
          return v17;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F7,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
        return v14;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F1,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
