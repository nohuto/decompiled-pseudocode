/*
 * XREFs of ?IsCompressedFormatSupported@EffectPack@@AEAA_NAEBU_GUID@@@Z @ 0x18014D2FC
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180004928 (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall EffectPack::IsCompressedFormatSupported(EffectPack *this, const struct _GUID *a2)
{
  __int64 v3; // rax
  char v4; // bl
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v3 = *((_QWORD *)this + 161);
  v4 = 0;
  *(_OWORD *)pvar = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(v3 + 72) + 40LL))(
         *(_QWORD *)(v3 + 72),
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
