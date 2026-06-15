/*
 * XREFs of ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18015C97C
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015C63C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18015C814 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x180037E60 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18015BF9C (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 */

void __fastcall AtmosCheck::PerformLicenseCheckHelper(
        AtmosCheck *this,
        unsigned __int16 *a2,
        int a3,
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4,
        bool *a5)
{
  __int64 v7; // rsi
  int v9; // eax
  __int64 v10; // r9
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v11; // rsi
  int v12; // ebx
  bool v13; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-60h] BYREF

  v7 = a3;
  if ( *((_BYTE *)this + 696) )
  {
    if ( (unsigned int)dword_1801CD2B8 > 5 )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1801CD2B8,
        (unsigned __int8 *)dword_180199135,
        0LL,
        0LL,
        2u,
        &v14);
  }
  else
  {
    v13 = 0;
    v9 = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(this, a2, a3, &v13);
    v10 = v7;
    v11 = (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)a4 + 24 * v7);
    v12 = v9;
    AtmosCheck::IsLicenseValidForSubtype(this, *((const unsigned __int16 **)this + 6 * v10 + 37), a2, v11);
    if ( v12 != *((_DWORD *)v11 + 1) || v13 != *((_BYTE *)v11 + 1) )
      *a5 = 1;
  }
}
