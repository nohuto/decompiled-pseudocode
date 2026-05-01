/*
 * XREFs of _lambda_62276dcc8956575ffb6d344da47e5bef_::operator() @ 0x180393560
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180397220 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C (-InternalRelease@-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_62276dcc8956575ffb6d344da47e5bef_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  HMONITOR v6; // rsi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HMONITOR, GUID *, GUID *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v2 = *(_QWORD *)(*a1 + 376LL);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  v4 = v3(v2, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = MonitorFromRect((LPCRECT)(*a1 + 392LL), 1u);
    v13 = 0LL;
    v7 = v14;
    v8 = *(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, __int64 *))(*(_QWORD *)v14 + 72LL);
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease(&v13);
    v9 = v8(v7, v6, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, &v13);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, a1[1]);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v10 = 902LL;
    }
    else
    {
      v10 = 901LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease(&v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37F,
    (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  return v5;
}
