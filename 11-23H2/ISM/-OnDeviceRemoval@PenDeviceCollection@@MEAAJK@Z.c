/*
 * XREFs of ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800E4BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVPenDeviceManager@@@Z @ 0x1800E48B4 (--0-$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVPenDeviceManager@@@.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E5670 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x1801A60BC (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDeviceCollection::OnDeviceRemoval(PenDeviceCollection *this, unsigned int a2)
{
  int Device; // ebx
  __int64 v5; // rdx
  int v7; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v9; // rax
  PenDeviceManager *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v12; // [rsp+50h] [rbp+18h] BYREF
  PenDeviceManager *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  Device = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( Device < 0 )
  {
    v5 = 119LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v12, 0LL);
  if ( Device < 0 )
  {
    v5 = (unsigned int)(v7 + 123);
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>(
    &v13,
    v9);
  v10 = v13;
  PenDeviceManager::RemoveRIMDevice(v13, *((void **)v12 + 2));
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v10 + 2) + 8LL))((__int64)v10 + 16);
  return 0LL;
}
