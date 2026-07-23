/*
 * XREFs of sub_140265078 @ 0x140265078
 * Callers:
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140265078(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  int v10; // r10d
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 result; // rax
  unsigned int v22; // eax
  __int64 *v23; // rdx

  v10 = a9;
  if ( (a9 & 0x100) != 0 && (ULONG_PTR *)a2 != &StartContext )
    return 3221225485LL;
  v13 = a3 >> 12;
  v14 = a4 >> 12;
  if ( a4 >> 12 < qword_140C50840 )
  {
    if ( v14 >= *(_QWORD *)(a2 + 16712) && !v13 )
      v10 = a9 | 0x10000;
  }
  else
  {
    v14 = qword_140C50840;
    v15 = a9 | 0x10000;
    if ( v13 )
      v15 = a9;
    v10 = v15;
  }
  if ( (a5 & 0xFFF) != 0 )
    return 3221225485LL;
  v16 = a5 >> 12;
  if ( ((v16 - 1) & v16) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
      return 3221225485LL;
    v16 = 0LL;
  }
  if ( (v10 & 0x400) != 0 && ((v10 & 0x370) != 0 || (v10 & 0x10001) != 0x10001 || ((a7 - 1) & 0xFFFFFFFD) != 0) )
    return 3221225485LL;
  v17 = a6;
  if ( a6 <= 0xFFFFF000 )
    goto LABEL_10;
  if ( (v10 & 4) != 0 )
    return 3221225485LL;
  v17 = 4294963200LL;
  if ( (v10 & 0x60) != 0 && v16 )
    v17 = ~((v16 << 12) - 1) & 0xFFFFF000;
LABEL_10:
  v18 = (unsigned __int64)(v17 + 4095) >> 12;
  if ( (v10 & 0x40) != 0 )
  {
    if ( (v13 & 0xFFFFFFFFFFEFFFFFuLL) != 0 || v14 < *(_QWORD *)(a2 + 16712) )
      return 3221225485LL;
    v22 = 0;
    v23 = qword_14001C780;
    while ( v16 != *v23 )
    {
      ++v22;
      ++v23;
      if ( v22 >= 3 )
      {
        if ( v22 == 3 )
          return 3221225485LL;
        break;
      }
    }
    if ( v18 % v16 && ((v10 & 4) != 0 || v18 < v16) )
      return 3221225485LL;
  }
  v19 = 32LL * (~(unsigned __int8)*(_DWORD *)(a2 + 4) & 0x20);
  *(_QWORD *)(a1 + 48) = v19;
  v20 = *(_QWORD *)(a2 + 16960) - v19;
  if ( (__int64)v20 <= 0 )
    return 3221225485LL;
  if ( v18 <= v20 )
  {
    v20 = v18;
    if ( v18 )
    {
LABEL_14:
      *(_DWORD *)(a1 + 56) = a8;
      *(_QWORD *)(a1 + 72) = a10;
      result = 0LL;
      *(_QWORD *)a1 = a2;
      *(_DWORD *)(a1 + 8) = v10;
      *(_QWORD *)(a1 + 16) = v13;
      *(_QWORD *)(a1 + 24) = v14;
      *(_QWORD *)(a1 + 32) = v16;
      *(_DWORD *)(a1 + 60) = a7;
      *(_QWORD *)(a1 + 40) = v20;
      return result;
    }
    return 3221225485LL;
  }
  if ( (v10 & 4) == 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      if ( v20 % v16 && v20 < v16 )
        return 3221225626LL;
    }
    else if ( (v10 & 0x20) == 0 || !v16 )
    {
LABEL_49:
      if ( v20 && v20 >= v16 )
        goto LABEL_14;
      return 3221225626LL;
    }
    v20 &= ~(v16 - 1);
    goto LABEL_49;
  }
  return 3221225626LL;
}
