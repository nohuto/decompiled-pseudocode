/*
 * XREFs of sub_1405550FC @ 0x1405550FC
 * Callers:
 *     sub_1405540DC @ 0x1405540DC (sub_1405540DC.c)
 *     sub_1405554B0 @ 0x1405554B0 (sub_1405554B0.c)
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 *     sub_140554800 @ 0x140554800 (sub_140554800.c)
 */

char __fastcall sub_1405550FC(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v10; // r12
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rdi
  ULONG64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // r15
  unsigned __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  ULONG64 v23; // rsi
  unsigned __int64 *v24; // rbp
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  unsigned int v27; // esi
  unsigned int v28; // eax
  __int64 v29; // rbp
  _QWORD *v30; // r14
  _QWORD *i; // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  PVOID *j; // rbx
  _OWORD *v35; // rax
  __int64 v36; // rcx
  __int128 v37; // xmm1

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v12 = a2;
  v13 = a1;
  if ( a1 != 126 )
  {
    if ( a1 == 127 )
    {
      v14 = (__int64)a6;
      if ( a2 == 8 )
      {
        a6[20] = a3[43];
        a6[31] = a3[45];
        a6[19] = a3[48];
      }
      goto LABEL_5;
    }
LABEL_8:
    v14 = (__int64)a6;
    goto LABEL_9;
  }
  if ( !a5 )
    goto LABEL_8;
  v14 = a5;
LABEL_5:
  v10 = 1;
LABEL_9:
  v15 = KeGetPcr()[36].Unused[0] + 80;
  v16 = *(_QWORD *)(v14 + 152);
  if ( v15 - (unsigned int)dword_140D05050 <= v16 && v16 < v15 )
  {
    if ( v15 - v16 >= 0x7FFF )
      v17 = 0x7FFF;
    else
      v17 = v15 - v16;
    v18 = sub_140554800(*(_QWORD *)(v14 + 152), v17);
    sub_1403D99B4(v16, (PVOID)v18);
  }
  v19 = 2LL;
  if ( *((_BYTE *)CurrentPrcb + 33112) > 2u )
  {
    v20 = *(_QWORD *)&KeGetPcr()[94].PcrAlign1[12];
    if ( v20 - 24576 <= v16 && v16 < v20 )
    {
      if ( v20 - v16 >= 0x7FFF )
        v21 = 0x7FFF;
      else
        v21 = v20 - v16;
      v22 = sub_140554800(v16, v21);
      sub_1403D99B4(v16, (PVOID)v22);
    }
  }
  if ( v13 == 307 )
  {
    if ( (KeGetPcr()[36].Unused0[2] & 1) != 0 && a7 != *((_QWORD *)CurrentPrcb + 3) )
    {
      v23 = KeGetPcr()[36].Unused[0] + 80;
      v24 = (unsigned __int64 *)(*(_QWORD *)&KeGetPcr()[94].PcrAlign1[12] - 8LL);
      v25 = v23 - (unsigned int)dword_140D05050;
      if ( sub_1403D7FD4((__int64)v24, 8LL) )
      {
        v26 = *v24;
        if ( sub_1403D7FD4(v26, 8LL) )
        {
          if ( v25 <= v26 && v26 < v23 )
            v25 = v26;
        }
      }
      if ( v23 - v25 >= 0x7FFF )
        v27 = 0x7FFF;
      else
        v27 = v23 - v25;
      v28 = sub_140554800(v25, v27);
      sub_1403D99B4(v25, (PVOID)v28);
    }
    v29 = sub_140348800(*(_DWORD *)(a7 + 536));
    v30 = (_QWORD *)(v29 + 13120);
    do
    {
      for ( i = (_QWORD *)*v30; i; i = (_QWORD *)*i )
      {
        sub_1403D99B4((_DWORD)i - 8, (PVOID)0x40);
        v32 = i[6];
        if ( v32 != 1 )
          sub_1403D99B4(v32, (PVOID)0x60);
      }
      v30 += 6;
      --v19;
    }
    while ( v19 );
    v33 = *(_QWORD *)(v29 + 34984);
    if ( v33 && v33 != *(_QWORD *)(v29 + 34992) )
      sub_1403D99B4(v33, (PVOID)(unsigned int)dword_140D0502C);
    v13 = a1;
    v12 = a2;
  }
  for ( j = (PVOID *)qword_140C23140; j != &qword_140C23140; j = (PVOID *)*j )
    sub_1403D99B4((ULONG)j, (PVOID)0x420);
  LOBYTE(v35) = sub_140553A48(v13, v12, (__int64)a3, a4, a5);
  if ( v10 )
  {
    LOBYTE(v35) = qword_140D00A80;
    if ( qword_140D00A80 )
    {
      if ( a9 )
      {
        *(_DWORD *)(qword_140D00A80 + 24) |= 0x10000000u;
        v36 = 9LL;
        v35 = (_OWORD *)(qword_140D00A80 + 64);
        do
        {
          *v35 = *(_OWORD *)v14;
          v35[1] = *(_OWORD *)(v14 + 16);
          v35[2] = *(_OWORD *)(v14 + 32);
          v35[3] = *(_OWORD *)(v14 + 48);
          v35[4] = *(_OWORD *)(v14 + 64);
          v35[5] = *(_OWORD *)(v14 + 80);
          v35[6] = *(_OWORD *)(v14 + 96);
          v35 += 8;
          v37 = *(_OWORD *)(v14 + 112);
          v14 += 128LL;
          *(v35 - 1) = v37;
          --v36;
        }
        while ( v36 );
        *v35 = *(_OWORD *)v14;
        v35[1] = *(_OWORD *)(v14 + 16);
        v35[2] = *(_OWORD *)(v14 + 32);
        v35[3] = *(_OWORD *)(v14 + 48);
        v35[4] = *(_OWORD *)(v14 + 64);
      }
    }
  }
  return (char)v35;
}
