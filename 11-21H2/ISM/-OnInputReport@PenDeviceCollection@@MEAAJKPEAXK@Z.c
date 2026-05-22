/*
 * XREFs of ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800CB5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVPenDeviceManager@@@Z @ 0x1800CB1E4 (--0-$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVPenDeviceManager@@@.c)
 *     ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x180186AB0 (-HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDeviceCollection::OnInputReport(PenDeviceCollection *this, int a2, void *a3, unsigned int a4)
{
  int Device; // eax
  unsigned int v7; // ebx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v10; // rax
  PenDeviceManager *v11; // rbx
  void **v12; // [rsp+30h] [rbp-18h] BYREF
  PenDeviceManager *v13; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, (struct RIMDevice **)&v12, 0LL);
  v7 = Device;
  if ( Device >= 0 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
    wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>(
      &v13,
      v10);
    v11 = v13;
    PenDeviceManager::HandleRIMDeviceInput(v13, v12[2], a3, a4);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v11 + 2) + 8LL))((__int64)v11 + 16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v7;
  }
}
