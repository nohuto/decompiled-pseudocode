/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxHeadphones@@UEBAJPEBG@Z @ 0x18005D470
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x180058AC0 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 */

__int64 __fastcall CSpatialAudioDtsxHeadphones::GetTechnologyLicenseResult(
        CSpatialAudioDtsxHeadphones *this,
        unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801C1A70 )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v3, a2, 4, 0LL);
  return result;
}
