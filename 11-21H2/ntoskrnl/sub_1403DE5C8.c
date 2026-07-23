/*
 * XREFs of sub_1403DE5C8 @ 0x1403DE5C8
 * Callers:
 *     sub_1402A01BC @ 0x1402A01BC (sub_1402A01BC.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DE5C8(__int64 a1)
{
  unsigned __int16 v3; // cx
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rax

  if ( word_140D05000 == 1 )
    return qword_140D31700[0];
  v3 = word_140C2B890++;
  if ( (unsigned __int16)word_140C2B890 >= (unsigned __int16)word_140D05000 )
    word_140C2B890 = 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v3 >= (unsigned __int16)word_140D05000 )
      v3 = 0;
    v5 = qword_140D31700[v3];
    if ( (*(_BYTE *)(v5 + 10) & 1) == 0 )
    {
      v6 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(a1 + 8) + 24);
      if ( v6 )
      {
        if ( (*(_QWORD *)(v6 + 128) & *(_QWORD *)a1) != 0LL )
          break;
      }
    }
    ++v4;
    ++v3;
    if ( v4 >= (unsigned __int16)word_140D05000 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v3 >= (unsigned __int16)word_140D05000 )
          v3 = 0;
        v5 = qword_140D31700[v3];
        v8 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(a1 + 8) + 24);
        if ( v8 )
        {
          if ( (*(_QWORD *)(v8 + 128) & *(_QWORD *)a1) != 0LL )
            break;
        }
        ++v7;
        ++v3;
        if ( v7 >= (unsigned __int16)word_140D05000 )
          return 0LL;
      }
      return v5;
    }
  }
  return v5;
}
