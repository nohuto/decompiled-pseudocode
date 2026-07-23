/*
 * XREFs of MiSetPteTimeStamp @ 0x140212A6C
 * Callers:
 *     MiInitializeTbFlushStamps @ 0x140212A08 (MiInitializeTbFlushStamps.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiSetPteTimeStamp(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
  {
    if ( qword_140C65B40 )
    {
      if ( (a1 & 0x10) != 0 )
        LODWORD(a1) = a1 & 0xFFFFFFEF;
      else
        LODWORD(a1) = ~(_DWORD)qword_140C65B40 & a1;
    }
    v2 = a1;
  }
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
