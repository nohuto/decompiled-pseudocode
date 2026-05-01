/*
 * XREFs of ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804DFDBC (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1804E34E8 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x1804E35F4 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1804E3668 (-_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::PrepareTaggingInfoForApp(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  bool v4; // r15
  __int64 (__fastcall *v9)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v10; // rbx
  int v11; // eax
  struct IApplicationView *v12; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // edi
  __int64 WindowForView; // rax
  __int128 v16; // xmm0
  int v17; // edx
  int v18; // eax
  CAppTransitionTargetBase *v19; // rcx
  unsigned int v20; // edx
  __int64 **v21; // rax
  __int64 *AddressOf; // rax
  int v23; // eax
  int v24; // ebx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v25; // r8
  int v26; // eax
  int v27; // ebx
  struct IUnknown *v29; // [rsp+30h] [rbp-79h] BYREF
  struct IUnknown *v30; // [rsp+38h] [rbp-71h] BYREF
  __int64 v31; // [rsp+40h] [rbp-69h] BYREF
  __int128 v32; // [rsp+50h] [rbp-59h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0;
  *(_QWORD *)&v32 = 4095LL;
  DWORD2(v32) = 0;
  *(_OWORD *)((char *)this + 40) = v32;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  v29 = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v29, &v30);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v10);
  v11 = v9(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10);
  v13 = v11;
  if ( v11 >= 0 )
  {
    v14 = 150994944;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v29,
                      v12);
    if ( WindowForView )
    {
      *((_QWORD *)this + 7) = WindowForView;
      (*(void (__fastcall **)(CLauncherAndDefaultSwitchTransitionTarget *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a3,
        a4);
      if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        v16 = *(_OWORD *)((char *)this + 188);
      else
        v16 = *(_OWORD *)((char *)this + 172);
      *(_OWORD *)((char *)this + 72) = v16;
      v17 = *((_DWORD *)this + 19);
      v18 = *((_DWORD *)this + 18);
      *((_DWORD *)this + 18) = 0;
      *(_OWORD *)((char *)this + 88) = v16;
      *((_DWORD *)this + 21) -= v17;
      *((_DWORD *)this + 19) -= v17;
      *((_DWORD *)this + 20) -= v18;
      MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), (const struct tagRECT *)((char *)this + 88));
      v20 = *((_DWORD *)this + 42);
      if ( v20 == 34 || v20 > 0x37 && (v20 <= 0x39 || v20 == 69) )
      {
        v14 = (*((_DWORD *)this + 39) != 0 ? 151257088 : 150994944) | 0x200000;
        if ( v20 != 57 )
          v14 = *((_DWORD *)this + 39) != 0 ? 151257088 : 150994944;
        if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
          || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        {
          if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
            || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
          {
            if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              *((_DWORD *)this + 10) = 28;
            }
          }
          else
          {
            v26 = 18;
            if ( *((_DWORD *)this + 42) != 34 )
              v26 = 2;
            *((_DWORD *)this + 10) = v26;
          }
        }
        else
        {
          v30 = 0LL;
          v21 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v30, &v31);
          AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v21);
          CLauncherAndDefaultSwitchTransitionTarget::_GetLastActivatedApp(this, (struct IApplicationView **)AddressOf);
          if ( *((_BYTE *)this + 152) )
          {
            v23 = 43;
          }
          else if ( *((_DWORD *)this + 42) != 69 || v30 && (unsigned int)SHIsSameObject(v30, v29) )
          {
            v23 = 19;
            if ( *((_DWORD *)this + 42) != 34 )
              v23 = 3;
          }
          else
          {
            v23 = 4;
          }
          *((_DWORD *)this + 10) = v23;
          v24 = *((_DWORD *)this + 42);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v30);
          v4 = v24 != 57;
        }
        CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v25, 0LL);
      }
      v27 = *((_DWORD *)this + 11) & 0x400000;
      *((_DWORD *)this + 11) = v27 | CAppTransitionTargetBase::_GetDwmTargetFlag(v19, *((HWND *)this + 7), v4, v14);
    }
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
  return v13;
}
