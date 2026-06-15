/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180053FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540C0 (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAV.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18005439C (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioDtsxHdmi::IsTechnologySupported(
        CSpatialAudioDtsxHdmi *this,
        struct CEndpointCharacteristics *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v8; // di
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v19; // eax
  struct _GUID v20; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+54h] [rbp-2Ch]
  int v23; // [rsp+58h] [rbp-28h]
  int v24; // [rsp+5Ch] [rbp-24h]
  int v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+64h] [rbp-1Ch]
  int v27; // [rsp+68h] [rbp-18h]
  int v28; // [rsp+6Ch] [rbp-14h]

  v8 = 0;
  *a6 = 0;
  *a7 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( *((_QWORD *)this + 1) )
  {
    v20.Data1 = 779;
    v16 = 3;
    *(_DWORD *)&v20.Data2 = 1051882;
    *(_DWORD *)v20.Data4 = -1442840448;
    *(_DWORD *)&v20.Data4[4] = 1905997824;
    v21 = 267;
    v22 = 1051882;
    v23 = -1442840448;
    v24 = 1905997824;
    v25 = 11;
    v26 = 1051882;
    v27 = -1442840448;
    v28 = 1905997824;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v13, v12, v14, v15) )
    {
      v19 = IsDtsXSupportedByAudioDriver();
      v17 = 2LL;
      if ( v19 )
        v16 = 2;
    }
    return CSpatialAudioTechCompressed::IsTechnologySupported(
             (CSpatialAudioTechCompressed *)v17,
             a2,
             a4,
             &v20,
             v16,
             a6,
             a7,
             a8);
  }
  return v8;
}
