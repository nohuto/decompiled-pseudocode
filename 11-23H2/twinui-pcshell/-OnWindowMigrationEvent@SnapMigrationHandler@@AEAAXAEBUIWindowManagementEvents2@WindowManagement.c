/*
 * XREFs of ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x180674CE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?MigrationReason@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806491D4 (-MigrationReason@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventAr.c)
 *     ?WindowId@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A124 (-WindowId@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWi.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1806709C0 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ??$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRect@Geometry@@@Z @ 0x180674908 (--$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRe.c)
 *     ??$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTelemetry@@SAX$$QEA_K$$QEAIAEBUCRect@Geometry@@2AEBI32@Z @ 0x1806749B8 (--$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTeleme.c)
 *     ?Dpi@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180674B94 (-Dpi@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowM.c)
 *     ?PreviousDpi@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180674FBC (-PreviousDpi@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@U.c)
 *     ?PreviousWorkArea@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180675000 (-PreviousWorkArea@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventA.c)
 *     ?ShellContext@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x180675068 (-ShellContext@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@.c)
 *     ?State@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x1806750A4 (-State@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindo.c)
 *     ?WindowPhysicalFrame@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x180675274 (-WindowPhysicalFrame@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEve.c)
 *     ?WindowPhysicalFrame@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806752B8 (-WindowPhysicalFrame@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindo_ea_1806752B8.c)
 *     ?WorkArea@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180675300 (-WorkArea@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWi.c)
 */

void __fastcall SnapMigrationHandler::OnWindowMigrationEvent(
        SnapMigrationHandler *this,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *a3)
{
  float *v4; // rax
  float v5; // xmm0_4
  float v6; // xmm1_4
  LONG v7; // ecx
  float *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  LONG v11; // ecx
  float *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  LONG v15; // ecx
  unsigned int v16; // esi
  unsigned int nNumerator; // edi
  const char *v18; // r9
  __int64 v19; // [rsp+40h] [rbp-78h] BYREF
  float v20; // [rsp+48h] [rbp-70h]
  float v21; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v22; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-64h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+70h] [rbp-48h]
  struct tagRECT v27; // [rsp+78h] [rbp-40h] BYREF
  struct tagRECT v28; // [rsp+88h] [rbp-30h] BYREF
  struct tagRECT v29; // [rsp+98h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    v4 = (float *)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowPhysicalFrame();
    v5 = v4[1] + v4[3];
    v6 = *v4 + v4[2];
    v7 = (int)v4[1];
    v29.left = (int)*v4;
    v29.top = v7;
    v29.right = (int)v6;
    v29.bottom = (int)v5;
    v8 = (float *)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::PreviousWorkArea(
                    a3,
                    &v19);
    v9 = v8[1] + v8[3];
    v10 = *v8 + v8[2];
    v11 = (int)v8[1];
    v28.left = (int)*v8;
    v28.top = v11;
    v28.right = (int)v10;
    v28.bottom = (int)v9;
    v12 = (float *)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WorkArea(
                     a3,
                     &v19);
    v13 = v12[1] + v12[3];
    v14 = *v12 + v12[2];
    v15 = (int)v12[1];
    v27.left = (int)*v12;
    v27.top = v15;
    v27.right = (int)v14;
    v27.bottom = (int)v13;
    v16 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::PreviousDpi(a3);
    v23 = v16;
    nNumerator = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::Dpi((__int64 *)a3);
    v22 = nNumerator;
    v24 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3);
    v19 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowId((__int64 *)a3);
    SnapMigrationHandlerTelemetry::WindowMigrationEvent<unsigned __int64,unsigned int,Geometry::CRect const &,Geometry::CRect const &,unsigned int const &,unsigned int const &,Geometry::CRect const &>(
      (unsigned __int64 *)&v19,
      &v24,
      &v28,
      &v27,
      &v23,
      &v22,
      &v29);
    if ( v16 != nNumerator || !Geometry::operator==(&v28, &v27) )
    {
      SnapLayoutHelpers::ComputeMigrationInfo((__int64)&v25, &v29, &v28.left, &v27, nNumerator);
      *(float *)&v19 = (float)v25.left;
      *((float *)&v19 + 1) = (float)v25.top;
      v20 = (float)(v25.right - v25.left);
      v21 = (float)(v25.bottom - v25.top);
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowPhysicalFrame(
        a3,
        &v19);
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::State(
        a3,
        v26);
      v19 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowId((__int64 *)a3);
      SnapMigrationHandlerTelemetry::WindowMigrationAnswer<unsigned __int64,Geometry::CRect const &>(
        (unsigned __int64 *)&v19,
        &v25);
    }
    if ( !(unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3)
      || (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3) == 2 )
    {
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::ShellContext(
        a3,
        2LL);
    }
    else
    {
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::ShellContext(
        a3,
        1LL);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x41,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapmigrationhandler.cpp",
      v18);
  }
}
