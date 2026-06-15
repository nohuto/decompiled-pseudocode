/*
 * XREFs of ?GetDeepLink@CSpatialAudioDtsxHeadphones@@UEBAPEBGPEBG@Z @ 0x1800489A0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x180037E60 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 */

const unsigned __int16 *__fastcall CSpatialAudioDtsxHeadphones::GetDeepLink(
        CSpatialAudioDtsxHeadphones *this,
        unsigned __int16 *a2)
{
  AtmosCheck *v3; // rcx
  bool v4; // sf
  const unsigned __int16 *result; // rax

  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( !v3 )
    return (const unsigned __int16 *)((char *)this + 288);
  v4 = (int)AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v3, a2, 4, 0LL) < 0;
  result = (const unsigned __int16 *)((char *)this + 800);
  if ( v4 )
    return (const unsigned __int16 *)((char *)this + 288);
  return result;
}
