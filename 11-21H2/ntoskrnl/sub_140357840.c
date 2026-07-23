/*
 * XREFs of sub_140357840 @ 0x140357840
 * Callers:
 *     sub_140252A60 @ 0x140252A60 (sub_140252A60.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140357840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  char v5; // si
  __int64 v7; // rax
  __int64 v8; // r10
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r15
  volatile signed __int32 *v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // r9
  struct _KPRCB *v20; // r12
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // edx
  volatile signed __int32 *v25; // rcx
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  struct _KPRCB *v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // eax
  int v31; // ecx
  struct _KPRCB *v33; // rcx
  __int64 v34; // rdx
  struct _KPRCB *v35; // r14
  __int64 v36; // rcx
  struct _KPRCB *v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _KPRCB *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // [rsp+30h] [rbp-78h] BYREF
  int v68; // [rsp+34h] [rbp-74h] BYREF
  int v69; // [rsp+38h] [rbp-70h] BYREF
  int v70; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v71; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v72[3]; // [rsp+44h] [rbp-64h] BYREF
  __int64 v73; // [rsp+50h] [rbp-58h]
  __int64 v74; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v75[2]; // [rsp+60h] [rbp-48h] BYREF

  v74 = 0LL;
  v4 = 0;
  v67 = 0;
  v5 = a2;
  while ( 1 )
  {
    v68 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        sub_1402F32E0(&v68, a2, a3, a4);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v7 = *(unsigned __int16 *)(a1 + 56);
    v8 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v8;
    v69 = 0;
    v11 = *((_QWORD *)CurrentPrcb + 4375);
    v12 = qword_140D088C0[v7] + 15360;
    v13 = (volatile signed __int32 *)(v12 + 32 * (((unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8) + v8 + 16));
    if ( v11 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v47 = *(_DWORD *)(v11 + 24);
        *(_DWORD *)(v11 + 24) = v47 + 1;
        if ( v47 == -1 )
LABEL_65:
          sub_140418E4C(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64(v13, 0LL) )
    {
      v39 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v39 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v48 = *(_DWORD *)(v39 + 24) - 1;
          *(_DWORD *)(v39 + 24) = v48;
          if ( !v48 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v69, a2, a3, a4);
      while ( *(_QWORD *)v13 );
      v40 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v40 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v49 = *(_DWORD *)(v40 + 24);
          *(_DWORD *)(v40 + 24) = v49 + 1;
          if ( v49 == -1 )
            goto LABEL_65;
        }
      }
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v14 = *(unsigned __int16 *)(a1 + 58);
      v15 = a1 + 32;
      v16 = *(_QWORD **)(a1 + 32);
      v17 = 32 * ((v14 << 8) + v10 + 16);
      v18 = *(_QWORD **)(a1 + 40);
      v19 = v12 + 32 * (((v14 ^ 1) << 8) + v10 + 16);
      v73 = v19;
      if ( v16[1] != a1 + 32 || *v18 != v15 )
        __fastfail(3u);
      *v18 = v16;
      v16[1] = v18;
      if ( v18 == v16 )
      {
        *(_DWORD *)(v17 + v12 + 28) = -1;
        v20 = KeGetCurrentPrcb();
        v21 = *((_QWORD *)v20 + 4375);
        if ( !(_WORD)v14 )
        {
          v70 = 0;
          v22 = (volatile signed __int32 *)(v12 + 32 * (v10 + 272));
          if ( v21 )
          {
            if ( *((_BYTE *)v20 + 32) <= 1u )
            {
              v51 = *(_DWORD *)(v21 + 24);
              *(_DWORD *)(v21 + 24) = v51 + 1;
              if ( v51 == -1 )
LABEL_77:
                sub_140418E4C(v20);
            }
          }
          while ( _interlockedbittestandset64(v22, 0LL) )
          {
            v42 = *((_QWORD *)v20 + 4375);
            if ( v42 )
            {
              if ( *((_BYTE *)v20 + 32) <= 1u )
              {
                v52 = *(_DWORD *)(v42 + 24) - 1;
                *(_DWORD *)(v42 + 24) = v52;
                if ( !v52 )
                  sub_140418E4C(v20);
              }
            }
            do
              sub_1402F32E0(&v70, v15, v14, v19);
            while ( *(_QWORD *)v22 );
            v43 = *((_QWORD *)v20 + 4375);
            if ( v43 )
            {
              if ( *((_BYTE *)v20 + 32) <= 1u )
              {
                v53 = *(_DWORD *)(v43 + 24);
                *(_DWORD *)(v43 + 24) = v53 + 1;
                if ( v53 == -1 )
                  goto LABEL_77;
              }
            }
          }
          goto LABEL_13;
        }
        v22 = (volatile signed __int32 *)(v12 + 32 * (v10 + 16));
        if ( v21 )
        {
          if ( *((_BYTE *)v20 + 32) <= 1u )
          {
            v54 = *(_DWORD *)(v21 + 24);
            *(_DWORD *)(v21 + 24) = v54 + 1;
            if ( v54 == -1 )
            {
              sub_140418E4C(v20);
              v19 = v73;
            }
          }
        }
        if ( _interlockedbittestandset64(v22, 0LL) )
        {
          v44 = *((_QWORD *)v20 + 4375);
          if ( v44 )
          {
            if ( *((_BYTE *)v20 + 32) <= 1u )
            {
              v55 = *(_DWORD *)(v44 + 24) - 1;
              *(_DWORD *)(v44 + 24) = v55;
              if ( !v55 )
                sub_140418E4C(v20);
            }
          }
          _mm_pause();
          goto LABEL_33;
        }
        if ( !v22 )
        {
LABEL_33:
          _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
          v33 = KeGetCurrentPrcb();
          v34 = *((_QWORD *)v33 + 4375);
          if ( v34 )
          {
            if ( *((_BYTE *)v33 + 32) <= 1u )
            {
              v56 = *(_DWORD *)(v34 + 24) - 1;
              *(_DWORD *)(v34 + 24) = v56;
              if ( !v56 )
                sub_140418E4C(v33);
            }
          }
          v35 = KeGetCurrentPrcb();
          v71 = 0;
          v36 = *((_QWORD *)v35 + 4375);
          if ( v36 )
          {
            if ( *((_BYTE *)v35 + 32) <= 1u )
            {
              v57 = *(_DWORD *)(v36 + 24);
              *(_DWORD *)(v36 + 24) = v57 + 1;
              if ( v57 == -1 )
LABEL_95:
                sub_140418E4C(v35);
            }
          }
          while ( _interlockedbittestandset64(v22, 0LL) )
          {
            v45 = *((_QWORD *)v35 + 4375);
            if ( v45 )
            {
              if ( *((_BYTE *)v35 + 32) <= 1u )
              {
                v58 = *(_DWORD *)(v45 + 24) - 1;
                *(_DWORD *)(v45 + 24) = v58;
                if ( !v58 )
                  sub_140418E4C(v35);
              }
            }
            do
              sub_1402F32E0(&v71, v34, v14, v19);
            while ( *(_QWORD *)v22 );
            v46 = *((_QWORD *)v35 + 4375);
            if ( v46 )
            {
              if ( *((_BYTE *)v35 + 32) <= 1u )
              {
                v59 = *(_DWORD *)(v46 + 24);
                *(_DWORD *)(v46 + 24) = v59 + 1;
                if ( v59 == -1 )
                  goto LABEL_95;
              }
            }
          }
          v37 = KeGetCurrentPrcb();
          v13 = (volatile signed __int32 *)(v12 + 32 * (v10 + 272));
          v72[0] = 0;
          v38 = *((_QWORD *)v37 + 4375);
          if ( v38 )
          {
            if ( *((_BYTE *)v37 + 32) <= 1u )
            {
              v60 = *(_DWORD *)(v38 + 24);
              *(_DWORD *)(v38 + 24) = v60 + 1;
              if ( v60 == -1 )
LABEL_104:
                sub_140418E4C(v37);
            }
          }
          while ( _interlockedbittestandset64(v13, 0LL) )
          {
            v61 = *((_QWORD *)v37 + 4375);
            if ( v61 )
            {
              if ( *((_BYTE *)v37 + 32) <= 1u )
              {
                v62 = *(_DWORD *)(v61 + 24) - 1;
                *(_DWORD *)(v61 + 24) = v62;
                if ( !v62 )
                  sub_140418E4C(v37);
              }
            }
            do
              sub_1402F32E0(v72, v34, v14, v19);
            while ( *(_QWORD *)v13 );
            v63 = *((_QWORD *)v37 + 4375);
            if ( v63 )
            {
              if ( *((_BYTE *)v37 + 32) <= 1u )
              {
                v64 = *(_DWORD *)(v63 + 24);
                *(_DWORD *)(v63 + 24) = v64 + 1;
                if ( v64 == -1 )
                  goto LABEL_104;
              }
            }
          }
LABEL_13:
          v19 = v73;
        }
        if ( *(_DWORD *)(v17 + v12 + 28) == -1 && *(_DWORD *)(v19 + 28) == -1 )
        {
          v23 = qword_140D07E98[2 * *(unsigned __int8 *)(v12 - 15152)];
          if ( dword_140D05038 )
          {
            v24 = v10 & 0x3F;
            v25 = (volatile signed __int32 *)(v23 + 8LL * ((unsigned int)v10 >> 6));
          }
          else
          {
            v24 = *(unsigned __int8 *)(v12 - 15151);
            v25 = (volatile signed __int32 *)((v10 << 6) + v23);
          }
          _interlockedbittestandreset64(v25, v24);
        }
        _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        if ( v27 )
        {
          if ( *((_BYTE *)v26 + 32) <= 1u )
          {
            v65 = *(_DWORD *)(v27 + 24) - 1;
            *(_DWORD *)(v27 + 24) = v65;
            if ( !v65 )
              sub_140418E4C(v26);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
      v28 = KeGetCurrentPrcb();
      v29 = *((_QWORD *)v28 + 4375);
      if ( v29 )
      {
        if ( *((_BYTE *)v28 + 32) <= 1u )
        {
          v66 = *(_DWORD *)(v29 + 24) - 1;
          *(_DWORD *)(v29 + 24) = v66;
          if ( !v66 )
            sub_140418E4C(v28);
        }
      }
      v30 = -1073741953;
      v31 = -1073741825;
LABEL_22:
      if ( !v5 )
        v30 = v31;
      _InterlockedAnd((volatile signed __int32 *)a1, v30);
      v4 = 1;
      goto LABEL_25;
    }
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    v41 = KeGetCurrentPrcb();
    a2 = *((_QWORD *)v41 + 4375);
    if ( a2 )
    {
      if ( *((_BYTE *)v41 + 32) <= 1u )
      {
        v50 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v50;
        if ( !v50 )
          sub_140418E4C(v41);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v12 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v30 = 16777087;
      v31 = 0xFFFFFF;
      goto LABEL_22;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v67 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      sub_1402F32E0(&v67, a2, a3, a4);
  }
  if ( v5 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_25:
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 && v4 )
  {
    v74 = a1;
    v75[0] = &v74;
    v75[1] = 8LL;
    sub_14035EDE4((unsigned int)v75, 1, 1073872896, 3925, 1538);
  }
  return v4;
}
