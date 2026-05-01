/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CC390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3191f22cac41f41d34f0b7ce6d91de45___ @ 0x1801D83B8 (ShellPositionerHelpers--PerformCallbackOnView__lambda_3191f22cac41f41d34f0b7ce6d91de45___.c)
 *     wil::details::lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___::_lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___ @ 0x1801D8998 (wil--details--lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___--_lambda_call__lambda_1e65.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  char *v3; // rdi
  void (__fastcall *v4)(char *, GUID *, IUnknown **); // rbx
  int v5; // ebx
  struct IApplicationView **v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  struct IApplicationView *v10; // [rsp+68h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+38h] BYREF
  struct IApplicationView **v12; // [rsp+78h] [rbp+40h] BYREF

  v10 = a2;
  v7 = &v10;
  v8 = 1;
  v12 = &v10;
  v3 = (char *)this - 120;
  punk = 0LL;
  v4 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 15) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v4(v3, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v5 = ShellPositionerHelpers::PerformCallbackOnView__lambda_3191f22cac41f41d34f0b7ce6d91de45___(
         punk,
         (__int64)a2,
         (__int64 *)&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v5 >= 0 )
  {
    v8 = 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DA,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::details::lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___::_lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___(&v7);
  return (unsigned int)v5;
}
