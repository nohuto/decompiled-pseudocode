/*
 * XREFs of ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F12A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18001ADB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800E3F9C (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$_Emplace_back_internal@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX$$QEAUGetInputReportResult@@@Z @ 0x1800F0A7C (--$_Emplace_back_internal@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UG.c)
 *     ??1?$unique_ptr@UDockDeviceInfo@@U?$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800F0CBC (--1-$unique_ptr@UDockDeviceInfo@@U-$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800F0F8C (-DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F4250 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800F5EBC (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800F6204 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DockDeviceCollection::OnDeviceAttach(wil::details **this, unsigned int a2, struct DeviceInfo **a3)
{
  struct RIMDevice *v6; // rsi
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // r8d
  int DockInputReport; // eax
  int v13; // eax
  void *v14; // rdx
  struct DeviceInfo *v15; // [rsp+30h] [rbp-30h] BYREF
  struct RIMDevice *v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  void *v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct RIMDevice *v21; // [rsp+98h] [rbp+38h] BYREF

  v6 = (struct RIMDevice *)operator new(0x694uLL);
  v21 = v6;
  memset_0(v6, 0, 0x694uLL);
  *((_DWORD *)v6 + 2) = 1548;
  v16 = v6;
  v15 = v6;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, &v15);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 100LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    std::unique_ptr<DockDeviceInfo>::~unique_ptr<DockDeviceInfo>((void **)&v16);
    return v8;
  }
  v21 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v21, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 106);
    goto LABEL_7;
  }
  Device = DockDevice::Initialize(v21, v6);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 108LL;
    goto LABEL_7;
  }
  InputTraceLogging::DeviceDock::DockDeviceAttached(a2, v6);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  DockInputReport = DockDevice::TryGetDockInputReport(v21, (struct GetInputReportResult *)&v17);
  if ( DockInputReport >= 0 )
  {
    v21 = (struct RIMDevice *)(this + 352);
    v13 = _Mtx_lock((_Mtx_t)(this + 352));
    if ( v13 )
      std::_Throw_C_error(v13);
    std::deque<GetInputReportResult>::_Emplace_back_internal<GetInputReportResult>(this + 347, (__int64)&v17);
    wil::details::SetEvent(this[346], v14);
    _Mtx_unlock((_Mtx_t)(this + 352));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x72,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)DockInputReport);
  }
  *a3 = v15;
  if ( v18 )
    operator delete[](v18);
  return 0LL;
}
