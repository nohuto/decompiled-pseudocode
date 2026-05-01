/*
 * XREFs of ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x180663530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnapWindow@AEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@Z @ 0x18065D414 (--$SnapWindow@AEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEA.c)
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806659BC (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellSnapComponent::SnapWindow(
        CShellSnapComponent *this,
        HWND a2,
        const struct tagRECT *a3,
        int a4)
{
  char v4; // di
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  const struct tagRECT *v15; // [rsp+48h] [rbp-30h] BYREF
  HWND v16; // [rsp+50h] [rbp-28h] BYREF
  struct tagRECT v17; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  v4 = a4;
  v16 = a2;
  v15 = a3;
  LODWORD(v14) = a4;
  CSnapComponentTelemetry::SnapWindow<HWND__ * &,tagRECT const * &,unsigned long &>(&v16, &v15, (unsigned int *)&v14);
  v17 = *a3;
  v8 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, struct tagRECT *, int, int, unsigned int))(**((_QWORD **)this + 32)
                                                                                                 + 24LL))(
         *((_QWORD *)this + 32),
         a2,
         0LL,
         &v17,
         3,
         (v4 & 1) != 0 ? 1 : 16,
         v4 & 2 | 1u);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x412,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  if ( (v4 & 2) != 0 )
  {
    v14 = 0LL;
    v11 = (__int64 *)*((_QWORD *)this + 11);
    v12 = *v11;
    v14 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, HWND, __int64 *))(v12 + 48))(v11, a2, &v14);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x418,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      return v9;
    }
    CShellSnapComponent::_FireWindowSnappingEvent((char *)this - 136, v14, 1LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
  return 0LL;
}
