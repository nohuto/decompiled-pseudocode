/*
 * XREFs of sub_14021C1E0 @ 0x14021C1E0
 * Callers:
 *     sub_14021C050 @ 0x14021C050 (sub_14021C050.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14021C1E0(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  unsigned __int64 v7; // r11
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // r8d
  unsigned __int64 v11; // rbx
  int i; // edi
  __int64 v13; // rax
  int v14; // edx
  unsigned __int64 j; // rcx
  int k; // ecx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx

  v7 = *(_QWORD *)(a4 + 24) - *(_QWORD *)(a4 + 32);
  v8 = a3;
  v9 = a2;
  if ( a1 )
    v7 /= (unsigned int)(a1 + 1);
  if ( !v7 )
    return 0;
  v10 = *(_DWORD *)(a4 + 40);
  v11 = 0LL;
  for ( i = 0; i < v10; v10 = *(_DWORD *)(a4 + 40) )
  {
    v13 = i++;
    *(_QWORD *)(8 * v13 + *(_QWORD *)(a4 + 16)) = *(_QWORD *)(*(_QWORD *)a4 + 8 * v13)
                                                - *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v13);
  }
  v14 = v10 - 1;
  for ( j = 0LL; v14 >= 0; --v14 )
  {
    j += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * v14);
    if ( j >= v7 - v7 * v8 / 0x64 )
      break;
  }
  *a7 = v14;
  for ( k = *(_DWORD *)(a4 + 40) - 1; k >= 0; --k )
  {
    v11 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k);
    if ( v11 >= v7 - v7 * v9 / 0x64 )
      break;
  }
  *a5 = k;
  if ( k > 0 )
    v17 = 100LL * *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k) / v7;
  else
    LOBYTE(v17) = 0;
  *a6 = v17;
  *(_QWORD *)(a4 + 32) += v7;
  v18 = (unsigned int)(*(_DWORD *)(a4 + 40) - 1);
  if ( (int)v18 >= 0 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8 * v18);
      v20 = *(_QWORD *)(a4 + 8);
      if ( v19 > v7 )
        break;
      *(_QWORD *)(v20 + 8 * v18) += v19;
      v7 -= v19;
      v18 = (unsigned int)(v18 - 1);
      if ( (int)v18 < 0 )
        return 1;
    }
    *(_QWORD *)(v20 + 8 * v18) += v7;
  }
  return 1;
}
