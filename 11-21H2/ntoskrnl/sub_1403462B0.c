/*
 * XREFs of sub_1403462B0 @ 0x1403462B0
 * Callers:
 *     sub_1402EEE7C @ 0x1402EEE7C (sub_1402EEE7C.c)
 *     sub_1402EF254 @ 0x1402EF254 (sub_1402EF254.c)
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 * Callees:
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403462B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r13
  _QWORD **v6; // r10
  _QWORD *v7; // r15
  unsigned __int8 v9; // r14
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r11
  unsigned int v12; // ebx
  __int64 v13; // rdi
  char v14; // si
  __int64 v15; // rdx
  PVOID *p_SystemArgument2; // r8
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // ecx
  _QWORD *v20; // r15
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  _QWORD *v23; // rcx
  struct _KPRCB *v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // cl
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbp
  char v33; // al
  __int64 v34; // rcx
  _QWORD *v35; // rax
  struct _KDPC *v36; // rcx
  char v37; // al
  struct _KPRCB *v38; // rcx
  char v39; // cl
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  struct _KPRCB *v51; // r14
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  struct _KPRCB *v60; // rcx
  __int64 v61; // rdx
  int v62; // eax
  PVOID *v63; // rdx
  int v64; // eax
  struct _KPRCB *v65; // [rsp+40h] [rbp-48h]
  unsigned __int8 v66; // [rsp+48h] [rbp-40h]
  int v67; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v68; // [rsp+98h] [rbp+10h]
  int v69; // [rsp+A8h] [rbp+20h] BYREF

  v69 = a4;
  v68 = (_QWORD *)a2;
  v5 = (int)a3;
  v6 = (_QWORD **)(a1 + 8);
  v7 = (_QWORD *)a2;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v66 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << CurrentIrql) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v65 = CurrentPrcb;
  v13 = *((_QWORD *)CurrentPrcb + 1);
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v12 & dword_140D0527C) == 0
        && (dword_140D0689C & 0x40) != 0
        && (unsigned __int8)sub_14039EA10(CurrentIrql, a2, a3, a4) )
      {
        sub_14039D930(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    CurrentPrcb = v65;
    v6 = (_QWORD **)(a1 + 8);
  }
  v14 = a5;
  if ( *v6 != v6 && (*(_QWORD *)(v13 + 232) != a1 || *(_BYTE *)(v13 + 643) != 15) )
  {
    LODWORD(v15) = 0;
    p_SystemArgument2 = (PVOID *)(a1 + 664);
    v17 = 32LL;
    do
    {
      v18 = *((_DWORD *)p_SystemArgument2 - 1);
      p_SystemArgument2 = (PVOID *)((char *)p_SystemArgument2 - 4);
      v15 = (unsigned int)(v18 + v15);
      --v17;
      v19 = *(_DWORD *)(a1 + 664);
      if ( (unsigned int)v15 >= v19 )
        goto LABEL_39;
    }
    while ( v17 > v5 );
    if ( (unsigned int)v15 < v19 )
    {
      v20 = *v6;
      while ( 1 )
      {
        v21 = (_QWORD *)*v20;
        v22 = v20;
        v20 = v21;
        v23 = (_QWORD *)v22[1];
        if ( (_QWORD *)v21[1] != v22 || (_QWORD *)*v23 != v22 )
          goto LABEL_115;
        *v23 = v21;
        v9 = 0;
        v21[1] = v23;
        v24 = KeGetCurrentPrcb();
        v25 = v22[3];
        v69 = 0;
        v26 = *((_QWORD *)v24 + 4375);
        if ( v26 )
        {
          if ( *((_BYTE *)v24 + 32) <= 1u )
          {
            v47 = *(_DWORD *)(v26 + 24);
            *(_DWORD *)(v26 + 24) = v47 + 1;
            if ( v47 == -1 )
LABEL_71:
              sub_140418E4C(v24);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 64), 0LL) )
        {
          v44 = *((_QWORD *)v24 + 4375);
          if ( v44 )
          {
            if ( *((_BYTE *)v24 + 32) <= 1u )
            {
              v48 = *(_DWORD *)(v44 + 24) - 1;
              *(_DWORD *)(v44 + 24) = v48;
              if ( !v48 )
                sub_140418E4C(v24);
            }
          }
          do
            sub_1402F32E0(&v69, v15, (__int64)p_SystemArgument2, a4);
          while ( *(_QWORD *)(v25 + 64) );
          v45 = *((_QWORD *)v24 + 4375);
          if ( v45 )
          {
            if ( *((_BYTE *)v24 + 32) <= 1u )
            {
              v49 = *(_DWORD *)(v45 + 24);
              *(_DWORD *)(v45 + 24) = v49 + 1;
              if ( v49 == -1 )
                goto LABEL_71;
            }
          }
        }
        if ( *(_BYTE *)(v25 + 388) == 5 )
        {
          v27 = *(unsigned int *)(v25 + 540);
          v28 = (unsigned __int8)v27;
          if ( (unsigned __int8)v27 != (_DWORD)v5 )
          {
            v27 &= 0x100u;
            if ( !(_DWORD)v27 )
            {
              v50 = *(_QWORD *)(v25 + 232);
              _InterlockedDecrement((volatile signed __int32 *)(v50 + 4 * v28 + 536));
              _InterlockedIncrement((volatile signed __int32 *)(v50 + 4 * v5 + 536));
            }
            *(_DWORD *)(v25 + 540) = v27 | (unsigned __int8)v5;
          }
          v29 = *(_BYTE *)(v25 + 112);
          v30 = v29 & 7;
          if ( v30 == 1 || v30 == 4 )
          {
            v31 = *(_QWORD *)(v25 + 232);
            if ( v31 )
            {
              if ( (*(_BYTE *)v31 & 0x7F) == 0x15 )
              {
                *(_DWORD *)(v25 + 540) = (unsigned __int8)*(_DWORD *)(v25 + 540);
                _InterlockedIncrement((volatile signed __int32 *)(v31 + 4LL * *(unsigned int *)(v25 + 540) + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v31 + 40));
              }
            }
            v32 = *(_QWORD *)(v25 + 712);
            if ( v32 )
            {
              v51 = KeGetCurrentPrcb();
              v67 = 0;
              v52 = *((_QWORD *)v51 + 4375);
              if ( v52 )
              {
                if ( *((_BYTE *)v51 + 32) <= 1u )
                {
                  v53 = *(_DWORD *)(v52 + 24);
                  *(_DWORD *)(v52 + 24) = v53 + 1;
                  if ( v53 == -1 )
LABEL_86:
                    sub_140418E4C(v51);
                }
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 32464), 0LL) )
              {
                v54 = *((_QWORD *)v51 + 4375);
                if ( v54 )
                {
                  if ( *((_BYTE *)v51 + 32) <= 1u )
                  {
                    v55 = *(_DWORD *)(v54 + 24) - 1;
                    *(_DWORD *)(v54 + 24) = v55;
                    if ( !v55 )
                      sub_140418E4C(v51);
                  }
                }
                do
                  sub_1402F32E0(&v67, v27, (__int64)p_SystemArgument2, a4);
                while ( *(_QWORD *)(v32 + 32464) );
                v56 = *((_QWORD *)v51 + 4375);
                if ( v56 )
                {
                  if ( *((_BYTE *)v51 + 32) <= 1u )
                  {
                    v57 = *(_DWORD *)(v56 + 24);
                    *(_DWORD *)(v56 + 24) = v57 + 1;
                    if ( v57 == -1 )
                      goto LABEL_86;
                  }
                }
              }
              if ( *(_QWORD *)(v25 + 712) )
              {
                v58 = *(_QWORD *)(v25 + 216);
                v59 = *(_QWORD **)(v25 + 224);
                if ( *(_QWORD *)(v58 + 8) != v25 + 216 || *v59 != v25 + 216 )
                  goto LABEL_115;
                *v59 = v58;
                *(_QWORD *)(v58 + 8) = v59;
                *(_QWORD *)(v25 + 712) = 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v32 + 32464), 0LL);
              v60 = KeGetCurrentPrcb();
              v61 = *((_QWORD *)v60 + 4375);
              if ( v61 )
              {
                if ( *((_BYTE *)v60 + 32) <= 1u )
                {
                  v62 = *(_DWORD *)(v61 + 24) - 1;
                  *(_DWORD *)(v61 + 24) = v62;
                  if ( !v62 )
                    sub_140418E4C(v60);
                }
              }
            }
            v33 = *(_BYTE *)(v25 + 388);
            if ( v33 == 1 )
            {
              *(_DWORD *)(v25 + 116) |= 2u;
            }
            else if ( v33 == 5 )
            {
              v34 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v25 + 436));
              if ( *(_BYTE *)(v25 + 391) )
                *(_QWORD *)(v25 + 1000) += v34;
              else
                *(_QWORD *)(v25 + 992) += v34;
            }
            CurrentPrcb = v65;
            *(_BYTE *)(v25 + 388) = 7;
            *(_QWORD *)(v25 + 216) = *((_QWORD *)v65 + 1441);
            v35 = v68;
            *((_QWORD *)v65 + 1441) = v25 + 216;
            *(_QWORD *)(v25 + 200) = v35;
            *(_QWORD *)(v25 + 976) = 0LL;
          }
          else
          {
            if ( (*(_BYTE *)(v25 + 112) & 7) != 0 )
            {
              if ( v30 != 5 )
              {
                CurrentPrcb = v65;
                if ( v30 == 3 )
                  *((_BYTE *)v22 + 17) = 2;
                goto LABEL_29;
              }
              *(_BYTE *)(v25 + 112) = v29 & 0xF8 | 6;
              goto LABEL_45;
            }
            v46 = v68;
            CurrentPrcb = v65;
            *(_BYTE *)(v25 + 112) = v29 & 0xF8 | 2;
            *(_QWORD *)(v25 + 200) = v46;
            *(_QWORD *)(v25 + 976) = 0LL;
            *((_BYTE *)v22 + 17) = 0;
          }
          *(_BYTE *)(v25 + 645) = 0;
          v9 = 1;
          v36 = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (char)v5 < *(char *)(v25 + 563) )
          {
            if ( *(_BYTE *)(v25 + 871) )
            {
              v63 = (PVOID *)(v25 + 816);
              if ( *(_QWORD *)(v25 + 816) == 1LL )
              {
                p_SystemArgument2 = &v36[557].SystemArgument2;
                if ( v36 != (struct _KDPC *)-35696LL )
                {
                  *v63 = *p_SystemArgument2;
                  *p_SystemArgument2 = v63;
                  _InterlockedIncrement16((volatile signed __int16 *)(v25 + 868));
                  sub_140229D30(v36);
                  CurrentPrcb = v65;
                }
              }
            }
          }
          v37 = *(_BYTE *)(v25 + 564);
          *(_BYTE *)(v25 + 563) = v5;
          if ( v37 )
          {
            if ( (v37 & 0xF) != 0 )
              *(_DWORD *)(v25 + 872) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v25 + 564) = 0;
          }
          if ( (_DWORD)v5 == *(char *)(v25 + 195) )
            goto LABEL_29;
          v43 = *(_QWORD *)(v25 + 72) + dword_140D050CC * (unsigned int)*(unsigned __int8 *)(v25 + 651);
          if ( (*(_DWORD *)(v25 + 120) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)(v25 + 120), 5u);
          *(_QWORD *)(v25 + 32) = v43;
          sub_140344A30(v25, 0LL, v5);
        }
LABEL_45:
        CurrentPrcb = v65;
LABEL_29:
        *(_QWORD *)(v25 + 64) = 0LL;
        v38 = KeGetCurrentPrcb();
        v15 = *((_QWORD *)v38 + 4375);
        if ( v15 )
        {
          if ( *((_BYTE *)v38 + 32) <= 1u )
          {
            v64 = *(_DWORD *)(v15 + 24) - 1;
            *(_DWORD *)(v15 + 24) = v64;
            if ( !v64 )
            {
              sub_140418E4C(v38);
              CurrentPrcb = v65;
            }
          }
        }
        ++*((_BYTE *)v22 + 17);
        if ( v9 )
        {
          v14 = a5;
          goto LABEL_32;
        }
        if ( v20 == (_QWORD *)(a1 + 8) )
        {
          v14 = a5;
          v7 = v68;
          break;
        }
      }
    }
  }
LABEL_39:
  if ( (v14 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    v41 = 16 * v5 + a1 + 24;
    v42 = *(_QWORD **)(v41 + 8);
    if ( *v42 != v41 )
LABEL_115:
      __fastfail(3u);
    *v7 = v41;
    v7[1] = v42;
    *v42 = v7;
    *(_QWORD *)(v41 + 8) = v7;
  }
LABEL_32:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (v14 & 1) != 0 )
    v39 = 3;
  else
    v39 = 0;
  sub_1402B0820((__int64)CurrentPrcb, v39, 1, 0, v66);
  return v9;
}
