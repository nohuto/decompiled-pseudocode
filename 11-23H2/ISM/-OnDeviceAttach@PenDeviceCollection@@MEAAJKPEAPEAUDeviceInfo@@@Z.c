/*
 * XREFs of ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E4A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003BFE8 (--0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVPenDeviceManager@@@Z @ 0x1800E48B4 (--0-$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVPenDeviceManager@@@.c)
 *     ??4?$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVPenDeviceManager@@@Z @ 0x1800E4910 (--4-$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVPenDeviceMana.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E52F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x1801A4C10 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenDeviceCollection::OnDeviceAttach(void **this, unsigned int a2, struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  int v8; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v10; // rax
  PenDeviceManager *v11; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *v12; // rbx
  PenDeviceManager *v13; // rax
  struct InputSystemServerConnection *v14; // rax
  struct RIMDevice *v15; // [rsp+30h] [rbp-18h] BYREF
  PenDeviceManager *v16; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PenDeviceManager *v18; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 83LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v15, 0LL);
  if ( Device < 0 )
  {
    v6 = (unsigned int)(v8 + 87);
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>(
    &v18,
    v10);
  v11 = v18;
  if ( !v18 )
  {
    v12 = ISMStatics::GetBamoServerConnection();
    v16 = (PenDeviceManager *)operator new(0x90uLL);
    v13 = PenDeviceManager::PenDeviceManager(v16, v12);
    wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::operator=((__int64 *)&v18, (__int64)v13);
    v14 = ISMStatics::GetBamoServerConnection();
    v11 = v18;
    (*(void (__fastcall **)(__int64, PenDeviceManager *))(*(_QWORD *)(*((_QWORD *)v14 + 31) + 8LL) + 176LL))(
      *((_QWORD *)v14 + 31) + 8LL,
      v18);
  }
  PenDeviceManager::AttachRIMDevice(v11, this[10], *((void **)v15 + 2));
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v11 + 2) + 8LL))((__int64)v11 + 16);
  return 0LL;
}
