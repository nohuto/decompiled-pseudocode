/*
 * XREFs of ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1805BF140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007093C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA56C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18056FECC (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B87A0 (--1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ.c)
 *     _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x1805B8BBC (_lambda_ee4684b34cbbc9b29a5b46cb0674d720_--operator().c)
 *     ?CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z @ 0x1805B9FD0 (-CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z.c)
 *     ?ShouldOverrideShowWindowNoOp@TabletModePositioner@@AEAA_NIPEAUHWND__@@@Z @ 0x1805BEBB8 (-ShouldOverrideShowWindowNoOp@TabletModePositioner@@AEAA_NIPEAUHWND__@@@Z.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1805BFDE4 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1805C01E4 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TabletModePositioner::ShowWindowAttempted(
        TabletModePositioner *this,
        TabletModePositionerHelpers *a2,
        unsigned int a3,
        unsigned int *a4)
{
  TabletModePositioner *v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r13d
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, TabletModePositionerHelpers *, HWND *); // rdi
  struct IApplicationView *v14; // rbx
  unsigned int v15; // edi
  __int64 (__fastcall ***v16)(ApplicationViewHelpers *, GUID *, __int64); // rdx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  HWND v19; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-C8h]
  TabletModePositioner *v22; // [rsp+40h] [rbp-C0h] BYREF
  TabletModePositioner *v23; // [rsp+48h] [rbp-B8h]
  _QWORD v24[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v21 = a3;
  v23 = this;
  v6 = (TabletModePositioner *)((char *)this - 160);
  v8 = 0;
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
  {
    v9 = 2;
    if ( *(_DWORD *)(v7 + 72) != 2 )
    {
      v20 = 0LL;
      v10 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7 + 184);
      v11 = **v10;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
      v11(v10, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &v20);
      v19 = 0LL;
      v12 = v20;
      v13 = *(void (__fastcall **)(__int64, TabletModePositionerHelpers *, HWND *))(*(_QWORD *)v20 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
      v13(v12, a2, &v19);
      v22 = v6;
      v14 = (struct IApplicationView *)v19;
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v24,
        (__int64)"ShowWindowAttempted");
      v24[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
      v15 = v21;
      TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
        (TabletModeTraceLogging::ShowWindowAttempted *)v24,
        v14,
        (HWND)a2,
        v21);
      if ( v19 )
        goto LABEL_24;
      if ( TabletModePositionerHelpers::IsOperableWindow(a2, 0LL) )
      {
        LOWORD(v18) = 257;
        lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()((__int64)&v22, (HWND)a2, &v18, (_BYTE *)&v18 + 1);
        if ( (_BYTE)v18 )
          TabletModePositioner::CloakWindow(v6, (HWND)a2);
        if ( !BYTE1(v18) || !TabletModePositioner::IsTabletMode(v6) )
          v9 = 0;
        *a4 = v9;
        goto LABEL_17;
      }
      if ( v19 )
      {
LABEL_24:
        if ( TabletModePositioner::IsTabletMode(v6)
          && TabletModePositionerHelpers::IsOperableView(v16, (struct IApplicationView *)v16) )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD, HWND))(**((_QWORD **)v23 + 11) + 184LL))(
                  *((_QWORD *)v23 + 11),
                  v19) )
          {
            LOWORD(v18) = 257;
            lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()((__int64)&v22, (HWND)a2, &v18, (_BYTE *)&v18 + 1);
            *a4 = BYTE1(v18) != 0 ? 2 : 0;
            if ( (_BYTE)v18 )
            {
              v17 = (*(__int64 (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)v19 + 96LL))(v19, 1LL, 1LL);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x5C1,
                  (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                  (const char *)(unsigned int)v17);
            }
            goto LABEL_17;
          }
          LOBYTE(v8) = TabletModePositioner::ShouldOverrideShowWindowNoOp(v6, v15, (HWND)a2);
        }
        *a4 = v8;
      }
LABEL_17:
      TabletModeTraceLogging::ShowWindowAttempted::Stop((TabletModeTraceLogging::ShowWindowAttempted *)v24, *a4);
      TabletModeTraceLogging::ShowWindowAttempted::~ShowWindowAttempted((TabletModeTraceLogging::ShowWindowAttempted *)v24);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    }
  }
}
