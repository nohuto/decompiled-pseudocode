/*
 * XREFs of KeQueryNodeActiveAffinity2 @ 0x14056D7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026428C @ 0x14026428C (sub_14026428C.c)
 */

__int64 __fastcall KeQueryNodeActiveAffinity2(unsigned __int16 a1, __int64 a2, unsigned __int16 a3, _WORD *a4)
{
  unsigned int v6; // r9d
  __int64 v7; // rbp
  unsigned int v8; // r11d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  __int64 v11; // rsi
  unsigned int v12; // ecx

  if ( a1 < (unsigned __int16)word_140D05000 )
  {
    _mm_lfence();
    v7 = qword_140D31700[a1];
    v8 = *(_DWORD *)(v7 + 16);
    v9 = v8 - (((unsigned __int64)v8 >> 1) & 0x5555555555555555LL);
    v10 = (0x101010101010101LL
         * (((v9 & 0x3333333333333333LL)
           + ((v9 >> 2) & 0x3333333333333333LL)
           + (((v9 & 0x3333333333333333LL) + ((v9 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( a3 >= (unsigned __int16)v10 )
    {
      v6 = 0;
      if ( (_WORD)v10 )
      {
        v11 = (unsigned __int16)v10;
        do
        {
          _BitScanForward(&v12, v8);
          _bittestandreset((int *)&v8, (unsigned __int16)v12);
          sub_14026428C(*(_QWORD *)(v7 + 8LL * (unsigned __int16)v12 + 24), a2, 0LL);
          a2 += 16LL;
          --v11;
        }
        while ( v11 );
      }
      *a4 = v10;
    }
    else
    {
      *a4 = v10;
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
