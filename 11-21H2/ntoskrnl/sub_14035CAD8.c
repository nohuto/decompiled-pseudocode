/*
 * XREFs of sub_14035CAD8 @ 0x14035CAD8
 * Callers:
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     sub_14039EE50 @ 0x14039EE50 (sub_14039EE50.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210C14 @ 0x140210C14 (sub_140210C14.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_14028F83C @ 0x14028F83C (sub_14028F83C.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_1402F8020 @ 0x1402F8020 (sub_1402F8020.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_1403457BC @ 0x1403457BC (sub_1403457BC.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

char __fastcall sub_14035CAD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  char v7; // r9
  char v8; // r14
  int v10; // r9d
  unsigned int v11; // edx
  char v12; // al
  _QWORD *v13; // rbx
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 *v19; // r15
  _BYTE *v20; // r12
  char v21; // cl
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // edx
  char v27; // al
  char v28; // al
  __int64 v29; // rax
  bool v30; // cl
  __int64 *v31; // r13
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // r8
  unsigned int v37; // edx
  char v38; // al
  char v39; // al
  signed int v40; // r15d
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 *v43; // r15
  _BYTE *v44; // r12
  char v45; // cl
  __int64 v46; // rdx
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  bool v52; // cl
  __int64 v53; // [rsp+30h] [rbp-10h] BYREF
  volatile signed __int32 *v54; // [rsp+38h] [rbp-8h] BYREF
  char v55; // [rsp+90h] [rbp+50h]

  v53 = 0LL;
  v54 = 0LL;
  v7 = sub_140344DD0(a1, (__int64)&v53, &v54, a4);
  v8 = 1;
  if ( (unsigned __int8)(v7 - 1) > 2u && v7 != 7 )
    goto LABEL_3;
  if ( !sub_1402F8020(a1) )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 564) )
    goto LABEL_3;
  if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
    goto LABEL_3;
  v11 = *(char *)(a1 + 195);
  if ( *(char *)(a1 + 195) <= 0 )
    goto LABEL_3;
  v12 = dword_140D06AB0 + *(_BYTE *)(a1 + 563);
  v6 = (unsigned __int8)v12;
  if ( v12 >= 16 )
    v6 = 15LL;
  if ( (char)v6 <= (char)v11 )
  {
LABEL_3:
    sub_14035D0F8(v6, v53, v54);
    return 0;
  }
  v14 = (char)v6;
  v55 = 0;
  *(_BYTE *)(a1 + 564) = (v6 - v11) & 0xF;
  v40 = v11;
  if ( v10 == 1 )
  {
    v13 = (_QWORD *)v53;
    sub_140210C14(v53, (__int64)v54, a1, v11);
    sub_140291010(0LL, a1, (PVOID *)(unsigned int)v14, 0);
    sub_14028F83C(a1, v14, a2);
    goto LABEL_15;
  }
  if ( v10 == 2 )
  {
    v13 = (_QWORD *)v53;
    v31 = (__int64 *)(v53 + 16);
    v32 = *(_QWORD *)(v53 + 16);
    sub_140291010(v53, a1, (PVOID *)(unsigned int)(char)v6, v32 == 0);
    if ( v14 >= v40 )
    {
      if ( v14 > v40 && !v32 )
      {
        v13 = (_QWORD *)v53;
        if ( *(_BYTE *)(a1 + 388) == 2 )
          goto LABEL_16;
      }
      goto LABEL_15;
    }
    if ( v32 )
      goto LABEL_15;
    v13 = (_QWORD *)v53;
    if ( *(_BYTE *)(a1 + 388) != 2 )
    {
      if ( *(_DWORD *)(v53 + 32472) >> (v14 + 1) )
        *(_BYTE *)(a1 + 112) |= 0x10u;
      goto LABEL_15;
    }
    v33 = sub_1402B7AE0(v53, a1, 0LL);
    v35 = v33;
    if ( !v33 )
    {
LABEL_15:
      v14 = 0;
      goto LABEL_16;
    }
    v43 = v13 + 7;
    v44 = (_BYTE *)v13[7];
    if ( (*(_BYTE *)(v33 + 2) & 4) == 0 )
    {
      v45 = *(_BYTE *)(v33 + 195);
LABEL_78:
      v48 = v45 & 0x7F | (*(_BYTE *)(v35 + 119) << 7);
      *v44 = v48;
      v49 = v13[4375];
      if ( v49 )
      {
        if ( v35 == v13[3] )
          v50 = (unsigned int)dword_140D0504C;
        else
          v50 = v48 & 0x7F;
        sub_14045B7FC(v49, v50, 0LL);
      }
      v36 = *v43;
      if ( dword_140D068FC )
      {
        v37 = *(_DWORD *)(v35 + 80);
        v38 = (*(_BYTE *)(v36 + 64) ^ *(_BYTE *)(v35 + 512)) & 7 ^ *(_BYTE *)(v36 + 64);
        v39 = (v38 ^ (8 * *(_BYTE *)(v35 + 516))) & 0x38 ^ v38;
        if ( v37 <= *(_DWORD *)(v35 + 84) )
          v37 = *(_DWORD *)(v35 + 84);
        *(_BYTE *)(v36 + 64) = (v37 >= dword_140D05308 ? 0x40 : 0) | v39 & 0xBF;
      }
      v51 = v13[4375];
      v52 = v35 == v13[3];
      *v31 = v35;
      if ( v51 )
        *(_BYTE *)(v51 + 16) = v52;
      if ( *(_BYTE *)(v35 + 388) == 1 )
        *(_DWORD *)(v35 + 132) = *(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v35 + 388) = 3;
      v55 = 1;
      goto LABEL_14;
    }
    if ( *(char *)(v33 + 195) < 16 )
    {
      if ( *(_QWORD *)(v33 + 104) && (v46 = *(_QWORD *)(v33 + 104)) != 0 )
      {
        v13 = (_QWORD *)v53;
        v47 = *(unsigned int *)(v53 + 216) + v46;
        if ( v47 && (unsigned int)sub_1402103E0(v33, v47, v34, 0, 0LL) )
        {
          v45 = 1;
          goto LABEL_78;
        }
      }
      else
      {
        v13 = (_QWORD *)v53;
      }
    }
    v45 = *(_BYTE *)(v35 + 195);
    goto LABEL_78;
  }
  if ( v10 != 3 )
  {
    sub_140291010(0LL, a1, (PVOID *)(unsigned int)(char)v6, 0);
LABEL_14:
    v13 = (_QWORD *)v53;
    goto LABEL_15;
  }
  v13 = (_QWORD *)v53;
  sub_140291010(v53, a1, (PVOID *)(unsigned int)(char)v6, 1);
  if ( v14 < v40 )
  {
    v16 = sub_1402B7AE0((__int64)v13, a1, 0LL);
    v18 = v16;
    if ( !v16 )
      goto LABEL_15;
    v19 = v13 + 7;
    v20 = (_BYTE *)v13[7];
    if ( (*(_BYTE *)(v16 + 2) & 4) != 0 )
    {
      if ( *(char *)(v16 + 195) < 16 )
      {
        if ( *(_QWORD *)(v16 + 104) && (v41 = *(_QWORD *)(v16 + 104)) != 0 )
        {
          v13 = (_QWORD *)v53;
          v42 = *(unsigned int *)(v53 + 216) + v41;
          if ( v42 && (unsigned int)sub_1402103E0(v16, v42, v17, 0, 0LL) )
          {
            v21 = 1;
            goto LABEL_25;
          }
        }
        else
        {
          v13 = (_QWORD *)v53;
        }
      }
      v21 = *(_BYTE *)(v18 + 195);
    }
    else
    {
      v21 = *(_BYTE *)(v16 + 195);
    }
LABEL_25:
    v22 = v21 & 0x7F | (*(_BYTE *)(v18 + 119) << 7);
    *v20 = v22;
    v23 = v13[4375];
    if ( v23 )
    {
      if ( v18 == v13[3] )
        v24 = (unsigned int)dword_140D0504C;
      else
        v24 = v22 & 0x7F;
      sub_14045B7FC(v23, v24, 0LL);
    }
    v25 = *v19;
    if ( dword_140D068FC )
    {
      v26 = *(_DWORD *)(v18 + 80);
      v27 = (*(_BYTE *)(v25 + 64) ^ *(_BYTE *)(v18 + 512)) & 7 ^ *(_BYTE *)(v25 + 64);
      v28 = (v27 ^ (8 * *(_BYTE *)(v18 + 516))) & 0x38 ^ v27;
      if ( v26 <= *(_DWORD *)(v18 + 84) )
        v26 = *(_DWORD *)(v18 + 84);
      *(_BYTE *)(v25 + 64) = (v26 >= dword_140D05308 ? 0x40 : 0) | v28 & 0xBF;
    }
    v29 = v13[4375];
    v30 = v18 == v13[3];
    v13[2] = v18;
    if ( v29 )
      *(_BYTE *)(v29 + 16) = v30;
    if ( *(_BYTE *)(v18 + 388) == 1 )
      *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v18 + 388) = 3;
    sub_1402F6970(a2, a1);
    goto LABEL_14;
  }
LABEL_16:
  sub_140292818(0LL, a1);
  sub_14035D0F8(v15, v13, v54);
  if ( v55 && HIDWORD(KeGetPcr()[1].LockArray) != *(_DWORD *)(v53 + 36) )
    sub_14022BA48();
  if ( v14 > 0 )
    sub_1403457BC((__int64)KeGetCurrentPrcb(), v53, v14);
  return v8;
}
