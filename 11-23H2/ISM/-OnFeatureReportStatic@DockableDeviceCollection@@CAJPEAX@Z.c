/*
 * XREFs of ?OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z @ 0x1800E3AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800E3A44 (-OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z.c)
 */

__int64 __fastcall DockableDeviceCollection::OnFeatureReportStatic(
        DockableDeviceCollection **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  DockableDeviceCollection *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      a4);
  DockableDeviceCollection::OnFeatureReport(*a1, (const struct DockableDeviceCollection::GetFeatureReportResult *)a1);
  v5 = a1[2];
  if ( v5 )
    operator delete[](v5);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)a1);
  operator delete(a1);
  return 0LL;
}
