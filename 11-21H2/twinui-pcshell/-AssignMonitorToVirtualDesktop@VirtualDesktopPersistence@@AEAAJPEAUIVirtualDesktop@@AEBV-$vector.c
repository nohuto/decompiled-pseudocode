/*
 * XREFs of ?AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@@Z @ 0x18055C3AC
 * Callers:
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180110060 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801753EC (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180190FB0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMonitorId@VirtualDesktopPersistence@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHMONITOR__@@@Z @ 0x18055C7E0 (-GetMonitorId@VirtualDesktopPersistence@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18055C8A0 (-GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMO.c)
 *     ?ReadMonitors@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18055CC68 (-ReadMonitors@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAV-$vector@V-$basic_string@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopPersistence::AssignMonitorToVirtualDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 **a3)
{
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // r13
  _QWORD *v8; // rsi
  _QWORD *v9; // r12
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  const WCHAR *v12; // rax
  const WCHAR *v13; // rcx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int VirtualDesktopMonitorRegKeyName; // eax
  _QWORD *v20; // r8
  int *v21; // rdx
  int v22; // eax
  char v23; // [rsp+40h] [rbp-69h]
  __int64 v24; // [rsp+48h] [rbp-61h] BYREF
  int v25; // [rsp+50h] [rbp-59h] BYREF
  __int64 v26; // [rsp+58h] [rbp-51h]
  __int128 v27; // [rsp+60h] [rbp-49h] BYREF
  __int64 v28; // [rsp+70h] [rbp-39h]
  _BYTE v29[8]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v30[3]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v31; // [rsp+98h] [rbp-11h]
  LPCWCH lpString1[4]; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v26 = a1;
  v27 = 0LL;
  v28 = 0LL;
  v5 = VirtualDesktopPersistence::ReadMonitors(a1, a2, &v27);
  v6 = retaddr;
  if ( v5 >= 0 )
  {
    v23 = 0;
    v7 = **a3;
    v9 = (_QWORD *)*((_QWORD *)&v27 + 1);
    v8 = (_QWORD *)v27;
    while ( 2 )
    {
      if ( v8 != v9 )
      {
        v10 = *a3;
        v11 = a3[1];
        while ( 1 )
        {
          if ( v10 == v11 )
            goto LABEL_10;
          VirtualDesktopPersistence::GetMonitorId(v6, lpString1, *v10);
          v12 = (const WCHAR *)std::wstring::c_str(v8);
          v13 = (const WCHAR *)lpString1;
          if ( lpString1[3] >= (LPCWCH)8 )
            v13 = lpString1[0];
          if ( CompareStringOrdinal(v13, -1, v12, -1, 1) == 2 )
            break;
          std::wstring::_Tidy_deallocate((__int64)lpString1);
          ++v10;
        }
        v30[2] = 0LL;
        v31 = 7LL;
        LOWORD(v30[0]) = 0;
        VirtualDesktopMonitorRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopMonitorRegKeyName(
                                            v14,
                                            a2,
                                            *v10,
                                            v30);
        v17 = VirtualDesktopMonitorRegKeyName;
        if ( VirtualDesktopMonitorRegKeyName < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x125,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)VirtualDesktopMonitorRegKeyName);
          std::wstring::_Tidy_deallocate((__int64)v30);
          std::wstring::_Tidy_deallocate((__int64)lpString1);
          goto LABEL_16;
        }
        v20 = v30;
        if ( v31 >= 8 )
          v20 = (_QWORD *)v30[0];
        v21 = &v25;
        LOBYTE(v21) = 1;
        if ( (*(int (__fastcall **)(_QWORD, int *, _QWORD *, const unsigned __int16 *, int, int *, _BYTE *))(**(_QWORD **)(v26 + 16) + 24LL))(
               *(_QWORD *)(v26 + 16),
               v21,
               v20,
               L"IsTemporary",
               4,
               &v25,
               v29) < 0
          || !v25 )
        {
          v23 = 1;
        }
        v7 = *v10;
        std::wstring::_Tidy_deallocate((__int64)v30);
        std::wstring::_Tidy_deallocate((__int64)lpString1);
        if ( !v23 )
        {
LABEL_10:
          v8 += 4;
          continue;
        }
      }
      break;
    }
    v24 = 0LL;
    v15 = **a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v16 = v15(a2, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &v24);
    if ( v16 >= 0 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, v7);
      v17 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x141,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
        goto LABEL_16;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v16);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v5);
  }
  v17 = 0;
LABEL_16:
  std::vector<std::wstring>::_Tidy((__int64)&v27);
  return v17;
}
