/*
 * XREFs of ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801E6554
 * Callers:
 *     ?Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801E6450 (-Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1801AA850 (-OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockProcessor::Initialize(DockProcessor *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v3;
  if ( v3 )
    (**(void (__fastcall ***)(__int64))(v3 + 16))(v3 + 16);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 8LL))(v4 + 16);
  v5 = DeviceDockServer::OnDockDeviceArrival(*((DeviceDockServer **)this + 9), *((struct DockDeviceInfo **)this + 5));
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\lib\\dockprocessor.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
