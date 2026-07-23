/*
 * XREFs of sub_1407DABF0 @ 0x1407DABF0
 * Callers:
 *     sub_1407DABA4 @ 0x1407DABA4 (sub_1407DABA4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407DB3F4 @ 0x1407DB3F4 (sub_1407DB3F4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407DABF0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  int v3; // edi
  int v4; // r15d
  unsigned int i; // edx
  size_t v6; // rbx
  _WORD *Pool2; // rax
  _WORD *v8; // r12
  __int64 *v9; // rsi
  __int16 v10; // bx
  unsigned int v11; // r11d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // r8
  unsigned __int16 v15; // ax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // r8
  int v26; // edi
  int v27; // r15d
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 *v31; // r14
  unsigned int v32; // ebx
  unsigned __int64 v33; // rdx
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  unsigned __int64 v36; // rax
  _WORD *v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // r14
  unsigned int v40; // edi
  __int64 v41; // rcx
  unsigned __int16 v42; // r9
  unsigned __int16 v43; // r8
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  _OWORD *v46; // r11
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  _OWORD *v49; // rdx
  unsigned __int16 v50; // r8
  unsigned __int16 v51; // cx
  unsigned __int64 v52; // r10
  unsigned __int16 v53; // r9
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v57; // eax
  __int16 v58; // bx
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // r10
  __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // r10
  __int64 v67; // r10
  __int64 v68; // rbx
  _WORD *P; // [rsp+20h] [rbp-108h]
  unsigned __int64 v70; // [rsp+28h] [rbp-100h]
  __int64 *v71; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v72; // [rsp+38h] [rbp-F0h]
  __int64 v73; // [rsp+40h] [rbp-E8h]
  _QWORD v74[12]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 v76; // [rsp+138h] [rbp+10h]
  __int16 v77; // [rsp+140h] [rbp+18h]
  unsigned __int64 v78; // [rsp+148h] [rbp+20h]

  memset(v74, 0, sizeof(v74));
  v1 = qword_140C4E9B8;
  v2 = qword_140C4E9C0;
  v3 = 0;
  v4 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_140C4E9B8; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v6 = 2LL * i;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v6, 1951688272LL);
  P = Pool2;
  v8 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v6);
    v9 = &qword_140C4E990;
    v10 = *(_WORD *)(qword_140C4E9C0 + 36);
    v77 = v10;
    do
    {
      v9 = (__int64 *)v9[1];
      v11 = 0;
      if ( *((_DWORD *)v9 + 4) )
      {
        while ( 1 )
        {
          v12 = (((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v11;
          v13 = *(_QWORD *)v12;
          if ( ((unsigned __int8)*(_QWORD *)v12 & 3u) < 2 )
            break;
          v57 = ((unsigned int)v13 >> 2) & 0x3FF;
          v3 += v57;
          v11 = v57 + v11 - 1;
          if ( (v13 & 3) == 2 )
          {
            LODWORD(v13) = *(_DWORD *)(v12 + 16);
            v12 += 16LL;
            goto LABEL_8;
          }
LABEL_26:
          if ( ++v11 >= *((_DWORD *)v9 + 4) )
            goto LABEL_27;
        }
        ++v3;
LABEL_8:
        if ( (v13 & 3) != 0 )
        {
          v15 = -1;
          if ( (*(_BYTE *)v12 & 0x18) == 0x10 )
            v14 = *(_WORD *)(v12 + 10);
          else
            v14 = -1;
        }
        else
        {
          v14 = *(_WORD *)(v12 + 10);
          v15 = *(_WORD *)(v12 + 8);
        }
        if ( v15 == 0xFFFF )
        {
          v19 = 0LL;
        }
        else
        {
          v16 = *(unsigned __int16 *)(v2 + 36);
          if ( v15 < (unsigned __int16)v16 || v15 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v16) )
          {
            v65 = v2;
            while ( 1 )
            {
              v65 = *(_QWORD *)(v65 + 8);
              if ( (__int64 *)v65 == &qword_140C4E9B8 )
                v65 = qword_140C4E9C0;
              if ( v65 == v2 )
                break;
              v66 = *(unsigned __int16 *)(v65 + 36);
              if ( v15 >= (unsigned __int16)v66 && v15 < (unsigned int)(*(_DWORD *)(v65 + 32) + v66) )
              {
                v17 = v65 + 47;
                v18 = v15 - v66;
                v2 = v65;
                goto LABEL_14;
              }
            }
            v19 = 0LL;
          }
          else
          {
            v17 = v2 + 47;
            v18 = v15 - v16;
LABEL_14:
            v19 = (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v18 + 8;
          }
        }
        if ( v14 == 0xFFFF )
        {
          v23 = 0LL;
        }
        else
        {
          v20 = *(unsigned __int16 *)(v2 + 36);
          if ( v14 < (unsigned __int16)v20 || v14 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v20) )
          {
            v67 = v2;
            while ( 1 )
            {
              v67 = *(_QWORD *)(v67 + 8);
              if ( (__int64 *)v67 == &qword_140C4E9B8 )
                v67 = qword_140C4E9C0;
              if ( v67 == v2 )
                break;
              v68 = *(unsigned __int16 *)(v67 + 36);
              if ( v14 >= (unsigned __int16)v68 && v14 < (unsigned int)(*(_DWORD *)(v67 + 32) + v68) )
              {
                v21 = v67 + 47;
                v22 = v14 - v68;
                v2 = v67;
                v10 = v77;
                goto LABEL_19;
              }
            }
            v10 = v77;
            v23 = 0LL;
          }
          else
          {
            v21 = v2 + 47;
            v22 = v14 - v20;
LABEL_19:
            v23 = (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v22 + 8;
          }
        }
        if ( v19 )
        {
          v24 = v15 - v10;
          if ( v8[v24] != 0xFFFF )
          {
            v8[v24] = -1;
            ++v4;
          }
        }
        if ( v23 )
        {
          v25 = v14 - v10;
          if ( v8[v25] != 0xFFFF )
          {
            v8[v25] = -1;
            ++v4;
          }
        }
        goto LABEL_26;
      }
LABEL_27:
      ;
    }
    while ( v9 != (__int64 *)qword_140C4E990 );
    if ( v3 )
    {
      v26 = 16 * v3;
      v27 = 32 * v4;
      v28 = v27 + ((v26 + 63) & 0xFFFFFFF8);
      v29 = ExAllocatePool2(256LL, v28, 1146381904LL);
      v73 = v29;
      if ( v29 )
      {
        v30 = v29 + 32;
        *(_OWORD *)(v29 + 16) = 0LL;
        v31 = &qword_140C4E990;
        *(_OWORD *)(v29 + 32) = 0LL;
        *(_QWORD *)(v29 + 48) = 0LL;
        *(_DWORD *)(v29 + 24) = v28 - 16;
        v32 = 0;
        *(_DWORD *)(v29 + 16) = 852013;
        *(_DWORD *)(v29 + 20) = 1128485697;
        v33 = v29 + 32 + (unsigned int)(v26 + 24);
        *(_DWORD *)(v29 + 28) = 0;
        v34 = 0;
        *(_DWORD *)(v29 + 40) = v26 + 24;
        *(_DWORD *)(v29 + 32) = 24;
        v70 = v29 + 32 + (unsigned int)(v26 + 24 + v27);
        v74[9] = v70;
        *(_DWORD *)(v29 + 48) = v26 + 24 + v27;
        v78 = v33;
        v76 = 0;
        do
        {
          v31 = (__int64 *)v31[1];
          v35 = 0;
          v71 = v31;
          if ( *((_DWORD *)v31 + 4) )
          {
            v36 = ((unsigned __int64)v31 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
            v72 = v36;
            while ( 1 )
            {
              v37 = (_WORD *)(v36 + 16LL * v35);
              v38 = 16LL * v34;
              v39 = v38 + v30 + 24;
              if ( ((unsigned __int8)*(_QWORD *)v37 & 3u) >= 2 )
              {
                v40 = ((unsigned int)*(_QWORD *)v37 >> 2) & 0x3FF;
                v35 = v40 + v35 - 1;
              }
              else
              {
                v40 = 1;
              }
              if ( v39 + (unsigned __int64)(16 * v40) > v33 )
                break;
              memmove((void *)(v38 + v30 + 24), v37, 16 * v40);
              *(_DWORD *)(v30 + 4) += v40;
              v34 += v40;
              if ( (*(_DWORD *)v37 & 3) == 2 )
              {
                v37 += 8;
                v39 = v38 + v30 + 40;
              }
              v41 = *(_QWORD *)v37;
              if ( ((unsigned __int8)*(_QWORD *)v37 & 3u) < 2 )
              {
                if ( (v41 & 3) != 0 )
                {
                  v43 = -1;
                  if ( (v41 & 0x18) == 0x10 )
                    v42 = v37[5];
                  else
                    v42 = -1;
                }
                else
                {
                  v42 = v37[5];
                  v43 = v37[4];
                }
                if ( v43 == 0xFFFF )
                {
                  v46 = 0LL;
                }
                else
                {
                  v44 = *(unsigned __int16 *)(v2 + 36);
                  if ( v43 < (unsigned __int16)v44 || v43 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v44) )
                  {
                    v61 = v2;
                    while ( 1 )
                    {
                      v61 = *(_QWORD *)(v61 + 8);
                      if ( (__int64 *)v61 == &qword_140C4E9B8 )
                        v61 = qword_140C4E9C0;
                      if ( v61 == v2 )
                        break;
                      v62 = *(unsigned __int16 *)(v61 + 36);
                      if ( v43 >= (unsigned __int16)v62 && v43 < (unsigned int)(*(_DWORD *)(v61 + 32) + v62) )
                      {
                        v2 = v61;
                        v45 = ((v61 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v43 - v62);
                        goto LABEL_45;
                      }
                    }
                    v46 = 0LL;
                  }
                  else
                  {
                    v45 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v43 - v44);
LABEL_45:
                    v46 = (_OWORD *)(v45 + 8);
                  }
                }
                if ( v42 == 0xFFFF )
                {
                  v49 = 0LL;
                }
                else
                {
                  v47 = *(unsigned __int16 *)(v2 + 36);
                  if ( v42 < (unsigned __int16)v47 || v42 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v47) )
                  {
                    v63 = v2;
                    while ( 1 )
                    {
                      v63 = *(_QWORD *)(v63 + 8);
                      if ( (__int64 *)v63 == &qword_140C4E9B8 )
                        v63 = qword_140C4E9C0;
                      if ( v63 == v2 )
                        break;
                      v64 = *(unsigned __int16 *)(v63 + 36);
                      if ( v42 >= (unsigned __int16)v64 && v42 < (unsigned int)(*(_DWORD *)(v63 + 32) + v64) )
                      {
                        v2 = v63;
                        v48 = ((v63 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v42 - v64);
                        goto LABEL_50;
                      }
                    }
                    v49 = 0LL;
                  }
                  else
                  {
                    v48 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v42 - v47);
LABEL_50:
                    v49 = (_OWORD *)(v48 + 8);
                  }
                }
                if ( v46 )
                {
                  v50 = v43 - v77;
                  v51 = P[v50];
                  v52 = v78;
                  if ( v51 == 0xFFFF )
                  {
                    v51 = v76;
                    v58 = v76 + 1;
                    P[v50] = v76;
                    v59 = 32LL * v76++;
                    if ( v59 + v78 + 32 > v70 )
                    {
                      v76 = v58 - 1;
                    }
                    else
                    {
                      *(_OWORD *)(v59 + v78) = *v46;
                      *(_OWORD *)(v59 + v78 + 16) = v46[1];
                      ++*(_WORD *)(v30 + 12);
                    }
                  }
                  *(_WORD *)(v39 + 8) = v51;
                }
                else
                {
                  v52 = v78;
                }
                if ( v49 )
                {
                  v53 = v42 - v77;
                  LOWORD(v54) = P[v53];
                  if ( (_WORD)v54 == 0xFFFF )
                  {
                    v54 = v76;
                    P[v53] = v76++;
                    v60 = 32LL * v54;
                    if ( v52 + v60 + 32 > v70 )
                    {
                      v76 = v54;
                    }
                    else
                    {
                      *(_OWORD *)(v60 + v52) = *v49;
                      *(_OWORD *)(v60 + v52 + 16) = v49[1];
                      ++*(_WORD *)(v30 + 12);
                    }
                  }
                  *(_WORD *)(v39 + 10) = v54;
                }
              }
              v31 = v71;
              ++v35;
              v33 = v78;
              v36 = v72;
              if ( v35 >= *((_DWORD *)v71 + 4) )
                goto LABEL_59;
            }
            v31 = v71;
LABEL_59:
            v32 = 0;
          }
        }
        while ( v31 != (__int64 *)qword_140C4E990 );
        v8 = P;
        v55 = LODWORD(v74[9]) - *(_DWORD *)(v30 + 16) - v30;
        *(_WORD *)(v30 + 14) = HIWORD(v74[10]);
        *(_DWORD *)(v30 + 20) = v55;
        *a1 = v73;
      }
      else
      {
        v32 = -1073741670;
      }
    }
    else
    {
      v32 = -2147483622;
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v32 = -1073741670;
  }
  sub_1407DB3F4(&unk_140C4E978);
  sub_1407DB3F4(&unk_140C4E9A0);
  return v32;
}
