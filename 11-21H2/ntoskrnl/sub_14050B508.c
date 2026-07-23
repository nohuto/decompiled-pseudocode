/*
 * XREFs of sub_14050B508 @ 0x14050B508
 * Callers:
 *     sub_14050B2E4 @ 0x14050B2E4 (sub_14050B2E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14050B508(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r10
  char v12; // cl

  if ( a2 >= 0x10 )
  {
    v7 = 0;
    v8 = 24;
    if ( off_140C02520 == &off_1400032A0 )
      v9 = qword_140C4D0A8;
    else
      v9 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * *(_DWORD *)(a1 + 8));
    if ( dword_140C4D044 )
    {
      v10 = (unsigned int)dword_140C4D044;
      do
      {
        if ( !*(_DWORD *)(*(_QWORD *)v9 + 24LL) )
        {
          v8 += 16;
          if ( v8 <= a2 )
          {
            v11 = 2LL * v7;
            *(_BYTE *)(a1 + 8 * v11 + 37) = 1;
            *(_DWORD *)(a1 + 8 * v11 + 32) = *(_DWORD *)(*(_QWORD *)v9 + 32LL);
            v12 = *(_BYTE *)(*(_QWORD *)v9 + 36LL);
            *(_BYTE *)(a1 + 8 * v11 + 36) = v12;
            if ( v12 )
              *(_QWORD *)(a1 + 16LL * v7 + 24) = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
            else
              *(_QWORD *)(a1 + 16LL * v7 + 24) = 0LL;
            ++v7;
          }
        }
        v9 += 8LL;
        --v10;
      }
      while ( v10 );
    }
    *(_DWORD *)(a1 + 16) = v7;
    *a3 = v8;
    return a2 < v8 ? 0xC0000004 : 0;
  }
  else
  {
    *a3 = 16;
    return 3221225476LL;
  }
}
