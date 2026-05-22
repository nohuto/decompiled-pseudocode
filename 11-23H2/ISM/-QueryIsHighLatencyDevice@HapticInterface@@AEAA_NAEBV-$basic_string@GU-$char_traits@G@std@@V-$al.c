/*
 * XREFs of ?QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801A9BE0
 * Callers:
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x1801A9758 (-Initialize@HapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x1800BA8EC (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall HapticInterface::QueryIsHighLatencyDevice(__int64 a1, const WCHAR *a2)
{
  const WCHAR *v2; // rbx
  const WCHAR *v3; // rcx
  const char *v4; // r9
  void *v5; // rdi
  bool v6; // bl
  void *v8; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ULONG PropertyBufferSize; // [rsp+60h] [rbp+20h] BYREF
  int v11; // [rsp+64h] [rbp+24h]
  DEVPROPTYPE PropertyType; // [rsp+68h] [rbp+28h] BYREF
  DEVNODE pdnDevInst; // [rsp+70h] [rbp+30h] BYREF
  DEVNODE dnDevInst; // [rsp+78h] [rbp+38h] BYREF

  v11 = HIDWORD(a1);
  v2 = a2;
  PropertyType = 0;
  PropertyBufferSize = 0;
  v8 = 0LL;
  v3 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v3 = *(const WCHAR **)a2;
  CM_Get_Device_Interface_PropertyW(v3, &DEVPKEY_Device_InstanceId, &PropertyType, 0LL, &PropertyBufferSize, 0);
  if ( !PropertyBufferSize )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x186,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      v4);
  v5 = operator new[](saturated_mul(PropertyBufferSize, 2uLL));
  v8 = v5;
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  if ( CM_Get_Device_Interface_PropertyW(
         v2,
         &DEVPKEY_Device_InstanceId,
         &PropertyType,
         (PBYTE)v5,
         &PropertyBufferSize,
         0)
    || CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)v5, 0)
    || CM_Get_Parent(&dnDevInst, pdnDevInst, 0) )
  {
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v8);
    return 0;
  }
  else
  {
    PropertyBufferSize = 0;
    v6 = CM_Get_DevNode_PropertyW(
           dnDevInst,
           &DEVPKEY_Bluetooth_DeviceAddress,
           &PropertyType,
           0LL,
           &PropertyBufferSize,
           0) != 37;
    operator delete[](v5);
    return v6;
  }
}
