/*
 * XREFs of ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180037F30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180038498 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL.c)
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004F298 (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x1800581AC (IsGetMPCInputPostProcessorPresent.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall MPCMouseProcessor::ShouldAttachDevice(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  __int64 v5; // rcx
  const char *v6; // r9
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (*((_BYTE *)a2 + 4) & 2) == 0 || !(unsigned __int8)IsGetMPCInputPostProcessorPresent() )
    return 0;
  v5 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Find_lower_bound<unsigned long>(
                     (char *)this + 5360,
                     v7,
                     a2)
                 + 16);
  if ( !*(_BYTE *)(v5 + 25) && *(_DWORD *)a2 >= *(_DWORD *)(v5 + 32) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      v6);
  MPCMouseProcessor::AttachMouse((MPCMouseProcessor *)((char *)this - 16), a2);
  return 1;
}
