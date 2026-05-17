/*
 * XREFs of EtwpTrackRegBinaryInfo @ 0x180088A1C
 * Callers:
 *     EtwpTrackProviderBinary @ 0x18008894C (EtwpTrackProviderBinary.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x180122610 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpTrackRegBinaryInfo(__int64 a1)
{
  unsigned __int8 i; // bl
  unsigned int v3; // ecx
  _BYTE *v4; // rax

  if ( *(__int16 *)(a1 + 98) < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      v3 = 0;
      v4 = (_BYTE *)(a1 + 150);
      while ( !*(v4 - 2) || *v4 != i )
      {
        ++v3;
        v4 += 24;
        if ( v3 >= 4 )
          goto LABEL_6;
      }
      if ( a1 + 8 * (3LL * v3 + 16) )
        EtwpGetUmProcessImageInfo(i, a1);
LABEL_6:
      ;
    }
  }
}
