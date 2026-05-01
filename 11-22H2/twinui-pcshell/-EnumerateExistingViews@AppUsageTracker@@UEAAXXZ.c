/*
 * XREFs of ?EnumerateExistingViews@AppUsageTracker@@UEAAXXZ @ 0x1806214A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180621BD8 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall AppUsageTracker::EnumerateExistingViews(AppUsageTracker *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  unsigned int i; // ebx
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  v11 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 9);
  v3 = *v2;
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v3 + 24))(v2, &v11);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
      (const char *)(unsigned int)v4,
      v8);
  v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v11 + 24))(v11, &v10);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x44,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
      (const char *)(unsigned int)v5,
      v8);
  for ( i = 0; i < v10; ++i )
  {
    v12 = 0LL;
    v7 = *v11;
    v12 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v7 + 32))(
           v11,
           i,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v12) >= 0 )
      AppUsageTracker::UpdateViewState(this, v12, 0LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
}
