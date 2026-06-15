/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180044D90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003158C (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEB.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        CSpatialAudioDolbyAtmosMAT *this,
        struct EffectPack *a2,
        const struct tWAVEFORMATEX *a3,
        const struct WAVEFORMATEXTENSIBLE *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v8; // bl
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v14; // eax
  struct _GUID v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]

  v8 = 0;
  *a6 = 0;
  *a7 = 0;
  if ( *((_QWORD *)this + 1) || !byte_1801CEA80 )
  {
    v15.Data1 = 268;
    v11 = 2;
    *(_DWORD *)&v15.Data2 = 1051882;
    *(_DWORD *)v15.Data4 = -1442840448;
    *(_DWORD *)&v15.Data4[4] = 1905997824;
    v16 = 12;
    v17 = 1051882;
    v18 = -1442840448;
    v19 = 1905997824;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4) )
    {
      v14 = IsDolbyMatSupportedByAudioDriver();
      v12 = 1LL;
      if ( v14 )
        v11 = 1;
    }
    return CSpatialAudioTechCompressed::IsTechnologySupported(
             (CSpatialAudioTechCompressed *)v12,
             a2,
             a4,
             &v15,
             v11,
             a6,
             a7,
             a8);
  }
  return v8;
}
