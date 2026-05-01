/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180310A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_b5b57993037fc12f38ba60be13c6908e___ @ 0x18030EFE0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_b5b57993037fc12f38ba60be13c6908e___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  char v3; // r14
  char *v4; // rdi
  void (__fastcall *v5)(char *, GUID *, IUnknown **); // rbx
  int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IApplicationView *v10; // [rsp+68h] [rbp+38h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationView **v12; // [rsp+78h] [rbp+48h] BYREF

  v10 = a2;
  v3 = 1;
  v12 = &v10;
  v4 = (char *)this - 120;
  punk = 0LL;
  v5 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 15) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v5(v4, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_b5b57993037fc12f38ba60be13c6908e___(
         punk,
         (__int64)a2,
         (__int64 *)&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v6 >= 0 )
  {
    v6 = 0;
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v3 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 56LL))(v10);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2CC,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  return (unsigned int)v6;
}
