/*
 * XREFs of ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C6D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800C6944 (--$_Insert_or_assign@AEBKV-$array@G$0BE@@std@@@-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CBCE0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceAttach(
        SystemControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v5; // rdx
  int v7; // r8d
  unsigned int v8; // [rsp+30h] [rbp-58h] BYREF
  struct RIMDevice *v9[2]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v10[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v11; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = a2;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v5 = 77LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v11 = 0LL;
  memset(v10, 0, sizeof(v10));
  std::unordered_map<unsigned long,std::array<unsigned short,20>>::_Insert_or_assign<unsigned long const &,std::array<unsigned short,20>>(
    (float *)this + 690,
    (__int64)v9,
    (unsigned __int8 *)&v8,
    (__int64)v10);
  Device = RIMDeviceCollection::FindDevice(this, v8, 0LL, v9, 0LL);
  if ( Device < 0 )
  {
    v5 = (unsigned int)(v7 + 86);
    goto LABEL_3;
  }
  return 0LL;
}
