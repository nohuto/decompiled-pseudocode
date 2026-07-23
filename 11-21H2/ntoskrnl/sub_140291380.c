/*
 * XREFs of sub_140291380 @ 0x140291380
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210664 @ 0x140210664 (sub_140210664.c)
 *     sub_1402916EC @ 0x1402916EC (sub_1402916EC.c)
 *     sub_140291710 @ 0x140291710 (sub_140291710.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14035C560 @ 0x14035C560 (sub_14035C560.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

__int64 __fastcall sub_140291380(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v10; // rdi
  int v11; // ebp
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  _BYTE *v19; // r14
  char v20; // cl
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r8d
  _BYTE *v25; // r14
  char v26; // cl
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rax
  bool v30; // cl
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // edx
  char v41; // al
  char v42; // al
  __int64 v43; // rdx
  unsigned int v44; // edx
  char v45; // al
  char v46; // al

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 24);
  if ( !(_BYTE)a3 )
  {
    _disable();
    LOBYTE(a4) = 1;
    sub_140345C80(a1, *(_QWORD *)(a1 + 8), 0LL, a4);
    _enable();
  }
  if ( v4 == v6 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( !v16 || v16 == *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
        goto LABEL_42;
    }
    else if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
    {
      goto LABEL_42;
    }
  }
  LOBYTE(a3) = v5;
  result = sub_140291710(a1, a2, a3);
  if ( v5 )
    return result;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 0;
  if ( v10 && !(unsigned __int8)sub_1402916EC(*(_QWORD *)(a1 + 16)) )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    v19 = *(_BYTE **)(a1 + 56);
    if ( (*(_BYTE *)(v4 + 2) & 4) == 0
      || *(char *)(v4 + 195) >= 16
      || !*(_QWORD *)(v4 + 104)
      || (v36 = *(_QWORD *)(v4 + 104)) == 0
      || (v37 = *(unsigned int *)(a1 + 216) + v36) == 0
      || (v38 = sub_1402103E0(v4, v37, v18, 0, 0LL), v20 = 1, !v38) )
    {
      v20 = *(_BYTE *)(v4 + 195);
    }
    v21 = v20 & 0x7F | (*(_BYTE *)(v4 + 119) << 7);
    *v19 = v21;
    v22 = *(_QWORD *)(a1 + 35000);
    if ( v22 )
    {
      if ( v4 == *(_QWORD *)(a1 + 24) )
        v39 = (unsigned int)dword_140D0504C;
      else
        v39 = v21 & 0x7F;
      sub_14045B7FC(v22, v39, 0LL);
    }
    v23 = *(_QWORD *)(a1 + 56);
    if ( dword_140D068FC )
    {
      v40 = *(_DWORD *)(v4 + 80);
      v41 = (*(_BYTE *)(v23 + 64) ^ *(_BYTE *)(v4 + 512)) & 7 ^ *(_BYTE *)(v23 + 64);
      v42 = (v41 ^ (8 * *(_BYTE *)(v4 + 516))) & 0x38 ^ v41;
      if ( v40 <= *(_DWORD *)(v4 + 84) )
        v40 = *(_DWORD *)(v4 + 84);
      *(_BYTE *)(v23 + 64) = (v40 >= dword_140D05308 ? 0x40 : 0) | v42 & 0xBF;
    }
    *(_BYTE *)(v10 + 388) = 1;
    v24 = *(char *)(v10 + 195);
    *(_DWORD *)(v10 + 436) = MEMORY[0xFFFFF78000000320];
    sub_140210664(a1, v10, v24, 1, 0);
    v11 = 1;
  }
  if ( (unsigned __int8)sub_1402916EC(v10) )
  {
LABEL_10:
    if ( v4 != v6 )
      goto LABEL_11;
    if ( v11 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
        goto LABEL_18;
      v31 = 1LL;
      v32 = 1LL;
    }
    else
    {
      if ( v11 >= 0 || (*(_BYTE *)(a1 + 35) & 1) != 0 )
      {
LABEL_18:
        v17 = *(_QWORD *)(a1 + 16);
        if ( !v17 || v17 == *(_QWORD *)(a1 + 24) )
        {
          if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
            goto LABEL_11;
        }
        else if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
        {
          goto LABEL_11;
        }
LABEL_42:
        __fastfail(0x1Eu);
      }
      v31 = 0LL;
      v32 = 0LL;
    }
    sub_14035C560(a1, v32, v31);
    goto LABEL_18;
  }
  if ( v4 == v6 )
  {
    v13 = 0LL;
LABEL_9:
    v14 = sub_1402B4AE0(v13, a1);
    v15 = v14;
    if ( v14 )
    {
      v25 = *(_BYTE **)(a1 + 56);
      if ( (*(_BYTE *)(v14 + 2) & 4) != 0 )
      {
        if ( *(char *)(v14 + 195) >= 16
          || !*(_QWORD *)(v14 + 104)
          || (v33 = *(_QWORD *)(v14 + 104)) == 0
          || (v34 = *(unsigned int *)(a1 + 216) + v33) == 0
          || (v35 = sub_1402103E0(v14, v34, v12, 0, 0LL), v26 = 1, !v35) )
        {
          v26 = *(_BYTE *)(v15 + 195);
        }
      }
      else
      {
        v26 = *(_BYTE *)(v14 + 195);
      }
      v27 = v26 & 0x7F | (*(_BYTE *)(v15 + 119) << 7);
      *v25 = v27;
      v28 = *(_QWORD *)(a1 + 35000);
      if ( v28 )
      {
        if ( v15 == *(_QWORD *)(a1 + 24) )
          v43 = (unsigned int)dword_140D0504C;
        else
          v43 = v27 & 0x7F;
        sub_14045B7FC(v28, v43, 0LL);
      }
      v12 = *(_QWORD *)(a1 + 56);
      if ( dword_140D068FC )
      {
        v44 = *(_DWORD *)(v15 + 80);
        v45 = (*(_BYTE *)(v12 + 64) ^ *(_BYTE *)(v15 + 512)) & 7 ^ *(_BYTE *)(v12 + 64);
        v46 = (v45 ^ (8 * *(_BYTE *)(v15 + 516))) & 0x38 ^ v45;
        if ( v44 <= *(_DWORD *)(v15 + 84) )
          v44 = *(_DWORD *)(v15 + 84);
        *(_BYTE *)(v12 + 64) = (v44 >= dword_140D05308 ? 0x40 : 0) | v46 & 0xBF;
      }
      v29 = *(_QWORD *)(a1 + 35000);
      v30 = v15 == *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v15;
      if ( v29 )
        *(_BYTE *)(v29 + 16) = v30;
      if ( *(_BYTE *)(v15 + 388) == 1 )
        *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v15 + 388) = 3;
      --v11;
    }
    goto LABEL_10;
  }
  v13 = (unsigned int)(*(char *)(v4 + 195) + 1);
  if ( (int)v13 <= 31 )
    goto LABEL_9;
LABEL_11:
  _disable();
  LOBYTE(v12) = v4 == v6;
  result = sub_140345B70(a1, v4, v12);
  _enable();
  return result;
}
