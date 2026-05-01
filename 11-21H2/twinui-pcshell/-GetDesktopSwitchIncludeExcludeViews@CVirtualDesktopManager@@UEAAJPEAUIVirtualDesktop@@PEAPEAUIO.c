/*
 * XREFs of ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x1800553A0
 * Callers:
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x18020CA20 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IObjectArray **a3,
        struct IObjectArray **a4)
{
  const struct _GUID *v6; // rdx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // esi
  const struct _GUID *v10; // rdx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, struct IVirtualDesktop *, __int64 *, char *); // rbx
  __int64 *AddressOf; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, __int64 *); // rbx
  int v19; // eax
  __int64 v20; // rbx
  struct IApplicationView *v21; // rdx
  VirtualDesktopHelpers *v22; // rcx
  HMONITOR MonitorFromApplicationView; // rax
  int CurrentDesktopInternal; // eax
  struct IVirtualDesktop *v25; // rdi
  char v26; // r12
  char v27; // r14
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // [rsp+28h] [rbp-79h]
  void *v33; // [rsp+38h] [rbp-69h] BYREF
  void *v34; // [rsp+40h] [rbp-61h] BYREF
  __int64 v35; // [rsp+48h] [rbp-59h] BYREF
  struct IVirtualDesktop *v36; // [rsp+50h] [rbp-51h] BYREF
  __int64 v37; // [rsp+58h] [rbp-49h] BYREF
  __int64 v38; // [rsp+60h] [rbp-41h] BYREF
  int v39; // [rsp+68h] [rbp-39h] BYREF
  __int64 v40; // [rsp+70h] [rbp-31h] BYREF
  __int64 *v41; // [rsp+78h] [rbp-29h]
  ULONGLONG TickCount64; // [rsp+80h] [rbp-21h] BYREF
  __int64 v43; // [rsp+88h] [rbp-19h] BYREF
  int v44; // [rsp+90h] [rbp-11h]
  int v45; // [rsp+98h] [rbp-9h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-1h] BYREF
  __int64 *v47; // [rsp+A8h] [rbp+7h]
  ULONGLONG v48; // [rsp+B0h] [rbp+Fh] BYREF
  PSRWLOCK SRWLock[8]; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  char v51; // [rsp+108h] [rbp+67h] BYREF
  struct IObjectArray **v52; // [rsp+118h] [rbp+77h]
  struct IObjectArray **v53; // [rsp+120h] [rbp+7Fh]

  v53 = a4;
  v52 = a3;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), SRWLock);
  if ( *((_QWORD *)this + 12) )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
    v8 = CEnumerableObjectCollection::CreateInstance(v7, v6, &v34);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25B,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v8,
        v32);
      goto LABEL_22;
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
    v12 = CEnumerableObjectCollection::CreateInstance(v11, v10, &v33);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25E,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v12,
        v32);
      goto LABEL_21;
    }
    v38 = 0LL;
    v13 = *((_QWORD *)this + 15);
    v14 = *(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, __int64 *, char *))(*(_QWORD *)v13 + 40LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v38);
    v16 = v14(v13, a2, AddressOf, &v51);
    v9 = v16;
    if ( v16 < 0 )
    {
      v29 = 610LL;
    }
    else
    {
      TickCount64 = GetTickCount64();
      if ( !v51
        || !v38
        || (v16 = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v38 + 184LL))(v38, &TickCount64),
            v9 = v16,
            v16 >= 0) )
      {
        v35 = 0LL;
        v17 = *((_QWORD *)this + 12);
        v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
        v19 = v18(v17, &v35);
        v9 = v19;
        if ( v19 < 0 )
        {
          v30 = 619LL;
        }
        else
        {
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
            &v43,
            v35);
          v39 = 0;
          v40 = 0LL;
          v41 = &v43;
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v39);
          v45 = v44;
          v46 = 0LL;
          v47 = &v43;
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v45);
          while ( v39 != v45 || v41 != v47 )
          {
            v20 = v40;
            v37 = v40;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v37);
            MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v22, v21);
            v36 = 0LL;
            CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                                       this,
                                       MonitorFromApplicationView,
                                       &v36);
            v9 = CurrentDesktopInternal;
            if ( CurrentDesktopInternal < 0 )
            {
              v31 = 625LL;
              goto LABEL_49;
            }
            v25 = v36;
            v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 13) + 24LL))(
                    *((_QWORD *)this + 13),
                    v20,
                    v36);
            v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 13) + 24LL))(
                    *((_QWORD *)this + 13),
                    v20,
                    a2);
            if ( v51 )
            {
              CurrentDesktopInternal = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v20 + 184LL))(
                                         v20,
                                         &v48);
              v9 = CurrentDesktopInternal;
              if ( CurrentDesktopInternal < 0 )
              {
                v31 = 633LL;
                goto LABEL_49;
              }
              if ( v48 > TickCount64 )
                v27 = 0;
            }
            if ( v26 != v27 )
            {
              if ( v27 )
              {
                CurrentDesktopInternal = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 40LL))(v34, v20);
                v9 = CurrentDesktopInternal;
                if ( CurrentDesktopInternal < 0 )
                {
                  v31 = 653LL;
LABEL_49:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v31,
                    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                    (const char *)(unsigned int)CurrentDesktopInternal,
                    v32);
                  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v36);
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v37);
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v46);
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v40);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
                  goto LABEL_19;
                }
              }
              else
              {
                CurrentDesktopInternal = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v33 + 40LL))(v33, v20);
                v9 = CurrentDesktopInternal;
                if ( CurrentDesktopInternal < 0 )
                {
                  v31 = 657LL;
                  goto LABEL_49;
                }
              }
            }
            if ( v25 )
              (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v25 + 16LL))(v25);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v37);
            ++v39;
            details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v39);
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v46);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v40);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
          v19 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v34)(
                  v34,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  v52);
          v9 = v19;
          if ( v19 < 0 )
          {
            v30 = 662LL;
          }
          else
          {
            v19 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v33)(
                    v33,
                    &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                    v53);
            v9 = v19;
            if ( v19 >= 0 )
            {
              v9 = 0;
              goto LABEL_19;
            }
            v30 = 663LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v19,
          v32);
LABEL_19:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
        goto LABEL_20;
      }
      v29 = 615LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v16,
      v32);
LABEL_20:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v38);
LABEL_21:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
LABEL_22:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
    goto LABEL_23;
  }
  v9 = -2147417848;
LABEL_23:
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
  return v9;
}
