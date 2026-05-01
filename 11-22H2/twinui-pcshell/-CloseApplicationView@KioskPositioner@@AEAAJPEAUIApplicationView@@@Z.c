/*
 * XREFs of ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805A78D4
 * Callers:
 *     ?HandleRecoveryForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805A8750 (-HandleRecoveryForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18000BF8C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KioskPositioner::CloseApplicationView(KioskPositioner *this, struct IApplicationView *a2)
{
  void (__fastcall *v4)(KioskPositioner *, GUID *, IUnknown **); // rbx
  HRESULT v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  IUnknown *punk; // [rsp+60h] [rbp+18h] BYREF
  void *ppvOut; // [rsp+68h] [rbp+20h] BYREF

  ppvOut = 0LL;
  punk = 0LL;
  v4 = *(void (__fastcall **)(KioskPositioner *, GUID *, IUnknown **))(*(_QWORD *)this + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v4(this, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v5 = IUnknown_QueryService(punk, &stru_18089E9B8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v5 >= 0 )
  {
    v8 = ApplicationViewHelpers::CloseView(
           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))a2,
           (__int64)ppvOut,
           10,
           1,
           13);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = (unsigned int)v8;
    v7 = 1187LL;
  }
  else
  {
    v6 = (unsigned int)v5;
    v7 = 1185LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
    (const char *)v6);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
