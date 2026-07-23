/*
 * XREFs of sub_140B2A220 @ 0x140B2A220
 * Callers:
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 */

__int64 sub_140B2A220()
{
  unsigned int v0; // r13d
  unsigned __int16 v1; // r14
  int v2; // esi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _WORD *v5; // rdi
  int v6; // ecx
  unsigned int v7; // r11d
  unsigned int v9; // ecx
  __int64 v10; // rbx
  unsigned int *v11; // r8
  unsigned int *v12; // rdi
  __int64 v13; // r9
  unsigned int v14; // r10d
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned int v17; // r10d
  unsigned __int64 v18; // rdx
  __int16 v19; // ax
  int v20; // [rsp+50h] [rbp+8h]

  v0 = dword_140C50728;
  v1 = 0;
  v2 = 0;
  v20 = dword_140C50728;
  v3 = 0;
  if ( !word_140D05000 )
    return 1LL;
  do
  {
    v4 = *(_QWORD *)(120LL * v3 + qword_140C506E0 + 112);
    v5 = (_WORD *)(v4 + 16);
    KeQueryNodeActiveAffinity(v3, (PGROUP_AFFINITY)v4, (PUSHORT)(v4 + 16));
    v6 = v2 + 1;
    v7 = (unsigned __int16)word_140D05000;
    if ( *v5 )
      v6 = v2;
    ++v3;
    v2 = v6;
  }
  while ( v3 < (unsigned __int16)word_140D05000 );
  if ( !v6 )
    return 1LL;
  v9 = 0;
  if ( !word_140D05000 )
    return 1LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(120LL * v9 + qword_140C506E0 + 112);
    if ( !*(_WORD *)(v10 + 16) )
    {
      v11 = (unsigned int *)(qword_140C506D8 + 4LL * v9 * v7);
      v12 = &v11[(unsigned __int16)word_140D05000];
      while ( ++v11 < v12 )
      {
        v13 = *(_QWORD *)(120LL * *v11 + qword_140C506E0 + 112);
        v14 = *(unsigned __int16 *)(v13 + 16) / v0;
        if ( v14 >= 2 )
        {
          v15 = 0LL;
          v16 = *(_QWORD *)v13;
          v17 = (v0 * v14) >> 1;
          if ( v17 )
          {
            do
            {
              _BitScanForward64(&v18, v16);
              ++v1;
              v15 |= 1LL << v18;
              v16 &= ~(1LL << v18);
            }
            while ( v1 < v17 );
            v0 = v20;
          }
          *(_QWORD *)v13 &= ~v15;
          *(_QWORD *)v10 = v15;
          v19 = *(_WORD *)(v13 + 8);
          *(_WORD *)(v10 + 16) = v1;
          *(_WORD *)(v10 + 8) = v19;
          *(_WORD *)(v13 + 16) -= v1;
          v1 = 0;
          break;
        }
      }
      if ( v11 == v12 )
        return 0LL;
    }
    if ( ++v9 >= v7 )
      return 1LL;
  }
}
