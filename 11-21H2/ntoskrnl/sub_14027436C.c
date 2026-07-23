/*
 * XREFs of sub_14027436C @ 0x14027436C
 * Callers:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027436C(__int64 a1)
{
  char *v1; // rdi
  unsigned int v2; // r9d
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // r11
  char *v7; // rcx
  unsigned int v8; // r10d
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  int v12; // ebx
  __int16 v13; // cx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  bool v16; // zf
  __int64 v17; // rcx
  char *v18; // r10
  signed __int64 v19; // rbx

  v1 = (char *)(a1 + 48);
  v2 = 0;
  v3 = *(unsigned int *)(a1 + 40);
  v4 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
  v6 = 0LL;
  v7 = (char *)(a1 + 48);
  v8 = 0;
  v9 = (unsigned __int64)(v4 + v3 + 4095) >> 12;
  if ( v9 != 1 )
  {
    do
    {
      if ( *(_QWORD *)v7 != qword_140C53288 )
        break;
      ++v8;
      ++v6;
      v7 += 8;
    }
    while ( v8 < v9 - 1 );
  }
  if ( v6 )
  {
    *(_WORD *)(a1 + 8) += -8 * v6;
    *(_DWORD *)(a1 + 40) = v3 - ((_DWORD)v6 << 12);
    v19 = v1 - v7;
    do
    {
      ++v8;
      *(_QWORD *)&v7[v19] = *(_QWORD *)v7;
      v7 += 8;
    }
    while ( v8 < v9 );
    v9 -= v6;
  }
  v10 = a1 + 8 * v9;
  if ( *(_QWORD *)(v10 + 40) == qword_140C53288 )
  {
    v12 = *(_DWORD *)(a1 + 40);
    v13 = v12;
    *(_WORD *)(a1 + 8) -= 8;
    v14 = v12 - 4096;
    v15 = v12 & 0xFFFFF000;
    v16 = (v13 & 0xFFF) == 0;
    v17 = 0LL;
    if ( v16 )
      v15 = v14;
    v18 = (char *)(v10 + 32);
    *(_DWORD *)(a1 + 40) = v15;
    if ( v18 != v1 )
    {
      do
      {
        if ( *(_QWORD *)v18 != qword_140C53288 )
          break;
        ++v17;
        v18 -= 8;
      }
      while ( v18 != v1 );
      if ( v17 )
      {
        *(_WORD *)(a1 + 8) -= 8 * v17;
        *(_DWORD *)(a1 + 40) = v15 - ((_DWORD)v17 << 12);
      }
    }
    v9 += -1 - v17;
  }
  *(_WORD *)(a1 + 10) |= 0x4000u;
  if ( v9 )
  {
    while ( *(_QWORD *)v1 != qword_140C53288 )
    {
      ++v2;
      v1 += 8;
      if ( v2 >= v9 )
        return v6;
    }
    *(_WORD *)(a1 + 10) &= ~0x4000u;
  }
  return v6;
}
