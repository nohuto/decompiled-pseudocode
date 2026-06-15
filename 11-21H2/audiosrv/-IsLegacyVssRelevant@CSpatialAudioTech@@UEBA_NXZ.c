/*
 * XREFs of ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x18005C6E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioTech::IsLegacyVssRelevant(CSpatialAudioTech *this, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  CLSID pClsid; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( byte_1801C26EB )
    return byte_1801C26EA;
  byte_1801C26EB = 1;
  if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4)
    || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
  {
    v4 = CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0;
    byte_1801C26EA = v4;
  }
  else
  {
    byte_1801C26EA = 0;
  }
  return v4;
}
