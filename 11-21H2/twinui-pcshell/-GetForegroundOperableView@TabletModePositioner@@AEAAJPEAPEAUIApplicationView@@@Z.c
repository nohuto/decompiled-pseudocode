/*
 * XREFs of ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x180503A48
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x180509670 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::GetForegroundOperableView(
        TabletModePositioner *this,
        struct IApplicationView **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IApplicationView *v6; // rdx
  int v7; // ebx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  TabletModePositionerHelpers *v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v3 = *((_QWORD *)this + 42);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 72LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v12);
  v7 = v4(v3, AddressOf);
  if ( v7 >= 0 )
  {
    if ( TabletModePositionerHelpers::IsOperableView(
           (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v12,
           v6) )
    {
      v8 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, int *))(*(_QWORD *)v12 + 88LL))(v12, &v11);
      v7 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8EC,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_8;
      }
      if ( v11 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
        *a2 = v12;
        v7 = 0;
        goto LABEL_8;
      }
    }
    v7 = -2147023728;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v7;
}
