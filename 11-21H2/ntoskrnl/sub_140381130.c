/*
 * XREFs of sub_140381130 @ 0x140381130
 * Callers:
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_140381960 @ 0x140381960 (sub_140381960.c)
 *     sub_1403819D4 @ 0x1403819D4 (sub_1403819D4.c)
 *     sub_1403923A4 @ 0x1403923A4 (sub_1403923A4.c)
 *     sub_14045F42A @ 0x14045F42A (sub_14045F42A.c)
 *     sub_1405F616C @ 0x1405F616C (sub_1405F616C.c)
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 *     sub_1405FA770 @ 0x1405FA770 (sub_1405FA770.c)
 * Callees:
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_140383620 @ 0x140383620 (sub_140383620.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_140381130(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // edi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned int *v14; // r8
  __int64 *v16; // rcx

  sub_140237F80((__int64 *)a1, a3);
  v7 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v8 = 0;
    v10 = (__int64 *)(a3 + 8);
  }
  else
  {
    v8 = 1;
    v9 = 0LL;
    if ( *(_QWORD *)a1 )
      v9 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2LL);
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v9 && !(unsigned int)sub_140383620(v9, v6, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a3;
  }
  v11 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( !v8 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v12 = -1;
    v13 = (unsigned __int16)*(_DWORD *)v11;
    if ( *(_BYTE *)(v11 + 3) )
      break;
    if ( (unsigned __int16)*(_DWORD *)v11 )
    {
      do
      {
        if ( *(_DWORD *)(v11 + 16LL * ((v13 + v12) >> 1) + 16) > a2 )
          v13 = (v13 + v12) >> 1;
        else
          v12 = (v13 + v12) >> 1;
      }
      while ( v12 + 1 != v13 );
    }
    if ( v8 )
    {
      *v10 = v11;
      v10[1] = v11 + 16 * (v13 + 1LL);
      v10 += 2;
    }
    if ( v13 )
      v16 = (__int64 *)(v11 + 16LL * (v13 - 1) + 24);
    else
      v16 = (__int64 *)(v11 + 8);
    if ( **(_DWORD **)(a1 + 16) == -1 || *(_BYTE *)(v11 + 2) != 2 )
    {
      v11 = *v16;
    }
    else
    {
      v11 = sub_1405F67D0(a1 + 16, v16, 2 * (*(_DWORD *)(a3 + 32) & 1u));
      if ( !v11 )
        return (unsigned int)-1073741818;
    }
  }
  if ( (unsigned __int16)*(_DWORD *)v11 )
  {
    do
    {
      if ( *(_DWORD *)(v11 + 8LL * ((v13 + v12) >> 1) + 16) >= a2 )
        v13 = (v13 + v12) >> 1;
      else
        v12 = (v13 + v12) >> 1;
    }
    while ( v12 + 1 != v13 );
  }
  *v10 = v11;
  v14 = (unsigned int *)(v11 + 8 * (v13 + 2LL));
  v10[1] = (__int64)v14;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v10 - *(_QWORD *)a3) >> 4) + 1;
  if ( v13 >= (unsigned __int16)*(_DWORD *)v11 || *v14 < a2 || *v14 != a2 )
    return (unsigned int)-1073741275;
  return v7;
}
