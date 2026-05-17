/*
 * XREFs of EtwpTrackRegBinaryInfo @ 0x1800849C8
 * Callers:
 *     EtwpTrackProviderBinary @ 0x18008490C (EtwpTrackProviderBinary.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x1800020AC (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpTrackRegBinaryInfo(__int64 a1)
{
  unsigned __int8 i; // bl
  unsigned int v3; // ecx
  _BYTE *v4; // rax

  if ( *(__int16 *)(a1 + 86) < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      v3 = 0;
      v4 = (_BYTE *)(a1 + 142);
      while ( !*(v4 - 2) || *v4 != i )
      {
        ++v3;
        v4 += 24;
        if ( v3 >= 4 )
          goto LABEL_6;
      }
      if ( a1 + 24 * (v3 + 5LL) )
        EtwpGetUmProcessImageInfo(i, a1);
LABEL_6:
      ;
    }
  }
}
