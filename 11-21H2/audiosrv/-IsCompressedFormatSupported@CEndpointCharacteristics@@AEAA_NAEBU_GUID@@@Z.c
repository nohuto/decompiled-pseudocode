/*
 * XREFs of ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18014A3D4
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E4A0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMA.c)
 *     ?IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18014AE68 (-IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CEndpointCharacteristics::IsCompressedFormatSupported(
        CEndpointCharacteristics *this,
        const struct _GUID *a2)
{
  __int64 v2; // rcx
  char v4; // bl
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 5);
  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_Endpoint_EncodedFormatSupport,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && LODWORD(pvar[1]) >= 0xC )
  {
    v5 = *(_DWORD *)(v11 + 8);
    if ( LODWORD(pvar[1]) == 16LL * v5 + 12 )
    {
      v6 = 0;
      if ( v5 )
      {
        while ( 1 )
        {
          v7 = 16LL * v6;
          v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(v7 + v11 + 12);
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(v7 + v11 + 12) )
            v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v7 + v11 + 20);
          if ( !v8 )
            break;
          if ( ++v6 >= v5 )
            goto LABEL_12;
        }
        v4 = 1;
      }
    }
  }
LABEL_12:
  PropVariantClear(pvar);
  return v4;
}
