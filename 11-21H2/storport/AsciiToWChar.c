/*
 * XREFs of AsciiToWChar @ 0x1C0068284
 * Callers:
 *     PortMiniportRegistryWrite @ 0x1C006876C (PortMiniportRegistryWrite.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall AsciiToWChar(_WORD *a1, _BYTE *a2, unsigned int a3)
{
  _WORD *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // eax

  v5 = a1;
  v6 = 0;
  memset(a1, 0, a3);
  if ( a2 )
  {
    v7 = 0;
    if ( a3 != 1 )
    {
      do
      {
        if ( !*a2 )
          break;
        *v5++ = (char)*a2++;
        v7 += 2;
        v6 += 2;
      }
      while ( v7 < a3 - 1 );
    }
  }
  return v6;
}
