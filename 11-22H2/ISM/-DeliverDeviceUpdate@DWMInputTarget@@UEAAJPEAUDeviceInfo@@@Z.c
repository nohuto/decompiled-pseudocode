/*
 * XREFs of ?DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18010EB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1GetInputReportResult@@QEAA@XZ @ 0x1800F0D68 (--1GetInputReportResult@@QEAA@XZ.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x18014E7B8 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall DWMInputTarget::DeliverDeviceUpdate(DWMInputTarget *this, struct DeviceInfo *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-18h] BYREF
  void *v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  InputEventPayloadBuffer::InputEventPayloadBuffer(&v6, 2LL, a2);
  v3 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                        + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 64,
         v7,
         v6);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( v7 )
      operator delete[](v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v3);
    GetInputReportResult::~GetInputReportResult((GetInputReportResult *)&v6);
    return v4;
  }
}
