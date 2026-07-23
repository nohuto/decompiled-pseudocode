/*
 * XREFs of sub_1407A8280 @ 0x1407A8280
 * Callers:
 *     sub_14068191C @ 0x14068191C (sub_14068191C.c)
 *     sub_140683FE0 @ 0x140683FE0 (sub_140683FE0.c)
 *     sub_1406BED60 @ 0x1406BED60 (sub_1406BED60.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_1407A5B90 @ 0x1407A5B90 (sub_1407A5B90.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 * Callees:
 *     sub_140238BF8 @ 0x140238BF8 (sub_140238BF8.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F614C @ 0x1402F614C (sub_1402F614C.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_QWORD *__fastcall sub_1407A8280(_QWORD *a1, _OWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // r13d
  __int64 v11; // r8
  char *v12; // r11
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  _OWORD *v19; // r11
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v25; // rbx
  _QWORD *v26; // r14
  _QWORD *i; // r10
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // eax

  memset(a2, 0, 0x1B0uLL);
  result = (_QWORD *)PoEnergyEstimationEnabled();
  if ( !(_BYTE)result || a1 == qword_140D06940 )
    return result;
  v5 = a1[285];
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v5 + 64);
  *((_QWORD *)a2 + 9) = *(_QWORD *)(v5 + 72);
  *((_QWORD *)a2 + 10) = *(_QWORD *)(v5 + 80);
  *((_QWORD *)a2 + 11) = *(_QWORD *)(v5 + 88);
  *((_QWORD *)a2 + 12) = *(_QWORD *)(v5 + 96);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = sub_1402F614C();
  v8 = a2 + 17;
  v9 = v5 - (_QWORD)a2;
  v10 = v7;
  v11 = 14LL;
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v9);
    ++v8;
    --v11;
  }
  while ( v11 );
  v12 = (char *)a2 + 104;
  v13 = 3LL;
  do
  {
    v14 = *(_QWORD *)&v12[v9];
    v15 = 0;
    *(_QWORD *)v12 = v14;
    v16 = HIDWORD(v14);
    if ( (v16 & 0x80000000) != 0LL )
    {
      v37 = v16 & 0x7FFFFFFF;
      *((_DWORD *)v12 + 1) = v37;
      v38 = *(_DWORD *)&v12[v9];
      if ( (unsigned int)v6 > v38 )
      {
        *(_DWORD *)v12 = v6;
        v15 = v6 - v38;
        if ( (_DWORD)v6 - v38 == -1 || ~v15 < v37 )
          v39 = -1;
        else
          v39 = v15 + v37;
        *((_DWORD *)v12 + 1) = v39 & 0x7FFFFFFF;
      }
    }
    if ( v12 == (char *)a2 + 104 )
    {
      v17 = 304LL;
    }
    else
    {
      if ( v12 != (char *)(a2 + 7) )
        goto LABEL_14;
      v17 = 312LL;
    }
    if ( (_OWORD *)((char *)a2 + v17) && v15 )
      sub_140238BF8((__int64 *)((char *)a2 + v17), v10 - (v15 >> 12), v10);
LABEL_14:
    v12 += 8;
    --v13;
  }
  while ( v13 );
  v18 = 5LL;
  v19 = a2 + 24;
  while ( 2 )
  {
    v20 = *(_QWORD *)((char *)v19 + v9);
    v21 = 0;
    *(_QWORD *)v19 = v20;
    v22 = HIDWORD(v20);
    if ( (v22 & 0x80000000) != 0LL )
    {
      v40 = v22 & 0x7FFFFFFF;
      *((_DWORD *)v19 + 1) = v40;
      v41 = *(_DWORD *)((char *)v19 + v9);
      if ( (unsigned int)v6 > v41 )
      {
        *(_DWORD *)v19 = v6;
        v21 = v6 - v41;
        if ( (_DWORD)v6 - v41 == -1 || ~v21 < v40 )
          v42 = -1;
        else
          v42 = v21 + v40;
        *((_DWORD *)v19 + 1) = v42 & 0x7FFFFFFF;
      }
    }
    if ( v19 == (_OWORD *)((char *)a2 + 392) )
    {
      v23 = 352LL;
      goto LABEL_22;
    }
    if ( v19 == a2 + 25 )
    {
      v23 = 360LL;
LABEL_22:
      if ( (_OWORD *)((char *)a2 + v23) && v21 )
        sub_140238BF8((__int64 *)((char *)a2 + v23), v10 - (v21 >> 12), v10);
      goto LABEL_25;
    }
    if ( v19 == (_OWORD *)((char *)a2 + 408) )
    {
      v23 = 368LL;
      goto LABEL_22;
    }
LABEL_25:
    v19 = (_OWORD *)((char *)v19 + 8);
    if ( --v18 )
      continue;
    break;
  }
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v5 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v5 + 132);
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v5 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v5 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v5 + 428);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v25 = a1 + 268;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 268), 0LL);
  v26 = a1 + 188;
  *a2 = *(_OWORD *)v5;
  a2[1] = *(_OWORD *)(v5 + 16);
  a2[2] = *(_OWORD *)(v5 + 32);
  a2[3] = *(_OWORD *)(v5 + 48);
  a2[9] = *(_OWORD *)(v5 + 144);
  a2[10] = *(_OWORD *)(v5 + 160);
  a2[11] = *(_OWORD *)(v5 + 176);
  a2[12] = *(_OWORD *)(v5 + 192);
  a2[13] = *(_OWORD *)(v5 + 208);
  a2[14] = *(_OWORD *)(v5 + 224);
  a2[15] = *(_OWORD *)(v5 + 240);
  a2[16] = *(_OWORD *)(v5 + 256);
  for ( i = (_QWORD *)*v26; i != v26; i = (_QWORD *)*i )
  {
    v28 = i[34];
    v29 = *(_QWORD *)(v28 + 192);
    v30 = *((_DWORD *)a2 + 68);
    if ( (unsigned int)v29 > v30 )
    {
      *((_DWORD *)a2 + 68) = v29;
      if ( (unsigned int)v29 - v30 >= 0x20 )
        v36 = 0;
      else
        v36 = *((_DWORD *)a2 + 69) << (v29 - v30);
      *((_DWORD *)a2 + 69) = v36 | HIDWORD(v29);
    }
    else
    {
      v31 = v30 - v29;
      if ( v31 < 0x20 )
        *((_DWORD *)a2 + 69) |= HIDWORD(v29) << v31;
    }
    v32 = v28 - (_QWORD)a2;
    v33 = a2;
    v34 = 4LL;
    do
    {
      v35 = 2LL;
      do
      {
        *v33 += *(_QWORD *)((char *)v33 + v32);
        v33[18] += *(_QWORD *)((char *)v33 + v32 + 64);
        v33[26] += *(_QWORD *)((char *)v33 + v32 + 128);
        ++v33;
        --v35;
      }
      while ( v35 );
      --v34;
    }
    while ( v34 );
  }
  if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v25);
  sub_1402AFC00((ULONG_PTR)v25);
  return sub_1402AC800((__int64)CurrentThread);
}
