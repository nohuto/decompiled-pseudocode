/*
 * XREFs of ?VirtualDesktopMonitorChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@1W4VirtualDesktopMonitorChangeReason@@@Z @ 0x18055D280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18055C8A0 (-GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMO.c)
 *     ?WriteMonitorValue@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@KPEBX_K@Z @ 0x18055D764 (-WriteMonitorValue@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV-$basic_string_view@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopMonitorChanged(
        __int64 a1,
        struct IVirtualDesktop *a2,
        HMONITOR a3,
        __int64 a4,
        int a5)
{
  __int64 (__fastcall *v9)(struct IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // r9
  __int64 v15; // rax
  VirtualDesktopPersistence *v16; // rcx
  int VirtualDesktopMonitorRegKeyName; // eax
  __int64 v18; // rdx
  __int128 *v20; // r8
  int v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  unsigned __int64 v27; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    v22 = 0LL;
    v9 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v10 = v9(a2, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &v22);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 232LL;
LABEL_15:
      v14 = (unsigned int)v10;
      goto LABEL_16;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, &v24);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 233LL;
      goto LABEL_15;
    }
    if ( v24 != a4 )
    {
      v11 = -2147024809;
      v14 = 2147942487LL;
      v12 = 236LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v14);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      return v11;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( VirtualDesktopPersistence::s_isTemporaryValueName[v15] );
    v23[0] = L"IsTemporary";
    v23[1] = v15;
    if ( a5 )
    {
      v21 = 0;
      v10 = VirtualDesktopPersistence::WriteMonitorValue(a1, (_DWORD)a2, (unsigned int)v23, v13, (__int64)&v21);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 248LL;
        goto LABEL_15;
      }
      v26 = 0LL;
      v27 = 7LL;
      LOWORD(v25) = 0;
      VirtualDesktopMonitorRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopMonitorRegKeyName(v16, a2, a3, &v25);
      v11 = VirtualDesktopMonitorRegKeyName;
      if ( VirtualDesktopMonitorRegKeyName < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFC,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          (const char *)(unsigned int)VirtualDesktopMonitorRegKeyName);
        std::wstring::_Tidy_deallocate((__int64)&v25);
        goto LABEL_19;
      }
      v20 = &v25;
      if ( v27 >= 8 )
        v20 = (__int128 *)v25;
      LOBYTE(v18) = 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *))(**(_QWORD **)(a1 + 16) + 64LL))(
        *(_QWORD *)(a1 + 16),
        v18,
        v20);
      std::wstring::_Tidy_deallocate((__int64)&v25);
    }
    else
    {
      v21 = 1;
      v10 = VirtualDesktopPersistence::WriteMonitorValue(a1, (_DWORD)a2, (unsigned int)v23, v13, (__int64)&v21);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 242LL;
        goto LABEL_15;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  }
  return 0LL;
}
