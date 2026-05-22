/*
 * XREFs of ??1DockDeviceCollection@@UEAA@XZ @ 0x1800E1DA0
 * Callers:
 *     ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x1800E1E70 (--_GDockDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ @ 0x1800E1D30 (--1-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall DockDeviceCollection::~DockDeviceCollection(DockDeviceCollection *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &DockDeviceCollection::`vftable';
  _Mtx_destroy_in_situ((DockDeviceCollection *)((char *)this + 2816));
  std::deque<GetInputReportResult>::~deque<GetInputReportResult>((void **)this + 347);
  v3 = (wil::details *)*((_QWORD *)this + 346);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 345);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
