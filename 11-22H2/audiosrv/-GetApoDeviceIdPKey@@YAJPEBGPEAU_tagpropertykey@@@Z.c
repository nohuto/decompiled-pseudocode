/*
 * XREFs of ?GetApoDeviceIdPKey@@YAJPEBGPEAU_tagpropertykey@@@Z @ 0x180169160
 * Callers:
 *     ?ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z @ 0x18014B3D8 (-ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z.c)
 *     ?UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z @ 0x180150A5C (-UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetApoDeviceIdPKey(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  GUID pclsid; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = CLSIDFromString(a1, &pclsid);
  v4 = v3;
  if ( v3 >= 0 )
  {
    result = 0LL;
    a2->fmtid = pclsid;
    a2->pid = 100;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  return result;
}
