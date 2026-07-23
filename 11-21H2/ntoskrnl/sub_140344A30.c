/*
 * XREFs of sub_140344A30 @ 0x140344A30
 * Callers:
 *     sub_14021050C @ 0x14021050C (sub_14021050C.c)
 *     sub_14022B5D8 @ 0x14022B5D8 (sub_14022B5D8.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     sub_1402EB9D0 @ 0x1402EB9D0 (sub_1402EB9D0.c)
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 *     sub_1403438F0 @ 0x1403438F0 (sub_1403438F0.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_140344640 @ 0x140344640 (sub_140344640.c)
 *     sub_1403462B0 @ 0x1403462B0 (sub_1403462B0.c)
 *     sub_1403597CC @ 0x1403597CC (sub_1403597CC.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 *     sub_1405779D0 @ 0x1405779D0 (sub_1405779D0.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210C14 @ 0x140210C14 (sub_140210C14.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_14028F83C @ 0x14028F83C (sub_14028F83C.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_1403457BC @ 0x1403457BC (sub_1403457BC.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

char __fastcall sub_140344A30(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v7; // r14d
  char v8; // al
  signed int v9; // r12d
  char v10; // r13
  _QWORD *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  __int64 *v16; // r15
  _BYTE *v17; // r12
  char v18; // cl
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r14
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r14
  __int64 *v35; // r12
  _BYTE *v36; // r13
  char v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // edx
  char v45; // al
  char v46; // al
  char v47; // cl
  __int64 v48; // rax
  bool v49; // cl
  __int64 v50; // rdx
  unsigned int v51; // edx
  char v52; // al
  char v53; // al
  char v54; // cl
  __int64 *v55; // [rsp+30h] [rbp-20h]
  __int64 v56; // [rsp+80h] [rbp+30h] BYREF
  int v57; // [rsp+90h] [rbp+40h]
  __int64 v58; // [rsp+98h] [rbp+48h] BYREF

  v3 = *(_DWORD *)(a1 + 856);
  v4 = 0;
  v56 = 0LL;
  v58 = 0LL;
  v57 = 0;
  if ( v3 )
  {
    _BitScanReverse((unsigned int *)&v28, v3);
    v57 = v28;
    if ( a3 < v28 )
      a3 = v28;
  }
  v7 = a3;
  if ( *(char *)(a1 + 195) != a3 )
  {
    v8 = sub_140344DD0(a1, &v56, &v58);
    v9 = *(char *)(a1 + 195);
    v10 = 0;
    if ( v8 == 2 )
    {
      v11 = (_QWORD *)v56;
      v12 = *(_QWORD *)(v56 + 16);
      v55 = (__int64 *)(v56 + 16);
      sub_140291010(v56, a1, (PVOID *)v7, v12 == 0);
      if ( (int)v7 >= v9 )
      {
        if ( (int)v7 > v9 && !v12 )
        {
          if ( *(_BYTE *)(a1 + 388) == 2 )
          {
            v4 = v7;
            sub_140292818(0LL, a1);
            v14 = v56;
            goto LABEL_12;
          }
          goto LABEL_23;
        }
LABEL_24:
        sub_140292818(0LL, a1);
        sub_14035D0F8(v23, v11, v58);
        if ( v10 && HIDWORD(KeGetPcr()[1].LockArray) != *(_DWORD *)(v56 + 36) )
          sub_14022BA48();
        return 1;
      }
      if ( v12 )
        goto LABEL_24;
      v11 = (_QWORD *)v56;
      if ( *(_BYTE *)(a1 + 388) != 2 )
      {
        if ( *(_DWORD *)(v56 + 32472) >> (v7 + 1) )
          *(_BYTE *)(a1 + 112) |= 0x10u;
        goto LABEL_24;
      }
      v25 = sub_1402B7AE0(v56, a1, 0LL);
      v27 = v25;
      if ( !v25 )
        goto LABEL_24;
      v16 = v11 + 7;
      v17 = (_BYTE *)v11[7];
      if ( (*(_BYTE *)(v25 + 2) & 4) != 0 )
      {
        if ( *(char *)(v25 + 195) < 16 )
        {
          if ( *(_QWORD *)(v25 + 104) && (v30 = *(_QWORD *)(v25 + 104)) != 0 )
          {
            v11 = (_QWORD *)v56;
            v31 = *(unsigned int *)(v56 + 216) + v30;
            if ( v31 && (unsigned int)sub_1402103E0(v25, v31, v26, 0, 0LL) )
            {
              v18 = 1;
              goto LABEL_16;
            }
          }
          else
          {
            v11 = (_QWORD *)v56;
          }
        }
        v18 = *(_BYTE *)(v27 + 195);
      }
      else
      {
        v18 = *(_BYTE *)(v25 + 195);
      }
LABEL_16:
      v19 = v18 & 0x7F | (*(_BYTE *)(v27 + 119) << 7);
      *v17 = v19;
      v20 = v11[4375];
      if ( v20 )
      {
        if ( v27 == v11[3] )
          v50 = (unsigned int)dword_140D0504C;
        else
          v50 = v19 & 0x7F;
        sub_14045B7FC(v20, v50, 0LL);
      }
      v21 = *v16;
      if ( dword_140D068FC )
      {
        v51 = *(_DWORD *)(v27 + 80);
        v52 = (*(_BYTE *)(v21 + 64) ^ *(_BYTE *)(v27 + 512)) & 7 ^ *(_BYTE *)(v21 + 64);
        v53 = (v52 ^ (8 * *(_BYTE *)(v27 + 516))) & 0x38 ^ v52;
        if ( v51 <= *(_DWORD *)(v27 + 84) )
          v51 = *(_DWORD *)(v27 + 84);
        v54 = 64;
        if ( v51 < dword_140D05308 )
          v54 = 0;
        *(_BYTE *)(v21 + 64) = v54 | v53 & 0xBF;
      }
      *v55 = v27;
      v22 = v11[4375];
      if ( v22 )
        *(_BYTE *)(v22 + 16) = v27 == v11[3];
      if ( *(_BYTE *)(v27 + 388) == 1 )
        *(_DWORD *)(v27 + 132) = *(_DWORD *)(v27 + 132) - *(_DWORD *)(v27 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v27 + 388) = 3;
      v10 = 1;
LABEL_23:
      v11 = (_QWORD *)v56;
      goto LABEL_24;
    }
    if ( v8 == 1 )
    {
      sub_140210C14(v56, v58, a1, v9);
      sub_140291010(0LL, a1, (PVOID *)v7, 0);
      sub_14028F83C(a1, v7, a2);
      goto LABEL_35;
    }
    if ( v8 != 3 )
    {
      sub_140291010(0LL, a1, (PVOID *)v7, 0);
LABEL_35:
      sub_140292818(0LL, a1);
      sub_14035D0F8(v29, v56, v58);
      return 1;
    }
    v15 = (_QWORD *)v56;
    sub_140291010(v56, a1, (PVOID *)v7, 1);
    if ( (int)v7 >= v9 )
    {
      v4 = v7;
LABEL_11:
      sub_140292818(0LL, a1);
      v14 = (__int64)v15;
LABEL_12:
      sub_14035D0F8(v13, v14, v58);
      if ( v4 > 0 )
        sub_1403457BC(KeGetCurrentPrcb(), v56, (unsigned int)v4);
      return 1;
    }
    v32 = sub_1402B7AE0((__int64)v15, a1, 0LL);
    v34 = v32;
    if ( !v32 )
      goto LABEL_11;
    v35 = v15 + 7;
    v36 = (_BYTE *)v15[7];
    if ( (*(_BYTE *)(v32 + 2) & 4) == 0 )
    {
      v37 = *(_BYTE *)(v32 + 195);
LABEL_62:
      v40 = v37 & 0x7F | (*(_BYTE *)(v34 + 119) << 7);
      *v36 = v40;
      v41 = v15[4375];
      if ( v41 )
      {
        if ( v34 == v15[3] )
          v42 = (unsigned int)dword_140D0504C;
        else
          v42 = v40 & 0x7F;
        sub_14045B7FC(v41, v42, 0LL);
      }
      v43 = *v35;
      if ( dword_140D068FC )
      {
        v44 = *(_DWORD *)(v34 + 80);
        v45 = (*(_BYTE *)(v43 + 64) ^ *(_BYTE *)(v34 + 512)) & 7 ^ *(_BYTE *)(v43 + 64);
        v46 = (v45 ^ (8 * *(_BYTE *)(v34 + 516))) & 0x38 ^ v45;
        if ( v44 <= *(_DWORD *)(v34 + 84) )
          v44 = *(_DWORD *)(v34 + 84);
        v47 = 64;
        if ( v44 < dword_140D05308 )
          v47 = 0;
        *(_BYTE *)(v43 + 64) = v47 | v46 & 0xBF;
      }
      v48 = v15[4375];
      v49 = v34 == v15[3];
      v15[2] = v34;
      if ( v48 )
        *(_BYTE *)(v48 + 16) = v49;
      if ( *(_BYTE *)(v34 + 388) == 1 )
        *(_DWORD *)(v34 + 132) = *(_DWORD *)(v34 + 132) - *(_DWORD *)(v34 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v34 + 388) = 3;
      sub_1402F6970(a2, a1);
      v15 = (_QWORD *)v56;
      goto LABEL_11;
    }
    if ( *(char *)(v32 + 195) < 16 )
    {
      if ( *(_QWORD *)(v32 + 104) && (v38 = *(_QWORD *)(v32 + 104)) != 0 )
      {
        v15 = (_QWORD *)v56;
        v39 = *(unsigned int *)(v56 + 216) + v38;
        if ( v39 && (unsigned int)sub_1402103E0(v32, v39, v33, 0, 0LL) )
        {
          v37 = 1;
          goto LABEL_62;
        }
      }
      else
      {
        v15 = (_QWORD *)v56;
      }
    }
    v37 = *(_BYTE *)(v34 + 195);
    goto LABEL_62;
  }
  return 0;
}
