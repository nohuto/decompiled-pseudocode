/*
 * XREFs of ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C8970
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002DBC0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$emplace_back@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAAEAUGetInputReportResult@@$$QEAU2@@Z @ 0x1800C817C (--$emplace_back@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UGetInputRep.c)
 *     ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800C867C (-DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CBCE0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800CD910 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800CDC58 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DockDeviceCollection::OnDeviceAttach(wil::details **this, unsigned int a2, struct DeviceInfo **a3)
{
  struct RIMDevice *v6; // rbx
  int Device; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // r8d
  int DockInputReport; // eax
  int v12; // eax
  void *v13; // rdx
  struct DeviceInfo *v15[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  void *v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct RIMDevice *v20; // [rsp+A8h] [rbp+48h] BYREF

  v6 = (struct RIMDevice *)operator new(0x694uLL);
  v20 = v6;
  memset_0(v6, 0, 0x694uLL);
  *((_DWORD *)v6 + 2) = 1548;
  v15[1] = v6;
  v15[0] = v6;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, v15);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 100LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_15;
  }
  v20 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v20, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 106);
    goto LABEL_7;
  }
  Device = DockDevice::Initialize(v20, v6);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 108LL;
    goto LABEL_7;
  }
  InputTraceLogging::DeviceDock::DockDeviceAttached(a2, v6);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  DockInputReport = DockDevice::TryGetDockInputReport(v20, (struct GetInputReportResult *)&v16);
  if ( DockInputReport >= 0 )
  {
    v20 = (struct RIMDevice *)(this + 352);
    v12 = _Mtx_lock((_Mtx_t)(this + 352));
    if ( v12 )
      std::_Throw_C_error(v12);
    std::deque<GetInputReportResult>::emplace_back<GetInputReportResult>(this + 347, (__int64)&v16);
    wil::details::SetEvent(this[346], v13);
    _Mtx_unlock((_Mtx_t)(this + 352));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      114LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)DockInputReport);
  }
  *a3 = v15[0];
  v6 = 0LL;
  v8 = 0;
  if ( v17 )
    operator delete[](v17);
LABEL_15:
  if ( v6 )
    operator delete(v6);
  return v8;
}
