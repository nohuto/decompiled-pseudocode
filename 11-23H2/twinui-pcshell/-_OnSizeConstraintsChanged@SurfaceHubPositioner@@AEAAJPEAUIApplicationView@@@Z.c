/*
 * XREFs of ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805A5CD4
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18017AC40 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1805A5760 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1805A5BF4 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_OnSizeConstraintsChanged(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  LONG v14; // edx
  LONG v15; // eax
  LONG v16; // r8d
  bool v17; // [rsp+30h] [rbp-50h] BYREF
  LONG v18; // [rsp+38h] [rbp-48h] BYREF
  LONG v19; // [rsp+3Ch] [rbp-44h]
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v22; // [rsp+50h] [rbp-30h]
  char v23[8]; // [rsp+58h] [rbp-28h] BYREF
  int v24; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+64h] [rbp-1Ch]
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  IsViewManaged = SurfaceHubPositioner::_IsViewManaged(this, a2, &v17);
  v5 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !v17 )
      return 0LL;
    v21 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v21);
    v9 = v7(a2, AddressOf);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 604LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v9);
LABEL_25:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      return v5;
    }
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, LONG *, char *))(*(_QWORD *)a2 + 280LL))(
           a2,
           v21,
           &v18,
           v23);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 608LL;
      goto LABEL_9;
    }
    v20 = 0LL;
    v11 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    v12 = v11(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v20);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 24LL))(v20, &v24);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v14 = v27 - v25;
        v15 = v26 - v24;
        if ( v18 > v26 - v24 )
          v15 = v18;
        v22.cx = v15;
        v16 = v27 - v25;
        if ( v19 > v14 )
          v16 = v19;
        v22.cy = v16;
        if ( v15 == v26 - v24 && v16 == v14
          || (v12 = SurfaceHubPositioner::ResizeView((SurfaceHubPositioner *)((char *)this + 104), a2, v22, v22),
              v5 = v12,
              v12 >= 0) )
        {
          v5 = 0;
          goto LABEL_24;
        }
        v13 = 622LL;
      }
      else
      {
        v13 = 614LL;
      }
    }
    else
    {
      v13 = 611LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v12);
LABEL_24:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x258,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)IsViewManaged);
  return v5;
}
