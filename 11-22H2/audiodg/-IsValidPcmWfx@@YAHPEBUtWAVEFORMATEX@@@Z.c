/*
 * XREFs of ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x140029FA0
 * Callers:
 *     ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x14002A234 (-ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidPcmWfx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r10d
  int nBlockAlign; // r8d
  DWORD v3; // r8d

  v1 = 0;
  if ( a1->nChannels && (((a1->wBitsPerSample - 8) & 0xFFF7) == 0 || ((a1->wBitsPerSample - 24) & 0xFFF7) == 0) )
  {
    nBlockAlign = a1->nBlockAlign;
    if ( nBlockAlign == a1->nChannels * (a1->wBitsPerSample >> 3) )
    {
      v3 = a1->nSamplesPerSec * nBlockAlign;
      v1 = 1;
      if ( a1->nAvgBytesPerSec > v3 / 0x14 + v3 || a1->nAvgBytesPerSec < v3 - v3 / 0x14 )
        return 0;
    }
  }
  return v1;
}
