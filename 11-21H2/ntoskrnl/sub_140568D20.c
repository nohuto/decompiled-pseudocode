/*
 * XREFs of sub_140568D20 @ 0x140568D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 *     sub_1403DB8D8 @ 0x1403DB8D8 (sub_1403DB8D8.c)
 *     sub_140573A60 @ 0x140573A60 (sub_140573A60.c)
 */

volatile signed __int32 *__fastcall sub_140568D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // rdi
  _DWORD *v6; // r14
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // r9
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  _BYTE *v13; // r10
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v15; // rcx
  char v16; // r14
  __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 v23; // r11
  int v24; // r9d
  __int64 v25; // r10
  __int64 v26; // r10
  __int64 *v27; // r11
  unsigned int v28; // ebx
  __int64 v29; // r9
  __int64 v30; // r8
  _BYTE *v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rax
  __int64 v34; // r10
  int v35; // ebx
  unsigned __int16 v36; // r11
  __int16 v37; // r11
  unsigned int v38; // r12d
  __int64 v39; // r11
  __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // r11
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // rax
  int v50; // r14d
  __int64 v51; // rcx
  __int64 v52; // rax
  signed __int32 v53; // eax
  unsigned int v54; // ebx
  volatile signed __int32 *result; // rax
  int v56; // [rsp+20h] [rbp-20h] BYREF
  int v57; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v58; // [rsp+28h] [rbp-18h] BYREF
  __int128 v59; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v60; // [rsp+88h] [rbp+48h]
  volatile signed __int32 *v61; // [rsp+90h] [rbp+50h]

  v61 = (volatile signed __int32 *)a3;
  v60 = (_DWORD *)a2;
  v4 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v5 = a4;
  v6 = (_DWORD *)a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v56 = 0;
    while ( (*(_DWORD *)v5 & 0x80000000) != v8 )
      sub_1402F32E0(&v56, a2, a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  v9 = *(_QWORD *)v6;
  v10 = 0LL;
  v11 = dword_140D06884;
  v12 = *(_DWORD *)(*(_QWORD *)v6 + 4LL);
  if ( v12 )
  {
    v13 = &unk_140D05394;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = *((_QWORD *)CurrentPrcb + 4266);
      if ( v15 )
        v16 = *(_BYTE *)(v15 + 4LL * (unsigned __int8)v10 + 6);
      else
        v16 = 0;
      if ( v15 )
        v4 = *(_BYTE *)(v15 + 4LL * (unsigned __int8)v10 + 7);
      LOBYTE(a3) = *v13;
      LOBYTE(v15) = v16;
      LOBYTE(a2) = *(v13 - 8);
      v17 = sub_140573A60(v15, a2, a3);
      LOBYTE(v19) = v18;
      *(_WORD *)((char *)CurrentPrcb + v20 - 16) = v17;
      LOBYTE(v21) = v4;
      v22 = sub_140573A60(v21, v19, v18);
      *(_WORD *)((char *)CurrentPrcb + v23) = v22;
      v10 = (unsigned int)(v24 + 1);
      v13 = (_BYTE *)(v25 + 1);
      v4 = 0;
    }
    while ( (unsigned int)v10 < v12 );
    v6 = v60;
  }
  if ( !HIDWORD(KeGetPcr()[1].LockArray) )
  {
    a2 = 0LL;
    if ( v11 )
    {
      v26 = 0LL;
      v27 = qword_140D088C0;
      do
      {
        v28 = 0;
        v29 = *v27;
        for ( *(_BYTE *)(*v27 + 34056) = *(_BYTE *)(v26 + *(_QWORD *)(v9 + 8)); v28 < v12; ++v28 )
        {
          v30 = 32LL * *(unsigned __int8 *)(v29 + 208);
          v31 = (_BYTE *)(v9 + 2 * (v12 * (_DWORD)a2 + v28 + 8LL) + v12 * (_DWORD)a2 + v28 + 8LL);
          *(_BYTE *)(v29 + 34058) = *v31;
          *(_BYTE *)(v29 + 34057) = v31[1];
          v32 = (_QWORD *)((char *)&unk_140D08398 + v30);
          v33 = *(_QWORD *)(v29 + 200);
          if ( v31[1] )
            *v32 &= ~v33;
          else
            *v32 |= v33;
        }
        a2 = (unsigned int)(a2 + 1);
        ++v26;
        ++v27;
      }
      while ( (unsigned int)a2 < v11 );
      v5 = a4;
    }
    v34 = 0LL;
    v35 = 0;
    v36 = 0;
    if ( word_140D05000 )
    {
      do
      {
        HIDWORD(v59) = 0;
        *(_QWORD *)&v59 = qword_140D31700[v36];
        DWORD2(v59) = *(_DWORD *)(v59 + 16);
        while ( !(unsigned int)sub_140354698((__int64)&v59, &v58) )
          ++v35;
        v10 = 1LL;
        v36 = v37 + 1;
      }
      while ( v36 < (unsigned __int16)word_140D05000 );
    }
    else
    {
      v10 = 1LL;
    }
    dword_140D068FC = 0;
    a3 = 0LL;
    dword_140D06ACC = 0;
    dword_140D06A24 = 0;
    if ( v34 && v35 == 1 )
    {
      if ( v6[3] )
      {
        dword_140D068FC = 1;
        dword_140D06ACC = 1;
        dword_140D06A24 = 1;
        goto LABEL_67;
      }
      if ( v6[4] )
      {
        dword_140D06A24 = v6[2];
        dword_140D068FC = 1;
      }
      else
      {
        a3 = *(_QWORD *)(v34 + 128);
      }
      v38 = 0;
      if ( v12 )
      {
        v39 = a3;
        v40 = a3;
        v41 = a3;
        v42 = a3;
        a2 = (__int64)(v60 + 138);
        while ( 1 )
        {
          if ( v60[4] )
          {
            v43 = *(unsigned __int16 *)(v34 + 136);
            if ( (unsigned __int16)v43 >= *(_WORD *)(a2 - 528) )
              v44 = 0LL;
            else
              v44 = *(_QWORD *)(a2 + 8 * v43 - 520);
            if ( (unsigned __int16)v43 >= *(_WORD *)(a2 - 264) )
              v45 = 0LL;
            else
              v45 = *(_QWORD *)(a2 + 8 * v43 - 256);
            if ( (unsigned __int16)v43 >= *(_WORD *)a2 )
              v46 = 0LL;
            else
              v46 = *(_QWORD *)(a2 + 8 * v43 + 8);
            if ( (unsigned __int16)v43 >= *(_WORD *)(a2 + 264) )
              v47 = 0LL;
            else
              v47 = *(_QWORD *)(a2 + 8 * v43 + 272);
            if ( (unsigned __int16)v43 >= *(_WORD *)(a2 + 528) )
              v48 = 0LL;
            else
              v48 = *(_QWORD *)(a2 + 8 * v43 + 536);
            v49 = *(_QWORD *)(v34 + 128);
            v42 = v49 & v44;
            v41 = v49 & v45;
            v39 = v49 & v46;
            v40 = v49 & v47;
            a3 = v49 & v48;
          }
          v50 = 1;
          while ( 1 )
          {
            v51 = 3LL * (v38 + v50 * *(unsigned __int8 *)(v34 + 185));
            v52 = *(_QWORD *)(v34 + 192);
            switch ( v50 )
            {
              case 1:
                *(_QWORD *)(v52 + 24LL * (v38 + *(unsigned __int8 *)(v34 + 185)) + 16) = v42;
                goto LABEL_73;
              case 2:
                *(_QWORD *)(v52 + 24LL * (v38 + 2 * *(unsigned __int8 *)(v34 + 185)) + 16) = a3;
LABEL_73:
                *(_QWORD *)(v52 + 8 * v51 + 8) = v42;
                *(_QWORD *)(v52 + 8 * v51) = v41;
                goto LABEL_74;
              case 3:
                *(_QWORD *)(v52 + 24LL * (v38 + 3 * *(unsigned __int8 *)(v34 + 185))) = v40;
                *(_QWORD *)(v52 + 8 * v51 + 8) = v39;
                *(_QWORD *)(v52 + 8 * v51 + 16) = v39;
                goto LABEL_74;
            }
            if ( v50 == 4 )
              break;
LABEL_74:
            if ( (unsigned int)++v50 >= 5 )
              goto LABEL_64;
          }
          *(_QWORD *)(v52 + 24LL * (v38 + 4 * *(unsigned __int8 *)(v34 + 185))) = v40;
          *(_QWORD *)(v52 + 8 * v51 + 8) = v39;
          *(_QWORD *)(v52 + 8 * v51 + 16) = a3;
LABEL_64:
          ++v38;
          a2 += 1320LL;
          if ( v38 >= v12 )
          {
            v5 = a4;
            break;
          }
        }
      }
    }
    sub_1403DB8D8(&dword_140C02FD0, a2, a3);
  }
LABEL_67:
  v53 = _InterlockedDecrement((volatile signed __int32 *)v5);
  v54 = ~v53 & 0x80000000;
  if ( (v53 & 0x7FFFFFFF) != 0 )
  {
    v57 = 0;
    while ( (*(_DWORD *)v5 & 0x80000000) != v54 )
      sub_1402F32E0(&v57, a2, a3, v10);
  }
  else
  {
    *(_DWORD *)v5 = v54 | *(_DWORD *)(v5 + 4);
  }
  result = v61;
  _InterlockedDecrement(v61);
  return result;
}
