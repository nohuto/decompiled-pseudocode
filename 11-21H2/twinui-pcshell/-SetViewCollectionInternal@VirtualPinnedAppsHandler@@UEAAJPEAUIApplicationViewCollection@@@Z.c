/*
 * XREFs of ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805578D4 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualPinnedAppsHandler::SetViewCollectionInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationViewCollection *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  struct IApplicationView *v7; // rbx
  struct IApplicationView *v8; // rdx
  VirtualDesktopHelpers *v9; // rcx
  HMONITOR MonitorFromApplicationView; // rsi
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, HMONITOR, __int64 *); // rdi
  int v13; // eax
  _QWORD *v14; // r14
  _QWORD *i; // rsi
  _QWORD *v16; // rdx
  int v17; // eax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-88h] BYREF
  __int64 v22; // [rsp+28h] [rbp-80h] BYREF
  struct IApplicationView *v23; // [rsp+30h] [rbp-78h] BYREF
  __int64 v24; // [rsp+38h] [rbp-70h] BYREF
  int v25; // [rsp+40h] [rbp-68h]
  int v26; // [rsp+48h] [rbp-60h] BYREF
  struct IApplicationView *v27; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v28; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h] BYREF
  __int64 *v31; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char v33; // [rsp+B0h] [rbp+8h] BYREF
  char v34; // [rsp+C0h] [rbp+18h] BYREF
  int v35; // [rsp+C8h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 80, a2);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v21 = 0LL;
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    v5 = v4(v3, &v21);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x101,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v5,
        v21);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      &v24,
      v21);
    v26 = 0;
    v27 = 0LL;
    v28 = &v24;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
    v29 = v25;
    v30 = 0LL;
    v31 = &v24;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v29);
    while ( v26 != v29 || v28 != v31 )
    {
      v7 = v27;
      v23 = v27;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      v22 = 0LL;
      MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v9, v8);
      v11 = *((_QWORD *)this + 6);
      v12 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v11 + 312LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      v13 = v12(v11, MonitorFromApplicationView, &v22);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x106,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v13,
          v21);
      v14 = (_QWORD *)*((_QWORD *)this + 13);
      for ( i = (_QWORD *)*((_QWORD *)this + 12); i != v14; i += 4 )
      {
        v16 = i;
        if ( i[3] >= 8uLL )
          v16 = (_QWORD *)*i;
        v17 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)v23 + 152LL))(
                v23,
                v16,
                &v35);
        if ( v17 >= 0 )
        {
          if ( v35 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(**((_QWORD **)this + 8)
                                                                                               + 120LL))(
                    *((_QWORD *)this + 8),
                    v7,
                    &v33)
              || !v33 )
            {
              v18 = VirtualPinnedAppsHandler::PinViewInternal(this, v7, 1);
              v19 = retaddr;
              if ( v18 < 0 )
              {
                v20 = 275LL;
LABEL_27:
                wil::details::in1diag3::_Log_Hr(
                  v19,
                  (void *)v20,
                  (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                  (const char *)(unsigned int)v18);
                goto LABEL_28;
              }
            }
            goto LABEL_28;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x10D,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v17);
        }
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(**((_QWORD **)this + 8) + 120LL))(
             *((_QWORD *)this + 8),
             v7,
             &v34) )
      {
        if ( v34 )
        {
          v18 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
                  this,
                  v7,
                  v22);
          v19 = retaddr;
          if ( v18 < 0 )
          {
            v20 = 283LL;
            goto LABEL_27;
          }
        }
      }
LABEL_28:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
      ++v26;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  }
  return 0LL;
}
