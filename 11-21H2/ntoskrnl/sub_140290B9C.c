/*
 * XREFs of sub_140290B9C @ 0x140290B9C
 * Callers:
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 * Callees:
 *     sub_140210178 @ 0x140210178 (sub_140210178.c)
 *     sub_140210224 @ 0x140210224 (sub_140210224.c)
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210664 @ 0x140210664 (sub_140210664.c)
 *     sub_140210988 @ 0x140210988 (sub_140210988.c)
 *     sub_140210CE4 @ 0x140210CE4 (sub_140210CE4.c)
 *     sub_14022A040 @ 0x14022A040 (sub_14022A040.c)
 *     sub_14023BD18 @ 0x14023BD18 (sub_14023BD18.c)
 *     sub_140242E70 @ 0x140242E70 (sub_140242E70.c)
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_140291E98 @ 0x140291E98 (sub_140291E98.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_1402EDFE8 @ 0x1402EDFE8 (sub_1402EDFE8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

void __fastcall sub_140290B9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  char v5; // r12
  char v6; // r15
  unsigned __int64 v8; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // r14
  __int64 v18; // rbp
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdi
  _BYTE *v25; // rsi
  char v26; // cl
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  struct _KPRCB *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r8
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  char v44; // al
  char v45; // al
  unsigned int v46; // ecx
  _BYTE *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // eax
  char v51; // cl
  char v52; // al
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // edx
  char v57; // al
  char v58; // al
  __int64 v59; // rax
  bool v60; // cl
  __int64 v61; // rdi
  int v62; // eax
  int v63; // eax
  int v64; // eax
  char v65; // [rsp+30h] [rbp-58h] BYREF
  int v66; // [rsp+34h] [rbp-54h] BYREF
  int v67; // [rsp+38h] [rbp-50h] BYREF
  __int64 v68; // [rsp+40h] [rbp-48h]
  char v69; // [rsp+90h] [rbp+8h]
  char v70; // [rsp+A0h] [rbp+18h]

  v70 = a3;
  v65 = 0;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v69 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v66 = 0;
  while ( 1 )
  {
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v41 = *(_DWORD *)(v10 + 24);
        *(_DWORD *)(v10 + 24) = v41 + 1;
        if ( v41 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v37 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v37 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v42 = *(_DWORD *)(v37 + 24) - 1;
        *(_DWORD *)(v37 + 24) = v42;
        if ( !v42 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v66);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  v68 = v11;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 104);
    if ( v12 )
      v12 += *(unsigned int *)(a1 + 216);
  }
  if ( v8 > *(_QWORD *)(a1 + 34520) )
  {
    sub_140291380(a1, v8, 0LL);
    return;
  }
  v13 = *(_QWORD *)(v4 + 104);
  v14 = v13;
  if ( v13 )
  {
    v15 = *(unsigned int *)(a1 + 216) + v13;
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = *(_BYTE *)(v15 + 112);
        if ( (v16 & 4) != 0 )
          break;
        sub_14022A040(v14, a1, v15);
        if ( (*(_BYTE *)(v15 + 112) & 4) == 0 )
          goto LABEL_12;
        v6 = 1;
        v5 = 1;
        if ( v12 != v15 )
          goto LABEL_12;
        LOBYTE(a2) = 1;
        v69 = 1;
LABEL_13:
        v15 = *(_QWORD *)(v15 + 408);
        if ( !v15 )
        {
          v17 = *(_QWORD *)(v4 + 104);
          v18 = v68;
          if ( v17 )
            v17 += *(unsigned int *)(a1 + 216);
          if ( !v6 || v68 )
          {
            if ( v5 && v68 && v12 )
            {
              if ( v12 == v17 )
                goto LABEL_60;
              do
              {
                if ( !v12 )
                  break;
                v12 = *(_QWORD *)(v12 + 408);
              }
              while ( v12 != v17 );
              if ( v17 == v12 || (_BYTE)a2 )
              {
LABEL_60:
                v38 = sub_140210224(a1, v68, *(char *)(v68 + 195) + 1);
                if ( v38 )
                {
                  *(_BYTE *)(v18 + 388) = 1;
                  *(_DWORD *)(v18 + 436) = MEMORY[0xFFFFF78000000320];
                  v47 = *(_BYTE **)(a1 + 56);
                  if ( (*(_BYTE *)(v38 + 2) & 4) == 0
                    || *(char *)(v38 + 195) >= 16
                    || !*(_QWORD *)(v38 + 104)
                    || (v48 = *(_QWORD *)(v38 + 104)) == 0
                    || (v49 = *(unsigned int *)(a1 + 216) + v48) == 0
                    || (v50 = sub_1402103E0(v38, v49, v39, 0, 0LL), v51 = 1, !v50) )
                  {
                    v51 = *(_BYTE *)(v38 + 195);
                  }
                  v52 = v51 & 0x7F | (*(_BYTE *)(v38 + 119) << 7);
                  *v47 = v52;
                  v53 = *(_QWORD *)(a1 + 35000);
                  if ( v53 )
                  {
                    if ( v38 == *(_QWORD *)(a1 + 24) )
                      v54 = (unsigned int)dword_140D0504C;
                    else
                      v54 = v52 & 0x7F;
                    sub_14045B7FC(v53, v54, 0LL);
                  }
                  v55 = *(_QWORD *)(a1 + 56);
                  if ( dword_140D068FC )
                  {
                    v56 = *(_DWORD *)(v38 + 80);
                    v57 = (*(_BYTE *)(v55 + 64) ^ *(_BYTE *)(v38 + 512)) & 7 ^ *(_BYTE *)(v55 + 64);
                    v58 = (v57 ^ (8 * *(_BYTE *)(v38 + 516))) & 0x38 ^ v57;
                    if ( v56 <= *(_DWORD *)(v38 + 84) )
                      v56 = *(_DWORD *)(v38 + 84);
                    *(_BYTE *)(v55 + 64) = (v56 >= dword_140D05308 ? 0x40 : 0) | v58 & 0xBF;
                  }
                  v59 = *(_QWORD *)(a1 + 35000);
                  v60 = v38 == *(_QWORD *)(a1 + 24);
                  *(_QWORD *)(a1 + 16) = v38;
                  if ( v59 )
                    *(_BYTE *)(v59 + 16) = v60;
                  if ( *(_BYTE *)(v38 + 388) == 1 )
                    *(_DWORD *)(v38 + 132) = *(_DWORD *)(v38 + 132)
                                           - *(_DWORD *)(v38 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v38 + 388) = 3;
                  v61 = *(_QWORD *)(v18 + 104);
                  if ( v61 )
                    v61 += *(unsigned int *)(a1 + 216);
                  if ( (unsigned int)sub_1402103E0(v18, v61, v55, 1, (bool *)&v65) )
                    sub_140210988(a1, v61, v18, 1);
                  else
                    sub_140210664(a1, v18, *(char *)(v18 + 195), 1, v65);
                }
              }
            }
          }
          else
          {
            v20 = sub_1402103E0(v4, v17, a3, 1, 0LL);
            v21 = (unsigned int)*(char *)(v4 + 195);
            if ( v20 )
              v22 = sub_140210224(a1, v4, v21);
            else
              v22 = sub_1402B4AE0(v21, a1);
            v24 = v22;
            if ( v22 )
            {
              v25 = *(_BYTE **)(a1 + 56);
              if ( (*(_BYTE *)(v22 + 2) & 4) == 0
                || *(char *)(v22 + 195) >= 16
                || !*(_QWORD *)(v22 + 104)
                || (a2 = *(_QWORD *)(v22 + 104)) == 0
                || (a2 += *(unsigned int *)(a1 + 216)) == 0
                || (v40 = sub_1402103E0(v22, a2, v23, 0, 0LL), v26 = 1, !v40) )
              {
                v26 = *(_BYTE *)(v24 + 195);
              }
              v27 = v26 & 0x7F | (*(_BYTE *)(v24 + 119) << 7);
              *v25 = v27;
              v28 = *(_QWORD *)(a1 + 35000);
              if ( v28 )
              {
                if ( v24 == *(_QWORD *)(a1 + 24) )
                  v43 = (unsigned int)dword_140D0504C;
                else
                  v43 = v27 & 0x7F;
                sub_14045B7FC(v28, v43, 0LL);
              }
              v29 = *(_QWORD *)(a1 + 56);
              if ( dword_140D068FC )
              {
                a2 = *(unsigned int *)(v24 + 80);
                v44 = (*(_BYTE *)(v29 + 64) ^ *(_BYTE *)(v24 + 512)) & 7 ^ *(_BYTE *)(v29 + 64);
                v45 = (v44 ^ (8 * *(_BYTE *)(v24 + 516))) & 0x38 ^ v44;
                v46 = *(_DWORD *)(v24 + 84);
                if ( (unsigned int)a2 <= v46 )
                  a2 = v46;
                *(_BYTE *)(v29 + 64) = ((unsigned int)a2 >= dword_140D05308 ? 0x40 : 0) | v45 & 0xBF;
              }
              v30 = *(_QWORD *)(a1 + 35000);
              v31 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)(a1 + 16) = v24;
              if ( v30 )
                *(_BYTE *)(v30 + 16) = v24 == v31;
              if ( *(_BYTE *)(v24 + 388) == 1 )
                *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v24 + 388) = 3;
            }
          }
          if ( v17 )
          {
            if ( (unsigned __int8)sub_140291E98(v4, a2) )
            {
              if ( (*(_DWORD *)(v4 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                v32 = KeGetCurrentPrcb();
                v33 = *((_QWORD *)v32 + 4375);
                if ( v33 )
                {
                  if ( *((_BYTE *)v32 + 32) <= 1u )
                  {
                    v62 = *(_DWORD *)(v33 + 24) - 1;
                    *(_DWORD *)(v33 + 24) = v62;
                    if ( !v62 )
                      sub_140418E4C(v32);
                  }
                }
                sub_1402EDFE8(a1, v4, 0LL);
                v34 = KeGetCurrentPrcb();
                v67 = 0;
                while ( 1 )
                {
                  v35 = *((_QWORD *)v34 + 4375);
                  if ( v35 )
                  {
                    if ( *((_BYTE *)v34 + 32) <= 1u )
                    {
                      v63 = *(_DWORD *)(v35 + 24);
                      *(_DWORD *)(v35 + 24) = v63 + 1;
                      if ( v63 == -1 )
                        sub_140418E4C(v34);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                    break;
                  v36 = *((_QWORD *)v34 + 4375);
                  if ( v36 )
                  {
                    if ( *((_BYTE *)v34 + 32) <= 1u )
                    {
                      v64 = *(_DWORD *)(v36 + 24) - 1;
                      *(_DWORD *)(v36 + 24) = v64;
                      if ( !v64 )
                        sub_140418E4C(v34);
                    }
                  }
                  do
                    sub_1402F32E0(&v67);
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else if ( sub_14023BD18(v17) )
            {
              if ( !*(_QWORD *)(a1 + 16) )
                sub_14035C3FC(a1, a4, v19);
            }
          }
          return;
        }
        v14 = v15 - *(unsigned int *)(a1 + 216);
      }
      if ( (v16 & 2) != 0 )
      {
        v6 = 1;
        v5 = 1;
LABEL_12:
        LOBYTE(a2) = v69;
        goto LABEL_13;
      }
      if ( sub_140242E70(v15, v14) )
      {
        if ( (*(_BYTE *)(v15 + 112) & 1) != 0 )
          sub_140210CE4((_RTL_RB_TREE *)a1, v15, 1);
      }
      else
      {
        if ( *(_QWORD *)v15 < *(_QWORD *)(v15 + 24) )
        {
          if ( v70 )
            v6 = 1;
          goto LABEL_12;
        }
        sub_140210178(v14, v15, a1);
        if ( v12 == v15 )
        {
          LOBYTE(a2) = 1;
          v69 = 1;
          goto LABEL_29;
        }
      }
      LOBYTE(a2) = v69;
LABEL_29:
      v6 = 1;
      v5 = 1;
      goto LABEL_13;
    }
  }
}
