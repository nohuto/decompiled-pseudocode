/*
 * XREFs of ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x18003B230
 * Callers:
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x1802A88F0 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAPEA.c)
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x1802A8910 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@PEAPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180163F10 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IObjectArray **a3,
        struct IObjectArray **a4)
{
  const struct _GUID *v7; // rdx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  const struct _GUID *v11; // rdx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, struct IVirtualDesktop *, __int64 *, char *); // rbx
  int v16; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, __int64 *); // rbx
  int v19; // eax
  __int64 v21; // rsi
  int CurrentDesktopInternal; // eax
  char v23; // r15
  char v24; // di
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-79h]
  void *v29; // [rsp+30h] [rbp-69h] BYREF
  void *v30; // [rsp+38h] [rbp-61h] BYREF
  struct IVirtualDesktop *v31; // [rsp+40h] [rbp-59h] BYREF
  __int64 v32; // [rsp+48h] [rbp-51h] BYREF
  __int64 v33; // [rsp+50h] [rbp-49h] BYREF
  __int64 v34; // [rsp+58h] [rbp-41h] BYREF
  int v35; // [rsp+60h] [rbp-39h] BYREF
  __int64 v36; // [rsp+68h] [rbp-31h] BYREF
  __int64 *v37; // [rsp+70h] [rbp-29h]
  ULONGLONG TickCount64; // [rsp+78h] [rbp-21h] BYREF
  __int64 v39; // [rsp+80h] [rbp-19h] BYREF
  int v40; // [rsp+88h] [rbp-11h]
  int v41; // [rsp+90h] [rbp-9h] BYREF
  __int64 v42; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v43; // [rsp+A0h] [rbp+7h]
  ULONGLONG v44; // [rsp+A8h] [rbp+Fh] BYREF
  PSRWLOCK SRWLock[8]; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  char v47; // [rsp+100h] [rbp+67h] BYREF
  struct IObjectArray **v48; // [rsp+110h] [rbp+77h]

  v48 = a3;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), SRWLock);
  if ( *((_QWORD *)this + 13) )
  {
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    v9 = CEnumerableObjectCollection::CreateInstance(v8, v7, &v30);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x316,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v9,
        v28);
      goto LABEL_16;
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
    v13 = CEnumerableObjectCollection::CreateInstance(v12, v11, &v29);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x319,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v13,
        v28);
      goto LABEL_15;
    }
    v33 = 0LL;
    v14 = *((_QWORD *)this + 16);
    v15 = *(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, __int64 *, char *))(*(_QWORD *)v14 + 40LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
    v16 = v15(v14, a2, &v33, &v47);
    v10 = v16;
    if ( v16 < 0 )
    {
      v25 = 797LL;
    }
    else
    {
      TickCount64 = GetTickCount64();
      if ( !v47
        || !v33
        || (v16 = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v33 + 184LL))(v33, &TickCount64),
            v10 = v16,
            v16 >= 0) )
      {
        v32 = 0LL;
        v17 = *((_QWORD *)this + 13);
        v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
        v19 = v18(v17, &v32);
        v10 = v19;
        if ( v19 < 0 )
        {
          v26 = 806LL;
        }
        else
        {
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
            &v39,
            v32);
          v35 = 0;
          v36 = 0LL;
          v37 = &v39;
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v35);
          v41 = v40;
          v42 = 0LL;
          v43 = &v39;
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v41);
          while ( v35 != v41 || v37 != v43 )
          {
            v21 = v36;
            v34 = v36;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
            v31 = 0LL;
            CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(this, &v31);
            v10 = CurrentDesktopInternal;
            if ( CurrentDesktopInternal < 0 )
            {
              v27 = 811LL;
              goto LABEL_47;
            }
            v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 24LL))(
                    *((_QWORD *)this + 14),
                    v21,
                    v31);
            v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 24LL))(
                    *((_QWORD *)this + 14),
                    v21,
                    a2);
            if ( v47 )
            {
              CurrentDesktopInternal = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v21 + 184LL))(
                                         v21,
                                         &v44);
              v10 = CurrentDesktopInternal;
              if ( CurrentDesktopInternal < 0 )
              {
                v27 = 819LL;
                goto LABEL_47;
              }
              if ( v44 > TickCount64 )
                v24 = 0;
            }
            if ( v23 != v24 )
            {
              if ( v24 )
              {
                CurrentDesktopInternal = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v30 + 40LL))(v30, v21);
                v10 = CurrentDesktopInternal;
                if ( CurrentDesktopInternal < 0 )
                {
                  v27 = 839LL;
LABEL_47:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v27,
                    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                    (const char *)(unsigned int)CurrentDesktopInternal,
                    v28);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v42);
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v36);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
                  goto LABEL_13;
                }
              }
              else
              {
                CurrentDesktopInternal = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v29 + 40LL))(v29, v21);
                v10 = CurrentDesktopInternal;
                if ( CurrentDesktopInternal < 0 )
                {
                  v27 = 843LL;
                  goto LABEL_47;
                }
              }
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
            ++v35;
            details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v35);
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v42);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v36);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
          v19 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v30)(
                  v30,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  v48);
          v10 = v19;
          if ( v19 < 0 )
          {
            v26 = 848LL;
          }
          else
          {
            v19 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v29)(
                    v29,
                    &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                    a4);
            v10 = v19;
            if ( v19 >= 0 )
            {
              v10 = 0;
              goto LABEL_13;
            }
            v26 = 849LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v19,
          v28);
LABEL_13:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
        goto LABEL_14;
      }
      v25 = 802LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v16,
      v28);
LABEL_14:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
LABEL_15:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
LABEL_16:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    goto LABEL_17;
  }
  v10 = -2147417848;
LABEL_17:
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
  return v10;
}
