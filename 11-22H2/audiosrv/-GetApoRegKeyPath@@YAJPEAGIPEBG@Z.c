/*
 * XREFs of ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x180023AFC
 * Callers:
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x180023A68 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180036070 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall GetApoRegKeyPath(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx

  if ( a3 )
  {
    v4 = a3;
    v5 = 39LL;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v5;
    }
    while ( v5 );
    v6 = v5 == 0 ? 0x80070057 : 0;
    if ( v5 )
    {
      if ( ((39 - v5) & -(__int64)(v5 != 0)) == 0x26 )
        return (unsigned int)StringCchPrintfW(a1, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", a3);
      else
        return (unsigned int)-2147418113;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v6;
}
