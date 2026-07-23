/*
 * XREFs of sub_1405D7630 @ 0x1405D7630
 * Callers:
 *     sub_14099AB34 @ 0x14099AB34 (sub_14099AB34.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 */

__int64 __fastcall sub_1405D7630(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // edx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // ecx
  unsigned __int64 v10; // r13
  _DWORD *v11; // r15
  __int64 v12; // r12
  __int64 v13; // rbx

  v2 = a2;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)v2 = v4;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)a1;
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 16) = result;
  if ( v4 )
  {
    v6 = v2 + 40;
    v7 = v4;
    v8 = a1 + 28;
    do
    {
      v9 = *(_DWORD *)v8 + *(_DWORD *)(v8 - 4) + *(_DWORD *)(v8 + 4);
      v10 = qword_140D069F8;
      *(_DWORD *)(v6 - 8) = v9;
      v3 += v9;
      *(_DWORD *)(v6 - 4) = *(_DWORD *)v8;
      *(_DWORD *)v6 = *(_DWORD *)(v8 - 4);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(v8 + 36);
      *(_QWORD *)(v6 + 16) = sub_14029394C(*(_QWORD *)(v8 + 28), v10, 0xF4240uLL);
      *(_DWORD *)(v6 + 8) = sub_14029394C(*(_QWORD *)(v8 + 20), v10, 0xF4240uLL);
      *(_DWORD *)(v6 + 4) = sub_14029394C(*(_QWORD *)(v8 + 12), v10, 0xF4240uLL);
      v11 = (_DWORD *)(v6 + 44);
      v12 = v8 + 188;
      v13 = 26LL;
      do
      {
        *(_QWORD *)(v11 - 3) = sub_14029394C(*(_QWORD *)(v12 - 16), v10, 0xF4240uLL);
        *(v11 - 1) = sub_14029394C(*(_QWORD *)(v12 - 8), v10, 0xF4240uLL);
        *v11 = sub_14029394C(*(_QWORD *)v12, v10, 0xF4240uLL);
        v11 += 6;
        result = *(unsigned int *)(v12 + 8);
        v12 += 32LL;
        *(v11 - 5) = result;
        --v13;
      }
      while ( v13 );
      v6 += 664LL;
      v8 += 1008LL;
      --v7;
    }
    while ( v7 );
    v2 = a2;
  }
  *(_QWORD *)(v2 + 8) = v3;
  return result;
}
