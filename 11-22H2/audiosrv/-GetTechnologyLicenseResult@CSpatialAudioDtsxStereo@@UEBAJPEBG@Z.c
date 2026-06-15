/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxStereo@@UEBAJPEBG@Z @ 0x180049A40
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x180037E60 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 */

__int64 __fastcall CSpatialAudioDtsxStereo::GetTechnologyLicenseResult(
        CSpatialAudioDtsxStereo *this,
        unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801CEA80 )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v3, a2, 5, 0LL);
  return result;
}
