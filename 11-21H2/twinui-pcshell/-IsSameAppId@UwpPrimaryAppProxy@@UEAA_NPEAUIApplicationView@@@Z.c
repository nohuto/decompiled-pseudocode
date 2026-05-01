/*
 * XREFs of ?IsSameAppId@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1804F0E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180036F74 (--$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall UwpPrimaryAppProxy::IsSameAppId(UwpPrimaryAppProxy *this, struct IApplicationView *a2)
{
  _QWORD *v3; // rdi
  char v4; // bl
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  void (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp+18h] BYREF

  v3 = (_QWORD *)((char *)this + 8);
  v8 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(&v7, &v8);
  v4 = 0;
  if ( v7 )
  {
    v6 = 0;
    if ( v3[3] >= 8uLL )
      v3 = (_QWORD *)*v3;
    if ( (*(int (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)a2 + 152LL))(a2, v3, &v6) >= 0
      && v6 )
    {
      v4 = 1;
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v7);
  return v4;
}
