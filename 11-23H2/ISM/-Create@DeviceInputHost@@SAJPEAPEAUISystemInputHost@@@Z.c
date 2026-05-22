/*
 * XREFs of ?Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z @ 0x180097194
 * Callers:
 *     CreateSystemInputHost @ 0x180054C80 (CreateSystemInputHost.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Create@ISMTestMode@@SAX_N@Z @ 0x180053B1C (-Create@ISMTestMode@@SAX_N@Z.c)
 *     ?Create@ISMScenarios@@SAXW4ISMScenario@@@Z @ 0x180053B60 (-Create@ISMScenarios@@SAXW4ISMScenario@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180096EB4 (--0DeviceInputHost@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeviceInputHost::Create(struct ISystemInputHost **a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  DeviceInputHost *v9; // rax
  DeviceInputHost *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DeviceInputHost *v16; // [rsp+30h] [rbp+8h] BYREF
  DeviceInputHost *v17; // [rsp+38h] [rbp+10h]

  ISMTestMode::Create((__int64)a1, a2, a3, a4);
  ISMScenarios::Create(1, v5, v6, v7);
  if ( !a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v16 = 0LL;
  v9 = (DeviceInputHost *)RefCountedObject::operator new(0x48uLL);
  v17 = v9;
  if ( v9 )
    v10 = DeviceInputHost::DeviceInputHost(v9);
  else
    v10 = 0LL;
  v16 = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    v12 = 2147942414LL;
    v13 = 63LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)v12);
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v16);
    return v11;
  }
  v14 = (**(__int64 (__fastcall ***)(DeviceInputHost *, GUID *, struct ISystemInputHost **))v10)(
          v10,
          &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
          a1);
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = (unsigned int)v14;
    v13 = 66LL;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
