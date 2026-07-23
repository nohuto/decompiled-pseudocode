/*
 * XREFs of sub_1405CF800 @ 0x1405CF800
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405D3288 @ 0x1405D3288 (sub_1405D3288.c)
 *     sub_1405D33D8 @ 0x1405D33D8 (sub_1405D33D8.c)
 *     sub_1405D9440 @ 0x1405D9440 (sub_1405D9440.c)
 *     sub_1405D9D50 @ 0x1405D9D50 (sub_1405D9D50.c)
 *     sub_1405D9E58 @ 0x1405D9E58 (sub_1405D9E58.c)
 *     sub_1405DAC04 @ 0x1405DAC04 (sub_1405DAC04.c)
 *     sub_14099786C @ 0x14099786C (sub_14099786C.c)
 */

__int64 __fastcall sub_1405CF800(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // r13d
  __int64 *v5; // rdi
  unsigned int v6; // r10d
  __int64 v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v2 = 0;
  if ( !a1[5] )
  {
    v4 = a1[1];
    if ( v4 != -1 )
    {
      v11 = sub_140348800(v4);
      v5 = *(__int64 **)(v11 + 33976);
      v7 = *(_QWORD *)(v11 + 33968);
      goto LABEL_14;
    }
LABEL_32:
    sub_140224C00(&qword_140C22FE0);
    return (unsigned int)-1073741811;
  }
  v3 = qword_140D06970;
  v4 = -1;
  v5 = 0LL;
  if ( (__int64 *)qword_140D06970 == &qword_140D06970 )
    goto LABEL_32;
  do
  {
    v6 = *(_DWORD *)(v3 + 296);
    v7 = v3;
    v8 = 0;
    if ( v6 )
    {
      v9 = *(_QWORD *)(v3 + 312);
      while ( 1 )
      {
        v10 = v9 + 136LL * v8;
        if ( *(_DWORD *)(v10 + 16) )
        {
          if ( *(_DWORD *)(v10 + 20) == a1[1] )
            break;
        }
        if ( ++v8 >= v6 )
          goto LABEL_10;
      }
      v5 = (__int64 *)(v9 + 136LL * v8);
      if ( v10 )
        break;
    }
LABEL_10:
    v3 = *(_QWORD *)v3;
  }
  while ( (__int64 *)v3 != &qword_140D06970 );
LABEL_14:
  if ( !v7 || !v5 )
    goto LABEL_32;
  v12 = a1[2];
  v13 = a1[3];
  *((_DWORD *)v5 + 8) = a1[4];
  v14 = *((_DWORD *)v5 + 6);
  if ( v14 != v12 )
  {
    if ( v14 == 100 )
    {
      v5[5] = MEMORY[0xFFFFF78000000008];
    }
    else if ( v12 == 100 )
    {
      sub_1405D3288((MEMORY[0xFFFFF78000000008] - v5[5]) / 0x2710uLL, v4);
      v5[5] = 0LL;
    }
    v15 = *v5;
    *((_DWORD *)v5 + 6) = v12;
    if ( v15 )
    {
      sub_1405D9440(v15, v12);
    }
    else if ( !*(_DWORD *)(v7 + 304) )
    {
      sub_1405D9D50(*(_QWORD *)(v7 + 16) - 33968LL, (unsigned int)a1[1], v12);
    }
    sub_1405D33D8(100 - v12, v4);
  }
  if ( *((_DWORD *)v5 + 7) != v13 )
  {
    v16 = *v5;
    *((_DWORD *)v5 + 7) = v13;
    if ( v16 )
    {
      sub_1405DAC04(v16, v13);
    }
    else if ( !*(_DWORD *)(v7 + 304) )
    {
      sub_1405D9E58(*(_QWORD *)(v7 + 16) - 33968LL, (unsigned int)a1[1], v13);
    }
  }
  *(_BYTE *)(v7 + 989) = 1;
  sub_14099786C(0LL);
  return v2;
}
