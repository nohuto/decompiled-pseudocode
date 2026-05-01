/*
 * XREFs of ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1801574D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18004157C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C40C0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@@YA_NPEAUHWND__@@@Z @ 0x1804B36F8 (-IsOperableWindow@@YA_NPEAUHWND__@@@Z.c)
 *     ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFFE4 (--1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ.c)
 *     _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x1805003F8 (_lambda_ee4684b34cbbc9b29a5b46cb0674d720_--operator().c)
 *     ?CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z @ 0x18050180C (-CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z.c)
 *     ?ShouldOverrideShowWindowNoOp@TabletModePositioner@@AEAA_NIPEAUHWND__@@@Z @ 0x180506978 (-ShouldOverrideShowWindowNoOp@TabletModePositioner@@AEAA_NIPEAUHWND__@@@Z.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1805078B8 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x180507CD0 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TabletModePositioner::ShowWindowAttempted(
        TabletModePositioner *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4)
{
  TabletModePositioner *v7; // r12
  unsigned int v8; // esi
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, HWND, __int64 *); // rdi
  __int64 *AddressOf; // rax
  struct IApplicationView *v14; // rbx
  unsigned int v15; // edi
  bool v16; // zf
  unsigned int v17; // eax
  TabletModePositionerHelpers *v18; // rdx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v21; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-C8h]
  _QWORD v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v23 = a3;
  v7 = (TabletModePositioner *)((char *)this - 160);
  if ( *((_QWORD *)this + 9) == 0x100000001LL )
  {
    v8 = 0;
    v22 = 0LL;
    v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 23);
    v10 = **v9;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    v10(v9, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &v22);
    v21 = 0LL;
    v11 = v22;
    v12 = *(void (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v22 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v21);
    v12(v11, a2, AddressOf);
    v24[0] = v7;
    v14 = v21;
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v25,
      (__int64)"ShowWindowAttempted");
    v25[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
    v15 = v23;
    TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
      (TabletModeTraceLogging::ShowWindowAttempted *)v25,
      v14,
      a2,
      v23);
    if ( v21 )
      goto LABEL_22;
    if ( IsOperableWindow(a2) )
    {
      LOWORD(v20) = 257;
      lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(v24, a2, &v20, (char *)&v20 + 1);
      if ( (_BYTE)v20 )
        TabletModePositioner::CloakWindow(v7, a2);
      if ( !BYTE1(v20) || (v16 = !TabletModePositioner::IsTabletMode(v7), v17 = 2, v16) )
        v17 = 0;
      *a4 = v17;
      goto LABEL_16;
    }
    if ( v21 )
    {
LABEL_22:
      if ( TabletModePositioner::IsTabletMode(v7) && TabletModePositionerHelpers::IsOperableView(v18, v18) )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 11) + 184LL))(
                *((_QWORD *)this + 11),
                v21) )
        {
          LOWORD(v20) = 257;
          lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(v24, a2, &v20, (char *)&v20 + 1);
          *a4 = BYTE1(v20) != 0 ? 2 : 0;
          if ( (_BYTE)v20 )
          {
            v19 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64))(*(_QWORD *)v21 + 96LL))(
                    v21,
                    1LL,
                    1LL);
            if ( v19 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x5C1,
                (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                (const char *)(unsigned int)v19);
          }
          goto LABEL_16;
        }
        LOBYTE(v8) = TabletModePositioner::ShouldOverrideShowWindowNoOp(v7, v15, a2);
      }
      *a4 = v8;
    }
LABEL_16:
    TabletModeTraceLogging::ShowWindowAttempted::Stop((TabletModeTraceLogging::ShowWindowAttempted *)v25, *a4);
    TabletModeTraceLogging::ShowWindowAttempted::~ShowWindowAttempted((TabletModeTraceLogging::ShowWindowAttempted *)v25);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  }
}
