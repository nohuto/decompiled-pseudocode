/*
 * XREFs of sub_1407DA200 @ 0x1407DA200
 * Callers:
 *     sub_1407D9CC0 @ 0x1407D9CC0 (sub_1407D9CC0.c)
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 * Callees:
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 */

unsigned __int64 __fastcall sub_1407DA200(__int64 a1, _DWORD *a2, unsigned __int64 a3, unsigned __int64 a4, int a5)
{
  __int64 v5; // r12
  __int16 v6; // si
  _BYTE *v7; // r14
  unsigned __int16 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  char v13; // r15
  __int64 v14; // rdx
  int v15; // r15d
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  char v18; // r13
  __int64 v19; // r12
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  int v22; // ebp
  __int64 v23; // rdx
  int v24; // ebx
  __int64 v25; // rcx
  unsigned __int64 result; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  unsigned int v35; // r11d
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // r10
  unsigned int v39; // eax
  unsigned int v40; // r11d
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int16 v43; // ax
  __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // r8
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // [rsp+20h] [rbp-48h]
  unsigned int v51; // [rsp+2Ch] [rbp-3Ch]
  __int16 v52; // [rsp+78h] [rbp+10h]
  unsigned int v53; // [rsp+78h] [rbp+10h]

  v5 = 0LL;
  v6 = -1;
  v52 = -1;
  v7 = (_BYTE *)a3;
  if ( (*a2 & 0x1FF) == 0 )
    goto LABEL_9;
  v10 = 0;
  v11 = *(_QWORD *)(a4 - 8LL * (*a2 & 0x1FF));
  v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
  v50 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
  v13 = 0;
  while ( 1 )
  {
    a3 = qword_140C4E9B8;
    v14 = *(unsigned int *)(qword_140C4E9B8 + 16);
    a4 = (qword_140C4E9B8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(a4 + 40 * v14) != v12 )
    {
      v14 = (HIBYTE(v50)
           + 37
           * (BYTE6(v50)
            + 37
            * (BYTE5(v50)
             + 37
             * (BYTE4(v50)
              + 37 * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (unsigned int)(*(_DWORD *)(qword_140C4E9B8 + 32) - 1);
      v34 = *(_QWORD *)(a4 + 40 * v14);
      if ( v34 != v12 )
      {
        if ( v34 )
        {
          v38 = (unsigned int)(v14 + 1);
          v39 = 0;
          v40 = *(_DWORD *)(qword_140C4E9B8 + 32);
          v53 = 0;
          while ( (unsigned int)v38 >= v40 )
          {
LABEL_43:
            ++v39;
            v38 = 0LL;
            v53 = v39;
            v40 = (HIBYTE(v50)
                 + 37
                 * (BYTE6(v50)
                  + 37
                  * (BYTE5(v50)
                   + 37
                   * (BYTE4(v50)
                    + 37 * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (*(_DWORD *)(qword_140C4E9B8 + 32) - 1);
            if ( v39 >= 2 )
            {
              v10 = -1;
              goto LABEL_57;
            }
          }
          while ( 1 )
          {
            v41 = *(_QWORD *)(a4 + 40 * v38);
            if ( v41 == v12 )
            {
              *(_DWORD *)(qword_140C4E9B8 + 16) = v38;
              v14 = (unsigned int)v38;
              goto LABEL_4;
            }
            if ( !v41 )
              break;
            v38 = (unsigned int)(v38 + 1);
            if ( (unsigned int)v38 >= v40 )
            {
              v39 = v53;
              goto LABEL_43;
            }
          }
          *(_DWORD *)(qword_140C4E9B8 + 16) = v38;
          v10 = v38;
        }
        else
        {
          *(_DWORD *)(qword_140C4E9B8 + 16) = v14;
          v10 = v14;
        }
        goto LABEL_57;
      }
      *(_DWORD *)(qword_140C4E9B8 + 16) = v14;
    }
LABEL_4:
    if ( (_WORD)v14 != 0xFFFF )
      goto LABEL_5;
LABEL_57:
    v47 = *(_DWORD *)(a3 + 28);
    if ( v47 < 3 * (*(_DWORD *)(a3 + 32) >> 2) )
      break;
    if ( (unsigned int)sub_1407DA854(&unk_140C4E9A0, v14, a3, a4) == -1073741823 )
      return 0LL;
  }
  v13 = 1;
  *(_DWORD *)(a3 + 28) = v47 + 1;
  LOWORD(v14) = v10;
  *(_QWORD *)(a4 + 40LL * v10) = v12;
LABEL_5:
  if ( !a3 )
    return 0LL;
  v52 = v14 + *(_WORD *)(a3 + 36);
  if ( v13 )
  {
    v42 = a4 + 40LL * (unsigned __int16)v14;
    v43 = *(_WORD *)(v42 + 16);
    *(_QWORD *)(v42 + 8) = (16 * v11) | *(_DWORD *)(v42 + 8) & 8 | 4;
    *(_WORD *)(v42 + 16) = v43 & 0xFFF0 | (v11 >> 60);
  }
  v5 = 0LL;
LABEL_9:
  v15 = a5;
  if ( a1 >= 0 )
  {
    if ( !a5 )
    {
      if ( a1 )
      {
        v5 = 1LL;
        v22 = (a1 & 0x7FFFFFFF) - 1;
      }
      else
      {
        v22 = -1;
      }
LABEL_19:
      v23 = qword_140C4E990;
      v24 = ((*v7 & 3) == 2) + 1;
      if ( (unsigned int)(v24 + *(_DWORD *)(qword_140C4E990 + 16)) > *(_DWORD *)(qword_140C4E990 + 20) )
      {
        while ( (unsigned int)sub_1407DA854(&unk_140C4E978, v23, a3, a4) != -1073741823 )
        {
          v23 = qword_140C4E990;
          if ( (unsigned int)(v24 + *(_DWORD *)(qword_140C4E990 + 16)) <= *(_DWORD *)(qword_140C4E990 + 20) )
            goto LABEL_20;
        }
        return 0LL;
      }
      else
      {
LABEL_20:
        v25 = *(unsigned int *)(v23 + 16);
        *(_DWORD *)(v23 + 16) = v24 + v25;
        result = 16 * v25 + ((v23 + 31) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (*v7 & 3) == 2 )
        {
          *(_OWORD *)result = *(_OWORD *)v7;
          *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
          result += 16LL;
        }
        v27 = *(_QWORD *)result;
        if ( (*a2 & 0x1FF) != 0 )
        {
          v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)result = v28;
          v29 = ((unsigned __int8)v28 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v28;
          *(_QWORD *)result = v29;
          v30 = ((unsigned __int8)v29 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 8 ^ v29;
          *(_QWORD *)result = v30;
          v31 = v30 & 0xF | (16LL * (unsigned int)(*(_QWORD *)a2 >> 12));
          *(_WORD *)(result + 10) = v6;
          *(_QWORD *)result = v31;
          *(_WORD *)(result + 8) = v52;
        }
        else
        {
          v32 = v27 & 0xFFFFFFFFFFFFFFFCuLL | 1;
          *(_QWORD *)result = v32;
          v33 = (8 * v5) | (((unsigned __int8)v32 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v32) & 0xFFFFFFFFFFFFFFE7uLL;
          *(_QWORD *)result = v33;
          *(_QWORD *)result = *(_QWORD *)a2 ^ (*a2 ^ (unsigned int)v33) & 0xFFF;
          if ( v5 == 2 )
            *(_WORD *)(result + 10) = v6;
          else
            *(_DWORD *)(result + 8) = v22;
        }
      }
      return result;
    }
  }
  else if ( !a5 )
  {
    v16 = (*(_QWORD *)(a1 + 1088) ^ *(_QWORD *)(a1 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
    goto LABEL_12;
  }
  v16 = a1;
LABEL_12:
  LOWORD(v50) = 0;
  v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v18 = 0;
  v19 = 4 * (v17 & 3) + 16;
  while ( 2 )
  {
    a3 = qword_140C4E9B8;
    v20 = *(unsigned int *)(v19 + qword_140C4E9B8);
    a4 = (qword_140C4E9B8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(a4 + 40 * v20) == v17 )
    {
LABEL_14:
      if ( (_WORD)v20 != 0xFFFF )
        goto LABEL_15;
      v44 = (unsigned int)v50;
    }
    else
    {
      v35 = *(_DWORD *)(qword_140C4E9B8 + 32);
      v36 = (HIBYTE(v17)
           + 37
           * (BYTE6(v17)
            + 37
            * (BYTE5(v17)
             + 37
             * (BYTE4(v17)
              + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))) & (v35 - 1);
      v37 = *(_QWORD *)(a4 + 40 * v36);
      if ( v37 == v17 )
      {
        *(_DWORD *)(v19 + qword_140C4E9B8) = v36;
        LOWORD(v20) = (HIBYTE(v17)
                     + 37
                     * (BYTE6(v17)
                      + 37
                      * (BYTE5(v17)
                       + 37
                       * (BYTE4(v17)
                        + 37
                        * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 24011)))))))) & (v35 - 1);
        goto LABEL_14;
      }
      if ( v37 )
      {
        v44 = (unsigned int)(v36 + 1);
        v45 = 0;
        v15 = a5;
        v51 = 0;
        while ( (unsigned int)v44 >= v35 )
        {
LABEL_53:
          ++v45;
          v44 = 0LL;
          v51 = v45;
          v35 = v36;
          if ( v45 >= 2 )
          {
            v44 = 0xFFFFLL;
            goto LABEL_66;
          }
        }
        while ( 1 )
        {
          v46 = *(_QWORD *)(a4 + 40LL * (unsigned int)v44);
          if ( v46 == v17 )
          {
            *(_DWORD *)(v19 + qword_140C4E9B8) = v44;
            LOWORD(v20) = v44;
            goto LABEL_14;
          }
          if ( !v46 )
            break;
          v44 = (unsigned int)(v44 + 1);
          if ( (unsigned int)v44 >= v35 )
          {
            v45 = v51;
            goto LABEL_53;
          }
        }
        *(_DWORD *)(v19 + qword_140C4E9B8) = v44;
      }
      else
      {
        *(_DWORD *)(v19 + qword_140C4E9B8) = v36;
        v44 = (unsigned __int16)((HIBYTE(v17)
                                + 37
                                * (BYTE6(v17)
                                 + 37
                                 * (BYTE5(v17)
                                  + 37
                                  * (BYTE4(v17)
                                   + 37
                                   * (BYTE3(v17)
                                    + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 24011)))))))) & (v35 - 1));
      }
LABEL_66:
      LODWORD(v50) = v44;
    }
    LODWORD(v20) = *(_DWORD *)(a3 + 28);
    if ( (unsigned int)v20 >= 3 * (*(_DWORD *)(a3 + 32) >> 2) )
    {
      if ( (unsigned int)sub_1407DA854(&unk_140C4E9A0, v44, a3, a4) == -1073741823 )
        return 0LL;
      continue;
    }
    break;
  }
  v18 = 1;
  *(_DWORD *)(a3 + 28) = v20 + 1;
  *(_QWORD *)(a4 + 40LL * (unsigned __int16)v44) = v17;
  LOWORD(v20) = v44;
LABEL_15:
  if ( a3 )
  {
    v5 = 2LL;
    v6 = v20 + *(_WORD *)(a3 + 36);
    v21 = a4 + 40LL * (unsigned __int16)v20;
    if ( v18 || (*(_BYTE *)(v21 + 8) & 4) != 0 )
    {
      v48 = *(_QWORD *)(v21 + 8);
      if ( v15 )
      {
        a3 = v48 & 0xFFFFFFFFFFFFFFF8uLL | 5;
        *(_QWORD *)(v21 + 8) = a3;
      }
      else
      {
        v49 = v48 & 0xFFFFFFFFFFFFFFF8uLL | 1;
        *(_QWORD *)(v21 + 8) = v49;
        a3 = v49 & 7;
        *(_QWORD *)(v21 + 8) = a3 | (8LL * (*(_QWORD *)(a1 + 1088) ^ *(_QWORD *)(a1 + 1128)));
        *(_DWORD *)(v21 + 20) = *(_DWORD *)(a1 + 1524);
        *(_DWORD *)(v21 + 16) = *(_DWORD *)(a1 + 1088);
      }
    }
    v22 = 0;
    goto LABEL_19;
  }
  return 0LL;
}
