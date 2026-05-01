/*
 * XREFs of ?DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180542160
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x180037170 (-GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopForegroundPolicy::DesktopChanged(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktop *a2)
{
  __int64 *AddressOf; // rax
  int NewForegroundViewForDesktopSwitch; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v11);
  NewForegroundViewForDesktopSwitch = CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch(
                                        this,
                                        a2,
                                        (struct IApplicationView **)AddressOf,
                                        &v10);
  v6 = NewForegroundViewForDesktopSwitch;
  if ( NewForegroundViewForDesktopSwitch < 0 )
  {
    v7 = 43LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)NewForegroundViewForDesktopSwitch);
    goto LABEL_11;
  }
  if ( !v10 )
  {
    v6 = 0;
    goto LABEL_11;
  }
  if ( v11 )
  {
    NewForegroundViewForDesktopSwitch = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
    v6 = NewForegroundViewForDesktopSwitch;
    if ( NewForegroundViewForDesktopSwitch < 0 )
    {
      v7 = 49LL;
      goto LABEL_9;
    }
  }
  else
  {
    NewForegroundViewForDesktopSwitch = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 24LL))(*((_QWORD *)this + 4));
    v6 = NewForegroundViewForDesktopSwitch;
    if ( NewForegroundViewForDesktopSwitch < 0 )
    {
      v7 = 53LL;
      goto LABEL_9;
    }
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  return v6;
}
