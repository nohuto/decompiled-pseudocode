/*
 * XREFs of sub_14031B1C0 @ 0x14031B1C0
 * Callers:
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 * Callees:
 *     sub_140252ED0 @ 0x140252ED0 (sub_140252ED0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     sub_1403C9B90 @ 0x1403C9B90 (sub_1403C9B90.c)
 */

__int64 __fastcall sub_14031B1C0(int *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // rsi
  int v8; // r10d
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r11d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx

  v3 = *(_QWORD *)a2;
  v5 = a3;
  if ( a3 == 3
    && a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v16 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 8 * ((a2 >> 3) & 0x1FF));
      v18 = v3 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v3;
      v3 = v18;
      if ( (v17 & 0x42) != 0 )
        v3 = v18 | 0x42;
    }
  }
  if ( (v3 & 1) == 0 )
    return (*a1 & 1) != 0;
  v8 = *a1;
  if ( (v9 = *a1 & 0x4000) != 0 )
  {
    v15 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    if ( v15 == qword_140C4F040[v5 + 2131] || v15 == qword_140C4F040[v5 + 2127] || (v3 & 0x800) == 0 && (v3 & 0x42) == 0 )
      return (*a1 & 1) != 0;
  }
  if ( !(_DWORD)v5 )
    return 1LL;
  v10 = *((_QWORD *)a1 + 8);
  v11 = 1;
  if ( v10 && v10 == *(_QWORD *)&a1[4 * v5 + 20] )
  {
    v11 = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v12 = *((_QWORD *)a1 + 7);
  if ( v12 && v12 == *(_QWORD *)&a1[4 * v5 + 20] )
  {
    v11 = 0;
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( (v3 & 0x80u) != 0LL )
  {
    if ( (v8 & 1) == 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 3) + 184LL) & 7) == 0 )
      {
        v19 = sub_1402CFEB0(a2);
        v20 = ((sub_140252ED0(v19) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( (int)v5 > 1 )
        {
          v21 = (unsigned int)(v5 - 1);
          do
          {
            v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v21;
          }
          while ( v21 );
        }
        v22 = -1;
        v23 = (__int64)(v20 - a2) >> 3;
        if ( v23 <= 0xFFFFFFFFLL )
          v22 = v23;
        a1[2] = v22;
      }
      return 0LL;
    }
    return 1LL;
  }
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL
    || (v8 & 0x200) != 0
    && qword_140C532D8 != (PVOID)qword_140C532E0
    && ((v3 >> 12) & 0xFFFFFFFFFFLL) == qword_140C4F040[v5 + 2131] )
  {
    return 0LL;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (*(_QWORD *)(48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      return 1LL;
    if ( (_DWORD)v5 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 3) + 184LL) & 7) == 2 )
    {
      v13 = sub_1403295C0((__int64)(a2 << 25) >> 16 << 25 >> 16, qword_140C4F040);
      if ( !v13 || (unsigned __int16)*(_DWORD *)(v13 + 32) >> 6 != (unsigned __int64)*(unsigned __int16 *)(v14 + 174) )
        return 1LL;
    }
  }
  if ( !v11
    || (_DWORD)v5 == 1
    && (v8 & 0x11) == 0x10
    && (((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 4) & 0x3FF) == 0
     || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 14) & 7) < *((_BYTE *)a1 + 5)) )
  {
    return 1LL;
  }
  if ( v9 && (int)v5 > 1 && (_DWORD)v5 == ((*((unsigned __int8 *)a1 + 4) >> 2) & 7) )
    sub_1403C9B90(a1, a2, (unsigned int)v5);
  return 2LL;
}
