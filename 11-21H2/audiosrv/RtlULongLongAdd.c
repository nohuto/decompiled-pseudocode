/*
 * XREFs of RtlULongLongAdd @ 0x1800596B4
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800588F0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180059400 (--0AtmosCheck@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongAdd(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = -1LL;
  if ( v3 >= a1 )
    v4 = v3;
  result = v3 < a1 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
