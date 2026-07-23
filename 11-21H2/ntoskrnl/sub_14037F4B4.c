/*
 * XREFs of sub_14037F4B4 @ 0x14037F4B4
 * Callers:
 *     sub_14037F1D4 @ 0x14037F1D4 (sub_14037F1D4.c)
 * Callees:
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_14037F958 @ 0x14037F958 (sub_14037F958.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort_s @ 0x1403E2250 (qsort_s.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_1405F5F44 @ 0x1405F5F44 (sub_1405F5F44.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 */

__int64 __fastcall sub_14037F4B4(__int64 a1, unsigned int *a2, unsigned int *a3, _DWORD *a4)
{
  char *v5; // rbx
  unsigned int *v6; // r9
  unsigned __int64 v7; // r8
  char *v9; // rsi
  int v11; // ecx
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // r14
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  int *v34; // rsi
  int *v35; // r9
  unsigned int v36; // r8d
  int *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // r15d
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  void *v44; // rsp
  void *v45; // rsp
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  _DWORD v50[2]; // [rsp+30h] [rbp+0h] BYREF
  __int128 v51; // [rsp+38h] [rbp+8h] BYREF
  unsigned int v52; // [rsp+48h] [rbp+18h]
  unsigned int *v53; // [rsp+50h] [rbp+20h]
  __int128 Context; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp+38h]
  _DWORD *v56; // [rsp+70h] [rbp+40h] BYREF
  __int128 v57; // [rsp+78h] [rbp+48h]
  int v58; // [rsp+88h] [rbp+58h]
  unsigned int v59; // [rsp+8Ch] [rbp+5Ch]
  int v60; // [rsp+90h] [rbp+60h]
  int v61; // [rsp+94h] [rbp+64h]

  v5 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v53 = a3;
  v6 = a3;
  v7 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v9 = v5 + 8;
  v55 = v7;
  Context = 0LL;
  v51 = 0LL;
  if ( (unsigned __int64)(v5 + 8) > v7 )
  {
    v14 = v51;
    v25 = -2147483643;
    goto LABEL_17;
  }
  *(_QWORD *)v5 = 0LL;
  if ( v5 )
    *(_DWORD *)v5 = *a4 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v5 *= 16;
  v11 = a4[1] & 0xFFF;
  v12 = 4096;
  if ( v11 )
    v12 = v11;
  *((_WORD *)v5 + 2) = v12;
  if ( v6[1] != a4[2] || v6[2] != (a4[1] & 0xFFF) || (v30 = *v6, !(_DWORD)v30) )
  {
    v13 = *(_DWORD *)(a1 + 184);
    if ( (v13 & 1) == 0 )
    {
      sub_140237D58((__int64 *)(a1 + 128), a1 + 152);
      v13 = *(_DWORD *)(a1 + 184);
    }
    *(_DWORD *)(a1 + 184) = v13 | 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = a4[2];
    sub_140380708(a1 + 128, *(unsigned int *)(a1 + 768), a1 + 152);
    sub_14037F958(a1 + 128, &v51, a1 + 152);
    v14 = v51;
    v15 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2LL * *a2) >> 13;
    v16 = 0;
    v52 = v15;
    v50[0] = 0;
    while ( 1 )
    {
      if ( !v14 )
      {
LABEL_15:
        v24 = (unsigned __int8)v5[6];
        if ( !(_BYTE)v24 )
          goto LABEL_16;
        v34 = (int *)&v9[-8 * v24];
        if ( (unsigned __int8)v24 > 1u )
        {
          *(_QWORD *)&Context = *a2;
          *((_QWORD *)&Context + 1) = a1;
          qsort_s(v34, (unsigned __int8)v5[6], 8uLL, sub_140394B70, &Context);
          LOBYTE(v24) = v5[6];
        }
        v35 = &v34[2 * (unsigned __int8)v24];
        if ( v34 < v35 )
        {
          do
          {
            v36 = *v34;
            v37 = v34 + 1;
            *(_QWORD *)v34 = 0LL;
            if ( v34 != (int *)-4LL )
              *v37 = v36 & *(_DWORD *)(a1 + 808);
            *v34 = v36 >> *(_DWORD *)(a1 + 812);
            v34 += 2;
            *v37 *= 16;
          }
          while ( v34 < v35 );
          LOBYTE(v24) = v5[6];
        }
        v6 = v53;
LABEL_36:
        *v6 = *((unsigned __int16 *)a2 + 3);
        v6[1] = a4[2];
        v6[2] = a4[1] & 0xFFF;
        *((_WORD *)a2 + 3) = (_WORD)v5 + 8 * ((unsigned __int8)v24 + 1) - (_WORD)a2;
LABEL_16:
        v25 = 0;
        goto LABEL_17;
      }
      v17 = *((_QWORD *)&v51 + 1) + 4LL;
      v18 = (unsigned __int16)*(_DWORD *)v14 + 4LL;
      *((_QWORD *)&v51 + 1) = v17;
      if ( v17 >= v14 + 4 * v18 )
        break;
LABEL_12:
      if ( !v17 )
        goto LABEL_15;
      v19 = *(_DWORD *)v17;
      LODWORD(v20) = *(_DWORD *)(a1 + 456);
      v21 = *(_DWORD *)(a1 + 460);
      v50[0] = 0;
      v22 = v19 >> v20;
      _BitScanReverse((unsigned int *)&v20, v22);
      v23 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                     + *(_DWORD *)(a1 + 464) * (v19 & v21)
                     + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v22 ^ (unsigned int)(1 << v20))));
      if ( v23 != a4 )
      {
        if ( v23[2] != a4[2] )
          goto LABEL_15;
        if ( ((a4[1] ^ v23[1]) & 0xFFF) == 0 )
        {
          v28 = (unsigned int)(*v23 >> *(_DWORD *)(a1 + 812));
          if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v28) >> 13 >= v15 )
          {
            v29 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6568LL);
            if ( v29 && (v29 == -1 || _bittest64(*(const signed __int64 **)(v29 + 16), v28))
              || (v23[1] & 0xFFFFF000) >= 0xFFEFF000 )
            {
              v14 = v51;
            }
            else
            {
              v14 = v51;
              if ( (unsigned __int64)(v9 + 8) > v55 )
                goto LABEL_54;
              *(_QWORD *)v9 = 0LL;
              *(_DWORD *)v9 = *v23;
              *((_DWORD *)v9 + 1) = v23[1] >> 12;
              v9 += 8;
              ++v5[6];
            }
          }
        }
      }
      v50[0] = ++v16;
      if ( v16 >= 0x10 )
        goto LABEL_15;
    }
    if ( **(_DWORD **)((a1 + 144) & -(__int64)(a1 != -128)) == -1 )
    {
      v38 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v38 = sub_1405F5F44(a1 + 128, v14);
      if ( v38 == -1 )
      {
        v17 = -1LL;
LABEL_51:
        v16 = v50[0];
        v15 = v52;
        goto LABEL_12;
      }
    }
    if ( v38 )
    {
      v17 = v38 + 16;
      *(_QWORD *)&v51 = v38;
      *((_QWORD *)&v51 + 1) = v38 + 16;
      v14 = v38;
    }
    else
    {
      v17 = 0LL;
    }
    goto LABEL_51;
  }
  v31 = (char *)a2 + v30;
  if ( (unsigned __int64)&v5[(unsigned int)((_DWORD)v5 - ((_DWORD)a2 + v30))] <= v7 )
  {
    v32 = (unsigned __int64)(v31 + 8);
    v33 = (unsigned __int64)&v31[8 * (unsigned __int8)v31[6] + 8];
    while ( v32 < v33 )
    {
      if ( *(_DWORD *)(v32 + 4) != *(_DWORD *)v5 || *(_DWORD *)v32 != *a2 )
      {
        *(_QWORD *)v9 = *(_QWORD *)v32;
        v9 += 8;
        ++v5[6];
      }
      v32 += 8LL;
    }
    LOBYTE(v24) = v5[6];
    v14 = v51;
    if ( (_BYTE)v24 )
      goto LABEL_36;
    goto LABEL_16;
  }
  v14 = v51;
