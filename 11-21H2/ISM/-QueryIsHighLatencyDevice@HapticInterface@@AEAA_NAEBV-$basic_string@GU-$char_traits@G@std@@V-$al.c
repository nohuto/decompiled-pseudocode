/*
 * XREFs of ?QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18018BA4C
 * Callers:
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x18018B5D8 (-Initialize@HapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall HapticInterface::QueryIsHighLatencyDevice(__int64 a1, const WCHAR *a2)
{
  const WCHAR *v2; // rdi
  bool v3; // bl
  const WCHAR *v4; // rcx
  const char *v5; // r9
  BYTE *v6; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  ULONG PropertyBufferSize; // [rsp+70h] [rbp+28h] BYREF
  int v10; // [rsp+74h] [rbp+2Ch]
  DEVPROPTYPE PropertyType; // [rsp+78h] [rbp+30h] BYREF
  DEVNODE pdnDevInst; // [rsp+80h] [rbp+38h] BYREF
  DEVNODE dnDevInst; // [rsp+88h] [rbp+40h] BYREF

  v10 = HIDWORD(a1);
  v2 = a2;
  v3 = 0;
  PropertyType = 0;
  PropertyBufferSize = 0;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)a2;
  CM_Get_Device_Interface_PropertyW(v4, &DEVPKEY_Device_InstanceId, &PropertyType, 0LL, &PropertyBufferSize, 0);
  if ( !PropertyBufferSize )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      392LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      v5);
  v6 = (BYTE *)operator new[](saturated_mul(PropertyBufferSize, 2uLL));
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  if ( !CM_Get_Device_Interface_PropertyW(v2, &DEVPKEY_Device_InstanceId, &PropertyType, v6, &PropertyBufferSize, 0)
    && !CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)v6, 0)
    && !CM_Get_Parent(&dnDevInst, pdnDevInst, 0) )
  {
    PropertyBufferSize = 0;
    v3 = CM_Get_DevNode_PropertyW(
           dnDevInst,
           &DEVPKEY_Bluetooth_DeviceAddress,
           &PropertyType,
           0LL,
           &PropertyBufferSize,
           0) != 37;
  }
  operator delete[](v6);
  return v3;
}
