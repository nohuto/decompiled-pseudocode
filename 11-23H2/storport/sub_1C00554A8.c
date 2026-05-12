/*
 * XREFs of sub_1C00554A8 @ 0x1C00554A8
 * Callers:
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 */

__int64 __fastcall sub_1C00554A8(__int64 a1, char a2, __int16 a3, int a4, __int64 *a5)
{
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 *v9; // rbx
  __int64 v10; // r9
  void *v11; // r12
  __int64 *v12; // r9
  void *v13; // r13
  __int64 v14; // rbx
  char v15; // al
  unsigned int LockArray_high; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rax
  _BYTE *v22; // rcx
  char v23; // al
  int v24; // eax
  unsigned int v25; // ebp
  char v27; // [rsp+60h] [rbp+8h]
  char v29; // [rsp+71h] [rbp+19h]

  v29 = HIBYTE(a3);
  v5 = 0;
  v27 = a3;
  v6 = a1;
  v7 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = a1;
  }
  else if ( *(_DWORD *)a1 != 1094997074 )
  {
    return (unsigned int)-1073741637;
  }
  v8 = (a4 + 511) & 0xFFFFFE00;
  v9 = (__int64 *)(v6 + 8);
  if ( v7 )
    v10 = *(_QWORD *)(v7 + 8);
  else
    v10 = *v9;
  v11 = (void *)sub_1C0007CF4(64LL, v8, 1129603410LL, v10);
  if ( !v11 )
    return (unsigned int)-1073741801;
  v12 = (__int64 *)(v7 + 8);
  if ( !v7 )
    v12 = (__int64 *)(v6 + 8);
  v13 = (void *)sub_1C0007CF4(64LL, 255LL, 1314087250LL, *v12);
  if ( !v13 )
  {
    v5 = -1073741801;
LABEL_17:
    ExFreePoolWithTag(v11, 0x43546152u);
    return v5;
  }
  if ( v7 )
    v9 = (__int64 *)(v7 + 8);
  v14 = sub_1C0007BA4(*v9, 0, *(_BYTE *)(v6 + 442), 1);
  if ( !v14 )
  {
    v5 = -1073741801;
    ExFreePoolWithTag(v13, 0x4E536152u);
    goto LABEL_17;
  }
  v15 = *(_BYTE *)(v6 + 442);
  *(_BYTE *)(v14 + 3) = 0;
  if ( v15 == 1 )
  {
    *(_DWORD *)(v14 + 20) = 0;
    *(_DWORD *)(v14 + 24) = 384;
    if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(v6) )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v6 + 6080) + 8LL * LockArray_high));
      v17 = **(_QWORD **)(*(_QWORD *)(v6 + 6080) + 8LL * LockArray_high);
      *(_DWORD *)(v14 + 44) = HIDWORD(v17);
    }
    else
    {
      LODWORD(v17) = -1;
    }
    *(_DWORD *)(v14 + 32) = v17;
    *(_QWORD *)(v14 + 64) = v11;
    *(_DWORD *)(v14 + 60) = v8;
    *(_QWORD *)(v14 + 80) = 0LL;
    if ( v7 )
      v18 = *(_DWORD *)(v7 + 1320);
    else
      v18 = *(_DWORD *)(v6 + 4060);
    v19 = *(unsigned int *)(v14 + 52);
    *(_DWORD *)(v14 + 40) = v18;
    if ( v7 )
    {
      *(_BYTE *)(v19 + v14 + 8) = *(_BYTE *)(v7 + 96);
      *(_BYTE *)(v19 + v14 + 9) = *(_BYTE *)(v7 + 97);
      v20 = *(_BYTE *)(v7 + 98);
    }
    else
    {
      *(_WORD *)(v19 + v14 + 8) = 0;
      v20 = 0;
    }
    *(_BYTE *)(v19 + v14 + 10) = v20;
    v21 = v14 + *(unsigned int *)(v14 + 120);
    *(_DWORD *)v21 = 64;
    v22 = (_BYTE *)(v21 + 24);
    *(_DWORD *)(v21 + 4) = 32;
    *(_WORD *)(v21 + 8) = -256;
    *(_QWORD *)(v21 + 16) = v13;
    *(_BYTE *)(v21 + 10) = 12;
  }
  else
  {
    *(_BYTE *)(v14 + 2) = 0;
    *(_WORD *)v14 = 88;
    *(_DWORD *)(v14 + 12) = 384;
    if ( v7 )
    {
      *(_BYTE *)(v14 + 5) = *(_BYTE *)(v7 + 96);
      *(_BYTE *)(v14 + 6) = *(_BYTE *)(v7 + 97);
      v23 = *(_BYTE *)(v7 + 98);
    }
    else
    {
      *(_WORD *)(v14 + 5) = 0;
      v23 = 0;
    }
    *(_BYTE *)(v14 + 7) = v23;
    *(_BYTE *)(v14 + 8) = -1;
    *(_QWORD *)(v14 + 24) = v11;
    *(_DWORD *)(v14 + 16) = v8;
    *(_QWORD *)(v14 + 48) = 0LL;
    if ( v7 )
      v24 = *(_DWORD *)(v7 + 1320);
    else
      v24 = *(_DWORD *)(v6 + 4060);
    *(_DWORD *)(v14 + 20) = v24;
    v22 = (_BYTE *)(v14 + 72);
    *(_WORD *)(v14 + 10) = -244;
    *(_QWORD *)(v14 + 32) = v13;
  }
  v22[4] |= 0x80u;
  v22[1] = a2;
  v22[3] = v27;
  v22[2] = v29;
  v25 = v8 >> 9;
  v22[9] = v25;
  v22[8] = BYTE1(v25);
  v22[7] = BYTE2(v25);
  *v22 = -75;
  v22[6] = HIBYTE(v25);
  *a5 = v14;
  return v5;
}
