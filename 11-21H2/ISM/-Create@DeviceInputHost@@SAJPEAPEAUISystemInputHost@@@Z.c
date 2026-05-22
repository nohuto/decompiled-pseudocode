/*
 * XREFs of ?Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z @ 0x180080230
 * Callers:
 *     CreateSystemInputHost @ 0x1800276E0 (CreateSystemInputHost.c)
 * Callees:
 *     ?Create@ISMTestMode@@SAX_N@Z @ 0x1800276F8 (-Create@ISMTestMode@@SAX_N@Z.c)
 *     ?Create@ISMScenarios@@SAXW4ISMScenario@@@Z @ 0x18002773C (-Create@ISMScenarios@@SAXW4ISMScenario@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18007FF60 (--0DeviceInputHost@@AEAA@XZ.c)
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

  ISMTestMode::Create((__int64)a1, a2, a3, a4);
  ISMScenarios::Create(1, v5, v6, v7);
  if ( !a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v9 = (DeviceInputHost *)RefCountedObject::operator new(0x48uLL);
  if ( v9 )
    v10 = DeviceInputHost::DeviceInputHost(v9);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v14 = (**(__int64 (__fastcall ***)(DeviceInputHost *, GUID *, struct ISystemInputHost **))v10)(
            v10,
            &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
            a1);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    v12 = (unsigned int)v14;
    v13 = 66LL;
  }
  else
  {
    v11 = -2147024882;
    v12 = 2147942414LL;
    v13 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
    (const char *)v12);
LABEL_12:
  if ( v10 )
    (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)v10 + 16LL))(v10);
  return v11;
}
