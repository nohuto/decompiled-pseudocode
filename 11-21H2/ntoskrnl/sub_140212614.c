/*
 * XREFs of sub_140212614 @ 0x140212614
 * Callers:
 *     sub_140212200 @ 0x140212200 (sub_140212200.c)
 * Callees:
 *     sub_1402126A4 @ 0x1402126A4 (sub_1402126A4.c)
 */

__int64 sub_140212614()
{
  unsigned __int16 i; // di
  __int64 v1; // rbx
  __int64 result; // rax
  PKSPIN_LOCK *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx

  for ( i = 0; i < (unsigned int)dword_140C1CF34; result = i )
  {
    v1 = qword_140C1CF38 + 336LL * i;
    if ( *(_BYTE *)(v1 + 6) )
    {
      sub_1402126A4(*(PKSPIN_LOCK *)(v1 + 72));
      if ( *(_BYTE *)(v1 + 6) != *(_BYTE *)(v1 + 128) )
      {
        v3 = (PKSPIN_LOCK *)(v1 + 152);
        v4 = 2LL;
        v5 = v1 + 168;
        do
        {
          sub_1402126A4(*v3);
          v5 += 48LL;
          ++v3;
          --v4;
        }
        while ( v4 );
      }
    }
    ++i;
  }
  return result;
}