LABEL_54:
  v25 = -2147483643;
LABEL_17:
  v26 = a1 + 128;
  if ( **(_DWORD **)((v26 + 16) & -(__int64)(v26 != 0)) != -1 )
  {
    if ( v14 )
    {
      v39 = *(_QWORD *)v26;
      if ( v14 != *(_QWORD *)v26 )
      {
        if ( v39 )
          v40 = *(unsigned __int8 *)(v39 + 2);
        else
          v40 = 0;
        v41 = 16LL * v40;
        v42 = v41 + 15;
        if ( v41 + 15 < v41 )
          v42 = 0xFFFFFFFFFFFFFF0LL;
        v43 = v42 & 0xFFFFFFFFFFFFFFF0uLL;
        v44 = alloca(v43);
        v61 = 0;
        v58 = 0;
        v45 = alloca(v43);
        v60 = 1;
        v46 = *(unsigned int *)(v14 + 16);
        v57 = 0LL;
        v59 = v40;
        v56 = v50;
        sub_140380708(v26, v46, &v56);
        v47 = *((_QWORD *)&v51 + 2 * v40 - 4);
        v48 = *(_QWORD *)&v50[4 * v40 - 8];
        sub_140237D58((__int64 *)v26, (__int64)&v56);
        v49 = v47 - 8;
        if ( v47 <= v48 + 16 )
          v49 = v48 + 8;
        if ( **(_DWORD **)(v26 + 16) != -1 )
          sub_1405F6710(v26 + 16, v49);
      }
    }
  }
  return v25;
}
