/*
 * XREFs of sub_140AD049C @ 0x140AD049C
 * Callers:
 *     sub_1403EBF10 @ 0x1403EBF10 (sub_1403EBF10.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_1403F974C @ 0x1403F974C (sub_1403F974C.c)
 *     sub_1403FA684 @ 0x1403FA684 (sub_1403FA684.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140ACF0E0 @ 0x140ACF0E0 (sub_140ACF0E0.c)
 *     sub_140AD0DA0 @ 0x140AD0DA0 (sub_140AD0DA0.c)
 *     sub_140AD18C0 @ 0x140AD18C0 (sub_140AD18C0.c)
 *     sub_140AD1F70 @ 0x140AD1F70 (sub_140AD1F70.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AD049C(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  int i; // r10d
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 *v8; // r10
  unsigned __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // r8

  *((_QWORD *)&v2 + 1) = a2;
  for ( i = *(_DWORD *)(a1 + 2392); (i & 0x40000000) == 0; i = *(_DWORD *)(a1 + 2392) )
  {
    v5 = *(_DWORD *)(a1 + 2396);
    *(_QWORD *)&v2 = DWORD2(v2) != 0;
    if ( (_DWORD)v2 == ((v5 >> 21) & 1) || (i & 2) == 0 )
      break;
    v6 = *(unsigned int *)(a1 + 2548);
    v7 = *(_QWORD *)(a1 + 2016);
    *(_QWORD *)&v2 = (unsigned int)(*(_DWORD *)(a1 + 1964) - v6);
    v8 = (__int64 *)(a1 + v6);
    v9 = a1 + v6 + 8 * ((unsigned __int64)v2 >> 3);
    if ( DWORD2(v2) )
    {
      v13 = __rdtsc();
      v2 = (__ROR8__(v13, 3) ^ v13) * (unsigned __int128)0x7010008004002001uLL;
      *((_QWORD *)&v2 + 1) ^= v2;
      *(_QWORD *)(a1 + 2552) = *((_QWORD *)&v2 + 1);
      if ( v8 != (__int64 *)v9 )
      {
        do
        {
          *(_QWORD *)&v2 = *((_QWORD *)&v2 + 1) ^ *v8;
          v14 = v7 ^ *v8;
          *v8 = v2;
          *((_QWORD *)&v2 + 1) = (v14 + __ROR8__(*((_QWORD *)&v2 + 1), BYTE8(v2) & 0x3F)) ^ 0xF09;
          ++v8;
        }
        while ( v8 != (__int64 *)v9 );
        v5 = *(_DWORD *)(a1 + 2396);
      }
      *(_QWORD *)(a1 + 2560) = *((_QWORD *)&v2 + 1);
      *(_DWORD *)(a1 + 2396) = v5 | 0x200000;
      return v2;
    }
    v10 = *(_QWORD *)(a1 + 2552);
    if ( v8 != (__int64 *)v9 )
    {
      do
      {
        *v8 ^= v10;
        v11 = *v8++;
        v10 = ((v7 ^ v11) + __ROR8__(v10, v10 & 0x3F)) ^ 0xF09;
      }
      while ( v8 != (__int64 *)v9 );
      v5 = *(_DWORD *)(a1 + 2396);
    }
    *(_DWORD *)(a1 + 2396) = v5 & 0xFFDFFFFF;
    if ( v10 == *(_QWORD *)(a1 + 2560) )
      return v2;
    v12 = *(_DWORD *)(a1 + 1964);
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 1384);
    *(_QWORD *)v2 = a1;
    *(_DWORD *)(v2 + 16) = v12;
    if ( *(_DWORD *)(a1 + 2240) )
      return v2;
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 1384);
    *(_QWORD *)(v2 + 24) = v10 ^ *(_QWORD *)(a1 + 2560);
    if ( *(_DWORD *)(a1 + 2240) )
      return v2;
    *(_QWORD *)(a1 + 2256) = 0LL;
    *(_QWORD *)&v2 = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 2264) = 256LL;
    *(_QWORD *)(a1 + 2248) = a1 - 0x5C5FC0A76E374B18LL;
    DWORD2(v2) = 0;
    *(_QWORD *)(a1 + 2272) = v10;
    *(_DWORD *)(a1 + 2240) = 1;
  }
  return v2;
}
