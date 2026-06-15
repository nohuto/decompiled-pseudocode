/*
 * XREFs of RtlUIntAdd @ 0x180039660
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800377B0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x18005D3BC (--0AtmosCheck@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUIntAdd(unsigned int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // edx

  v3 = a1 + a2;
  if ( v3 < a1 )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
