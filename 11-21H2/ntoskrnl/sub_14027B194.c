/*
 * XREFs of sub_14027B194 @ 0x14027B194
 * Callers:
 *     sub_14027A818 @ 0x14027A818 (sub_14027A818.c)
 * Callees:
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 */

__int64 __fastcall sub_14027B194(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  LODWORD(v4) = 0;
  if ( qword_140C50780 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C50780;
  v5 = v2 >> 16;
  v6 = *(_QWORD *)v5;
  if ( (*(_BYTE *)(v5 + 34) & 2) != 0 && (*(_DWORD *)(v6 + 56) & 0x8000000) != 0 )
  {
    v8 = sub_140256DF8(*(_QWORD *)v5, a2, v5);
  }
  else
  {
    v7 = sub_14027B234(v5);
    v8 = v7;
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 72);
      if ( v3 < v11 || v3 >= v11 + 8LL * *(unsigned int *)(v5 + 44) )
        goto LABEL_7;
    }
  }
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 72);
    v4 = (__int64)(*(_QWORD *)(v5 + 8) - *(_QWORD *)(v6 + 136)) >> 3;
    return (unsigned int)v4 + (unsigned int)((__int64)(v3 - v9) >> 3);
  }
LABEL_7:
  v9 = *(_QWORD *)(v6 + 136);
  return (unsigned int)v4 + (unsigned int)((__int64)(v3 - v9) >> 3);
}
