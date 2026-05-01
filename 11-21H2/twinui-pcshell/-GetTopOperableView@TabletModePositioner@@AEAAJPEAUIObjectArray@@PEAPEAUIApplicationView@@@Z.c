/*
 * XREFs of ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x180504234
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x180509670 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewOnDesktop@TabletModePositioner@@AEAA_NPEAUIVirtualDesktop@@PEAUIApplicationView@@@Z @ 0x180505488 (-IsViewOnDesktop@TabletModePositioner@@AEAA_NPEAUIVirtualDesktop@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModePositioner::GetTopOperableView(
        TabletModePositioner *this,
        struct IObjectArray *a2,
        struct IApplicationView **a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, struct IVirtualDesktop **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct IApplicationView *v9; // rbx
  struct IApplicationView *v10; // rdx
  int v11; // eax
  int (__fastcall *v12)(struct IApplicationView *, GUID *, __int64 *); // rdi
  TabletModePositionerHelpers *v14; // [rsp+20h] [rbp-50h] BYREF
  struct IVirtualDesktop *v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-38h]
  unsigned int v18; // [rsp+40h] [rbp-30h] BYREF
  TabletModePositionerHelpers *v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-20h]
  unsigned int v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-8h]
  TabletModePositioner *retaddr; // [rsp+98h] [rbp+28h]
  int v25; // [rsp+A0h] [rbp+30h] BYREF
  int v26; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v5 = *((_QWORD *)this + 47);
  if ( !v5
    || (v6 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IVirtualDesktop **))(*(_QWORD *)v5 + 48LL),
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15),
        v7 = v6(v5, 0LL, &v15),
        v8 = v7,
        v7 >= 0) )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v16,
      (__int64)a2);
    v18 = 0;
    v19 = 0LL;
    v20 = &v16;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    v21 = v17;
    v22 = 0LL;
    v23 = &v16;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
    while ( 1 )
    {
      if ( v18 == v21 && v20 == v23 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        v8 = -2147023728;
        goto LABEL_19;
      }
      v9 = v19;
      v14 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      if ( TabletModePositionerHelpers::IsOperableView(
             (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v9,
             v10) )
      {
        v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v9 + 88LL))(v9, &v25);
        if ( v11 >= 0 )
        {
          if ( v25 && TabletModePositioner::IsViewOnDesktop(retaddr, v15, v9) )
          {
            v27 = 0LL;
            v12 = *(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v9 + 104LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
            if ( v12(v9, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v27) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 32LL))(v27, &v26) >= 0
              && v26 != 1 )
            {
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
              *a3 = v9;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
              v8 = 0;
              goto LABEL_19;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x903,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
      ++v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8FB,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_19:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  return v8;
}
