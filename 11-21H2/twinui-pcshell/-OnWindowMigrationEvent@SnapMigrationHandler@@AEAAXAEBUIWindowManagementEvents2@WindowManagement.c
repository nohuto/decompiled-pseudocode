/*
 * XREFs of ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805A8590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?MigrationReason@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x18058AD38 (-MigrationReason@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventAr.c)
 *     ?WindowId@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_KXZ @ 0x18058BAD4 (-WindowId@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWi.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805A1DC4 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ??$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRect@Geometry@@@Z @ 0x1805A81A0 (--$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRe.c)
 *     ??$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTelemetry@@SAX$$QEA_K$$QEAIAEBUCRect@Geometry@@2AEBI32@Z @ 0x1805A8250 (--$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTeleme.c)
 *     ?Dpi@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x1805A8448 (-Dpi@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowM.c)
 *     ?PreviousDpi@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x1805A88C4 (-PreviousDpi@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@U.c)
 *     ?PreviousWorkArea@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AURect@Foundation@Windows@3@XZ @ 0x1805A8908 (-PreviousWorkArea@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventA.c)
 *     ?WindowPhysicalFrame@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AURect@Foundation@Windows@3@XZ @ 0x1805A8B00 (-WindowPhysicalFrame@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEve.c)
 *     ?WindowPhysicalFrame@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBURect@Foundation@Windows@3@@Z @ 0x1805A8B48 (-WindowPhysicalFrame@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindo_ea_1805A8B48.c)
 *     ?WorkArea@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AURect@Foundation@Windows@3@XZ @ 0x1805A8B8C (-WorkArea@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWi.c)
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
  signed int v18; // eax
  signed int v19; // eax
  const char *v20; // r9
  signed int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-78h] BYREF
  float v23; // [rsp+48h] [rbp-70h]
  float v24; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v25; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-64h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v28; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+70h] [rbp-48h]
  struct tagRECT v30; // [rsp+78h] [rbp-40h] BYREF
  struct tagRECT v31; // [rsp+88h] [rbp-30h] BYREF
  struct tagRECT v32; // [rsp+98h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    v4 = (float *)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowPhysicalFrame();
    v5 = v4[1] + v4[3];
    v6 = *v4 + v4[2];
    v7 = (int)v4[1];
    v32.left = (int)*v4;
    v32.top = v7;
    v32.right = (int)v6;
    v32.bottom = (int)v5;
    v8 = (float *)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::PreviousWorkArea(
                    a3,
                    &v22);
    v9 = v8[1] + v8[3];
    v10 = *v8 + v8[2];
    v11 = (int)v8[1];
    v31.left = (int)*v8;
    v31.top = v11;
    v31.right = (int)v10;
    v31.bottom = (int)v9;
    v12 = (float *)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WorkArea(
                     a3,
                     &v22);
    v13 = v12[1] + v12[3];
    v14 = *v12 + v12[2];
    v15 = (int)v12[1];
    v30.left = (int)*v12;
    v30.top = v15;
    v30.right = (int)v14;
    v30.bottom = (int)v13;
    v16 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::PreviousDpi(a3);
    v26 = v16;
    nNumerator = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::Dpi((__int64 *)a3);
    v25 = nNumerator;
    v27 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3);
    v22 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowId((__int64 *)a3);
    SnapMigrationHandlerTelemetry::WindowMigrationEvent<unsigned __int64,unsigned int,Geometry::CRect const &,Geometry::CRect const &,unsigned int const &,unsigned int const &,Geometry::CRect const &>(
      (unsigned __int64 *)&v22,
      &v27,
      &v31,
      &v30,
      &v26,
      &v25,
      &v32);
    if ( v16 != nNumerator || !Geometry::operator==(&v31, &v30) )
    {
      SnapLayoutHelpers::ComputeMigrationInfo((__int64)&v28, &v32, &v31, &v30, nNumerator);
      *(float *)&v22 = (float)v28.left;
      *((float *)&v22 + 1) = (float)v28.top;
      v23 = (float)(v28.right - v28.left);
      v24 = (float)(v28.bottom - v28.top);
      winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowPhysicalFrame(
        a3,
        &v22);
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a3 + 120LL))(*(_QWORD *)a3, v29);
      if ( v18 < 0 )
        winrt::throw_hresult(v18);
      v22 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowId((__int64 *)a3);
      SnapMigrationHandlerTelemetry::WindowMigrationAnswer<unsigned __int64,Geometry::CRect const &>(
        (unsigned __int64 *)&v22,
        &v28);
    }
    if ( !(unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3)
      || (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3) == 2 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a3 + 136LL))(*(_QWORD *)a3, 2LL);
      if ( v21 < 0 )
        winrt::throw_hresult(v21);
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a3 + 136LL))(*(_QWORD *)a3, 1LL);
      if ( v19 < 0 )
        winrt::throw_hresult(v19);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x41,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapmigrationhandler.cpp",
      v20);
  }
}
