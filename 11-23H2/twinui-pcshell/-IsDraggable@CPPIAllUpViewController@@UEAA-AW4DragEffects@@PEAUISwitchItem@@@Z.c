/*
 * XREFs of ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x180570260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPPIAllUpViewController::IsDraggable(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  unsigned int v3; // esi
  char v4; // bp
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 (__fastcall ****v7)(ApplicationViewHelpers *, GUID *, __int64); // rax
  struct IApplicationView *v8; // rdx
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v12 = 0LL;
  v10[0] = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  v6 = v5(a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v12);
  if ( v6 >= 0 )
  {
    v7 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(
                                                                                 v12,
                                                                                 &v13);
    v4 = 1;
    if ( TabletModePositionerHelpers::IsOperableView(*v7, v8) )
      v3 = 2;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewcontroller.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v3;
}
