/*
 * XREFs of ?ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804ED380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EE358 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

__int64 __fastcall SurfaceHubPositioner::ControlGainedForActivation(
        PositionerPropertySetHelpers *a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IApplicationView *a4)
{
  int DetailsForActivation; // ebx
  __int64 v7; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)a1 + 464) )
  {
    DetailsForActivation = -2147418113;
    v7 = 306LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    return (unsigned int)DetailsForActivation;
  }
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(a1, a4, &v11, 0LL);
  if ( DetailsForActivation < 0 )
  {
    v7 = 309LL;
    goto LABEL_3;
  }
  if ( ((__int64)v11.lpVtbl & 1) == 0 && ((__int64)v11.lpVtbl & 2) == 0 )
  {
    DetailsForActivation = SurfaceHubPositioner::_SetDefaultLayout(
                             (PositionerPropertySetHelpers *)((char *)a1 - 112),
                             a2,
                             0);
    if ( DetailsForActivation < 0 )
    {
      v7 = 319LL;
      goto LABEL_3;
    }
    DetailsForActivation = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(
                             a2,
                             0LL);
    if ( DetailsForActivation < 0 )
    {
      v7 = 322LL;
      goto LABEL_3;
    }
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x146,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v9);
  }
  return 0LL;
}
