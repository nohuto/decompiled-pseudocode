/*
 * XREFs of ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x180597C8C (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x18059B3D8 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x18059B4E4 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x18059B558 (-_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::PrepareTaggingInfoForApp(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  bool v4; // r12
  __int64 (__fastcall *v9)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v10; // rbx
  int v11; // eax
  struct IApplicationView *v12; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // edi
  __int64 WindowForView; // rax
  _OWORD *v16; // rbx
  __int128 v17; // xmm0
  int v18; // edx
  int v19; // eax
  CAppTransitionTargetBase *v20; // rcx
  __int64 *v21; // rbx
  int v22; // eax
  int v23; // ebx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v24; // r8
  int v25; // eax
  int v26; // ebx
  struct IUnknown *v28; // [rsp+30h] [rbp-79h] BYREF
  struct IUnknown *v29; // [rsp+38h] [rbp-71h] BYREF
  __int64 v30; // [rsp+40h] [rbp-69h] BYREF
  __int128 v31; // [rsp+50h] [rbp-59h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0;
  *(_QWORD *)&v31 = 4095LL;
  DWORD2(v31) = 0;
  *(_OWORD *)((char *)this + 40) = v31;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  v28 = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v28, &v29);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v10);
  v11 = v9(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10);
  v13 = v11;
  if ( v11 >= 0 )
  {
    v14 = 150994944;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v28,
                      v12);
    if ( WindowForView )
    {
      *((_QWORD *)this + 7) = WindowForView;
      (*(void (__fastcall **)(CLauncherAndDefaultSwitchTransitionTarget *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a3,
        a4);
      v16 = (_OWORD *)((char *)this + 72);
      if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        v17 = *(_OWORD *)((char *)this + 188);
      else
        v17 = *(_OWORD *)((char *)this + 172);
      *v16 = v17;
      v18 = *((_DWORD *)this + 19);
      v19 = *(_DWORD *)v16;
      *(_OWORD *)((char *)this + 88) = v17;
      *((_DWORD *)this + 21) -= v18;
      *((_DWORD *)this + 19) -= v18;
      *(_DWORD *)v16 = 0;
      *((_DWORD *)this + 20) -= v19;
      MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), (const struct tagRECT *)((char *)this + 88));
      if ( *((_DWORD *)this + 42) == 34
        || *((_DWORD *)this + 42) == 56
        || *((_DWORD *)this + 42) == 57
        || *((_DWORD *)this + 42) == 69 )
      {
        v14 = (*((_DWORD *)this + 39) != 0 ? 151257088 : 150994944) | 0x200000;
        if ( *((_DWORD *)this + 42) != 57 )
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
            v25 = 18;
            if ( *((_DWORD *)this + 42) != 34 )
              v25 = 2;
            *((_DWORD *)this + 10) = v25;
          }
        }
        else
        {
          v29 = 0LL;
          v21 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v29, &v30);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v21);
          CLauncherAndDefaultSwitchTransitionTarget::_GetLastActivatedApp(this, (struct IApplicationView **)v21);
          if ( *((_BYTE *)this + 152) )
          {
            v22 = 43;
          }
          else if ( *((_DWORD *)this + 42) != 69 || v29 && (unsigned int)SHIsSameObject(v29, v28) )
          {
            v22 = 19;
            if ( *((_DWORD *)this + 42) != 34 )
              v22 = 3;
          }
          else
          {
            v22 = 4;
          }
          *((_DWORD *)this + 10) = v22;
          v23 = *((_DWORD *)this + 42);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
          v4 = v23 != 57;
        }
        CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v24, 0LL);
      }
      v26 = *((_DWORD *)this + 11) & 0x400000;
      *((_DWORD *)this + 11) = v26 | CAppTransitionTargetBase::_GetDwmTargetFlag(v20, *((HWND *)this + 7), v4, v14);
    }
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v28);
  return v13;
}
