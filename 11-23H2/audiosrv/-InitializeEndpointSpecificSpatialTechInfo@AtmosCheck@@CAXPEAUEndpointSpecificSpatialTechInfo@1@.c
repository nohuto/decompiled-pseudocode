/*
 * XREFs of ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18005E094
 * Callers:
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18005DC50 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015C5EC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18015C7C4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a1)
{
  __int64 v1; // rdx
  bool v2; // al

  v1 = 0LL;
  do
  {
    v2 = ((v1 - 3) & 0xFFFFFFFFFFFFFFFDuLL) != 0;
    ++v1;
    *(_BYTE *)a1 = v2;
    *((_DWORD *)a1 + 1) = -2147023728;
    a1 = (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)a1 + 24);
  }
  while ( v1 < 7 );
}
