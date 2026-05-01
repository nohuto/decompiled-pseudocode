/*
 * XREFs of ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x1805036B8
 * Callers:
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x180507348 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x180503298 (-GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeTraceLogging::GetAppLayoutOperationData(
        struct IAppLayoutOperation *a1,
        struct TabletModeTraceLogging::AppLayoutOperationData *a2)
{
  __int64 (__fastcall *v4)(struct IAppLayoutOperation *, struct IAppLayout **); // rbx
  int AppLayoutData; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(struct IAppLayoutOperation *, struct IAppLayout **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAppLayout *v13; // [rsp+30h] [rbp+8h] BYREF
  struct IAppLayout *v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IAppLayout **))(*(_QWORD *)a1 + 40LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  AppLayoutData = v4(a1, &v14);
  v6 = AppLayoutData;
  if ( AppLayoutData >= 0 )
  {
    AppLayoutData = TabletModeTraceLogging::GetAppLayoutData(v14, a2);
    v6 = AppLayoutData;
    if ( AppLayoutData < 0 )
    {
      v7 = 451LL;
      goto LABEL_5;
    }
    v13 = 0LL;
    v8 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IAppLayout **))(*(_QWORD *)a1 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    v9 = v8(a1, &v13);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = TabletModeTraceLogging::GetAppLayoutData(
             v13,
             (struct TabletModeTraceLogging::AppLayoutOperationData *)((char *)a2 + 120));
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = 0;
        goto LABEL_12;
      }
      v10 = 455LL;
    }
    else
    {
      v10 = 454LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)v9);
LABEL_12:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    goto LABEL_13;
  }
  v7 = 450LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)AppLayoutData);
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  return v6;
}
