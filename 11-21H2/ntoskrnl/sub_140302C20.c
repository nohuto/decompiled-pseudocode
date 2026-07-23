/*
 * XREFs of sub_140302C20 @ 0x140302C20
 * Callers:
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407B81B0 @ 0x1407B81B0 (sub_1407B81B0.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140302C20(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  char v5; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // rcx
  __int64 *v10; // rdx
  int v11; // esi
  __int64 v12; // rbp
  volatile signed __int32 *v13; // r14
  char v14; // al
  char v15; // al
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // r8
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // r12
  struct _KPRCB *v25; // r13
  __int64 v26; // rcx
  struct _KPRCB *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  struct _KPRCB *v30; // r13
  __int64 v31; // rcx
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r12
  struct _KPRCB *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rcx
  struct _KPRCB *v38; // rcx
  __int64 v39; // rdx
  struct _KPRCB *v40; // r13
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  __int64 v73; // r8
  int v74; // eax
  bool v75; // zf
  _DWORD v76[6]; // [rsp+20h] [rbp-58h] BYREF
  int v77; // [rsp+80h] [rbp+8h] BYREF
  int v78; // [rsp+88h] [rbp+10h] BYREF
  int v79; // [rsp+90h] [rbp+18h] BYREF
  int v80; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  *a2 = 0;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (_DWORD *)((-1LL << (CurrentIrql + 1)) & 4);
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v77 = 0;
  v9 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v9 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v52 = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 24) = v52 + 1;
      if ( v52 == -1 )
LABEL_89:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v42 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v42 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v53 = *(_DWORD *)(v42 + 24) - 1;
        *(_DWORD *)(v42 + 24) = v53;
        if ( !v53 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v77, (__int64)a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
    v43 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v43 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v54 = *(_DWORD *)(v43 + 24);
        *(_DWORD *)(v43 + 24) = v54 + 1;
        if ( v54 == -1 )
          goto LABEL_89;
      }
    }
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &unk_140D32B00 )
  {
    LOBYTE(v11) = *(_BYTE *)(a1 + 388);
    *((_BYTE *)v4 + 10) = 1;
    goto LABEL_19;
  }
LABEL_5:
  v10 = qword_140D088C0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)(a1 + 388);
      v12 = 0LL;
      v13 = 0LL;
      if ( v11 == 5 )
      {
        v14 = *(_BYTE *)(a1 + 112) & 7;
        if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
          goto LABEL_8;
        LOBYTE(v11) = 2;
        goto LABEL_39;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_39:
        v29 = *(unsigned int *)(a1 + 536);
        if ( (int)v29 >= 0 )
        {
          v30 = KeGetCurrentPrcb();
          v12 = qword_140D088C0[v29];
          v76[0] = 0;
          v31 = *((_QWORD *)v30 + 4375);
          if ( v31 )
          {
            if ( *((_BYTE *)v30 + 32) <= 1u )
            {
              v65 = *(_DWORD *)(v31 + 24);
              *(_DWORD *)(v31 + 24) = v65 + 1;
              if ( v65 == -1 )
LABEL_128:
                sub_140418E4C(v30);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
          {
            v46 = *((_QWORD *)v30 + 4375);
            if ( v46 )
            {
              if ( *((_BYTE *)v30 + 32) <= 1u )
              {
                v66 = *(_DWORD *)(v46 + 24) - 1;
                *(_DWORD *)(v46 + 24) = v66;
                if ( !v66 )
                  sub_140418E4C(v30);
              }
            }
            do
              sub_1402F32E0(v76, (__int64)v10, a3, a4);
            while ( *(_QWORD *)(v12 + 48) );
            v47 = *((_QWORD *)v30 + 4375);
            if ( v47 )
            {
              if ( *((_BYTE *)v30 + 32) <= 1u )
              {
                v67 = *(_DWORD *)(v47 + 24);
                *(_DWORD *)(v47 + 24) = v67 + 1;
                if ( v67 == -1 )
                  goto LABEL_128;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v12 + 8) )
            goto LABEL_8;
LABEL_34:
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
          goto LABEL_35;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_8;
        v24 = *(unsigned int *)(a1 + 536);
        if ( (int)v24 >= 0 )
        {
          v25 = KeGetCurrentPrcb();
          v12 = qword_140D088C0[v24];
          v78 = 0;
          v26 = *((_QWORD *)v25 + 4375);
          if ( v26 )
          {
            if ( *((_BYTE *)v25 + 32) <= 1u )
            {
              v55 = *(_DWORD *)(v26 + 24);
              *(_DWORD *)(v26 + 24) = v55 + 1;
              if ( v55 == -1 )
LABEL_98:
                sub_140418E4C(v25);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
          {
            v50 = *((_QWORD *)v25 + 4375);
            if ( v50 )
            {
              if ( *((_BYTE *)v25 + 32) <= 1u )
              {
                v56 = *(_DWORD *)(v50 + 24) - 1;
                *(_DWORD *)(v50 + 24) = v56;
                if ( !v56 )
                  sub_140418E4C(v25);
              }
            }
            do
              sub_1402F32E0(&v78, (__int64)v10, a3, a4);
            while ( *(_QWORD *)(v12 + 48) );
            v51 = *((_QWORD *)v25 + 4375);
            if ( v51 )
            {
              if ( *((_BYTE *)v25 + 32) <= 1u )
              {
                v57 = *(_DWORD *)(v51 + 24);
                *(_DWORD *)(v51 + 24) = v57 + 1;
                if ( v57 == -1 )
                  goto LABEL_98;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v12 + 16) )
            goto LABEL_8;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v24 )
            __fastfail(0x1Eu);
          goto LABEL_34;
        }
      }
    }
    v34 = *(unsigned int *)(a1 + 536);
    if ( (int)v34 >= 0 )
    {
      v40 = KeGetCurrentPrcb();
      v12 = qword_140D088C0[v34];
      v80 = 0;
      v41 = *((_QWORD *)v40 + 4375);
      if ( v41 )
      {
        if ( *((_BYTE *)v40 + 32) <= 1u )
        {
          v61 = *(_DWORD *)(v41 + 24);
          *(_DWORD *)(v41 + 24) = v61 + 1;
          if ( v61 == -1 )
LABEL_116:
            sub_140418E4C(v40);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
      {
        v44 = *((_QWORD *)v40 + 4375);
        if ( v44 )
        {
          if ( *((_BYTE *)v40 + 32) <= 1u )
          {
            v62 = *(_DWORD *)(v44 + 24) - 1;
            *(_DWORD *)(v44 + 24) = v62;
            if ( !v62 )
              sub_140418E4C(v40);
          }
        }
        do
          sub_1402F32E0(&v80, (__int64)v10, a3, a4);
        while ( *(_QWORD *)(v12 + 48) );
        v45 = *((_QWORD *)v40 + 4375);
        if ( v45 )
        {
          if ( *((_BYTE *)v40 + 32) <= 1u )
          {
            v63 = *(_DWORD *)(v45 + 24);
            *(_DWORD *)(v45 + 24) = v63 + 1;
            if ( v63 == -1 )
              goto LABEL_116;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v34 )
        goto LABEL_8;
      goto LABEL_34;
    }
    v35 = KeGetCurrentPrcb();
    v36 = (unsigned int)v34;
    LODWORD(v36) = v34 & 0x7FFFFFFF;
    v79 = 0;
    v37 = *((_QWORD *)v35 + 4375);
    v13 = *(volatile signed __int32 **)(qword_140D088C0[v36] + 34888);
    if ( v37 )
    {
      if ( *((_BYTE *)v35 + 32) <= 1u )
      {
        v58 = *(_DWORD *)(v37 + 24);
        *(_DWORD *)(v37 + 24) = v58 + 1;
        if ( v58 == -1 )
LABEL_107:
          sub_140418E4C(v35);
      }
    }
    while ( _interlockedbittestandset64(v13, 0LL) )
    {
      v48 = *((_QWORD *)v35 + 4375);
      if ( v48 )
      {
        if ( *((_BYTE *)v35 + 32) <= 1u )
        {
          v59 = *(_DWORD *)(v48 + 24) - 1;
          *(_DWORD *)(v48 + 24) = v59;
          if ( !v59 )
            sub_140418E4C(v35);
        }
      }
      do
        sub_1402F32E0(&v79, (__int64)v10, a3, a4);
      while ( *(_QWORD *)v13 );
      v49 = *((_QWORD *)v35 + 4375);
      if ( v49 )
      {
        if ( *((_BYTE *)v35 + 32) <= 1u )
        {
          v60 = *(_DWORD *)(v49 + 24);
          *(_DWORD *)(v49 + 24) = v60 + 1;
          if ( v60 == -1 )
            goto LABEL_107;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v34 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
LABEL_35:
    v27 = KeGetCurrentPrcb();
    v28 = *((_QWORD *)v27 + 4375);
    if ( !v28 || *((_BYTE *)v27 + 32) > 1u )
      goto LABEL_5;
    v64 = *(_DWORD *)(v28 + 24) - 1;
    *(_DWORD *)(v28 + 24) = v64;
    v10 = qword_140D088C0;
    if ( !v64 )
    {
      sub_140418E4C(v27);
      goto LABEL_5;
    }
  }
  v12 = 0LL;
LABEL_8:
  *v4 = *(_DWORD *)(a1 + 436);
  v15 = *(_BYTE *)(a1 + 388);
  v16 = *(_DWORD *)(a1 + 132);
  if ( v15 == 1 || v15 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v16 += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  v4[1] = v16;
  v17 = *(_QWORD *)(a1 + 992);
  v18 = *(_QWORD *)(a1 + 1000);
  if ( *(_BYTE *)(a1 + 388) == 5 )
  {
    v19 = *(_BYTE *)(a1 + 112) & 7;
    if ( v19 == 1 || (unsigned __int8)(v19 - 3) <= 3u )
    {
      v20 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        v18 += v20;
      else
        v17 += v20;
    }
  }
  *((_QWORD *)v4 + 2) = v17;
  *((_QWORD *)v4 + 3) = v18;
  if ( v12 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
    v32 = KeGetCurrentPrcb();
    v33 = *((_QWORD *)v32 + 4375);
    if ( v33 )
    {
      if ( *((_BYTE *)v32 + 32) <= 1u )
      {
        v68 = *(_DWORD *)(v33 + 24) - 1;
        *(_DWORD *)(v33 + 24) = v68;
        if ( !v68 )
          sub_140418E4C(v32);
      }
    }
  }
  if ( v13 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    v38 = KeGetCurrentPrcb();
    v39 = *((_QWORD *)v38 + 4375);
    if ( v39 )
    {
      if ( *((_BYTE *)v38 + 32) <= 1u )
      {
        v69 = *(_DWORD *)(v39 + 24) - 1;
        *(_DWORD *)(v39 + 24) = v69;
        if ( !v69 )
          sub_140418E4C(v38);
      }
    }
  }
  v5 = *(_BYTE *)(a1 + 643);
  *((_BYTE *)v4 + 10) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v11 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v5 = 5;
LABEL_19:
  *((_BYTE *)v4 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  v21 = KeGetCurrentPrcb();
  v22 = *((_QWORD *)v21 + 4375);
  if ( v22 )
  {
    if ( *((_BYTE *)v21 + 32) <= 1u )
    {
      v70 = *(_DWORD *)(v22 + 24) - 1;
      *(_DWORD *)(v22 + 24) = v70;
      if ( !v70 )
        sub_140418E4C(v21);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v71 = KeGetCurrentIrql();
      if ( v71 <= 0xFu && CurrentIrql <= 0xFu && v71 >= 2u )
      {
        v72 = KeGetCurrentPrcb();
        v73 = *((_QWORD *)v72 + 4375);
        v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v75 = (v74 & *(_DWORD *)(v73 + 20)) == 0;
        *(_DWORD *)(v73 + 20) &= v74;
        if ( v75 )
          sub_140418E4C(v72);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *((_BYTE *)v4 + 9) = v5;
  *((_BYTE *)v4 + 8) = v11;
  return result;
}
