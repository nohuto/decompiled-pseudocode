/*
 * XREFs of ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1805BE408
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805BA030 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1805BABC0 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1805C1F30 (-TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x180107880 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x18016C2E8 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModePositioner::SetTabletMode(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int EmptyAppLayout; // eax
  int v10; // eax
  struct IAppLayout *v11[2]; // [rsp+28h] [rbp-19h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+38h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  *(_DWORD *)(a1 + 236) = a2;
  *(_BYTE *)(a1 + 240) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 288));
  v4 = *(_QWORD *)(a1 + 280);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_DWORD *)(a1 + 236);
  v6 = *(_QWORD *)(a1 + 304);
  if ( v6 )
  {
    LOBYTE(v3) = v5 == 1;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB86,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
  }
  LOBYTE(v3) = v5 == 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 312) + 40LL))(*(_QWORD *)(a1 + 312), v3);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB88,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v8);
  if ( v5 == 1 )
  {
    if ( !*(_BYTE *)(a1 + 241) )
      *(_BYTE *)(a1 + 241) = (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 24LL))(*(_QWORD *)(a1 + 384)) >= 0;
    pgui.cbSize = 72;
    memset_0(&pgui.flags, 0, 0x44uLL);
    if ( GetGUIThreadInfo(0, &pgui) )
    {
      if ( (pgui.flags & 4) != 0 )
        SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
    }
  }
  else if ( !*(_DWORD *)(a1 + 236) )
  {
    (*(void (__fastcall **)(_QWORD, struct tagGUITHREADINFO *))(**(_QWORD **)(a1 + 248) + 24LL))(
      *(_QWORD *)(a1 + 248),
      &pgui);
    v11[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v11);
    EmptyAppLayout = TabletModePositioner::CreateEmptyAppLayout((const struct LAYOUT_ENVIRONMENT_DETAILS *)&pgui, v11);
    if ( EmptyAppLayout < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB9F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)EmptyAppLayout);
    v10 = TabletModePositioner::SetAppLayout((TabletModePositioner *)a1, v11[0]);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBA0,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 264));
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 272));
    if ( *(_BYTE *)(a1 + 241) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 32LL))(*(_QWORD *)(a1 + 384));
      *(_BYTE *)(a1 + 241) = 0;
    }
    if ( *(_BYTE *)(a1 + 242) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 48LL))(*(_QWORD *)(a1 + 384));
      *(_BYTE *)(a1 + 242) = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v11);
  }
}
