/*
 * XREFs of ?ComputeOcclusionErrorThresholdForView@SnapRectHelpers@@YAHPEAUIApplicationView@@@Z @ 0x180677E18
 * Callers:
 *     ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x180673F6C (-IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapRectHelpers::ComputeOcclusionErrorThresholdForView(
        SnapRectHelpers *this,
        struct IApplicationView *a2)
{
  __int64 v2; // rax
  struct IImmersiveMonitor *v3; // rdx
  unsigned int v4; // ebx
  SnapRectHelpers *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(SnapRectHelpers *, SnapRectHelpers **))(v2 + 80))(this, &v6) < 0 )
    v4 = 5;
  else
    v4 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(v6, v3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v6);
  return v4;
}
