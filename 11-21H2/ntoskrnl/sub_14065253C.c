/*
 * XREFs of sub_14065253C @ 0x14065253C
 * Callers:
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140651710 @ 0x140651710 (sub_140651710.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_14065253C(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  const __m128i *v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  char v9; // r8

  v3 = 0;
  v5 = *(const __m128i **)(*(_QWORD *)a1 + 264LL);
  *a2 = 0LL;
  v6 = (_DWORD *)sub_140930250(0xC0uLL);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0xC0uLL);
    if ( *(_DWORD *)(*(_QWORD *)a1 + 224LL) == 11 || v5[31].m128i_i16[7] == -21931 )
    {
      v7[1] = 1;
      v7[2] = 1;
      v7[3] = sub_140651710(v5);
      *((_QWORD *)v7 + 7) = 0LL;
      v8 = *(_QWORD *)(*(_QWORD *)a1 + 248LL) << *(_DWORD *)(*(_QWORD *)a1 + 240LL);
      v7[18] = -1;
      *((_QWORD *)v7 + 8) = v8;
      *((_WORD *)v7 + 40) = 4;
      *((_BYTE *)v7 + 82) = v9;
      v7[21] = 0;
      *((_QWORD *)v7 + 11) = (unsigned int)v7[2];
      *((_QWORD *)v7 + 12) = 0LL;
    }
    else
    {
      v7[3] = sub_140651710(v5);
    }
    *a2 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
