/*
 * XREFs of _lambda_7bcbf056061a51ef99db996275205d7a_::operator() @ 0x180367F84
 * Callers:
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18036A5A8 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C (-InternalRelease@-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7bcbf056061a51ef99db996275205d7a_::operator()(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, SID *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  HMONITOR v9; // rsi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HMONITOR, GUID *, GUID *, int *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v15[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  RECT rc; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v16 = 0LL;
  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 328LL);
  v4 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  v5 = v4(v3, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    rc.left = (int)*(float *)(v2 + 320);
    rc.top = (int)*(float *)(v2 + 324);
    rc.right = (int)*(float *)(v2 + 320);
    rc.bottom = (int)*(float *)(v2 + 324);
    v9 = MonitorFromRect(&rc, 0);
    if ( !v9 )
    {
      v6 = -2147418113;
      v7 = 2147549183LL;
      v8 = 769LL;
      goto LABEL_5;
    }
    *(_QWORD *)v15 = 0LL;
    v10 = v16;
    v11 = *(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, int *))(*(_QWORD *)v16 + 72LL);
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((__int64 *)v15);
    v12 = v11(v10, v9, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, v15);
    v6 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v15 + 72LL))(*(_QWORD *)v15, a1[1]);
      v6 = v12;
      if ( v12 >= 0 )
      {
        v6 = 0;
        goto LABEL_12;
      }
      v13 = 773LL;
    }
    else
    {
      v13 = 772LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_12:
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((__int64 *)v15);
    goto LABEL_13;
  }
  v7 = (unsigned int)v5;
  v8 = 763LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)v7);
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  return v6;
}
