/*
 * XREFs of sub_14020E464 @ 0x14020E464
 * Callers:
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 * Callees:
 *     sub_14020E67C @ 0x14020E67C (sub_14020E67C.c)
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_140290B74 @ 0x140290B74 (sub_140290B74.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

__int64 __fastcall sub_14020E464(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // r12d
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r15d
  int v10; // r8d
  char v11; // al
  unsigned int v12; // esi
  __int64 v13; // rsi
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  _BYTE *v17; // r14
  char v18; // cl
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  struct _KPRCB *v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  struct _KPRCB *v31; // rsi
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  struct _KPRCB *v36; // rsi
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  struct _KPRCB *v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  unsigned int v45; // edx
  char v46; // al
  char v47; // al
  int v48; // eax
  __int64 v49; // rcx
  int v50; // [rsp+78h] [rbp+10h] BYREF
  int v51; // [rsp+80h] [rbp+18h] BYREF
  int v52; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)dword_140D06884;
  for ( i = 0; i < (unsigned int)dword_140D06884; ++i )
  {
    v4 = qword_140D088C0[i];
    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 568LL) = qword_140D06A00;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = 0;
      while ( 1 )
      {
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v6 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v25 = *(_DWORD *)(v6 + 24);
            *(_DWORD *)(v6 + 24) = v25 + 1;
            if ( v25 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v26 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v26 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v27 = *(_DWORD *)(v26 + 24) - 1;
            *(_DWORD *)(v26 + 24) = v27;
            if ( !v27 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v50);
        while ( *(_QWORD *)(v4 + 48) );
      }
      v7 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int8)sub_14020E67C(v7, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v7 + 868), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v28 = KeGetCurrentPrcb();
      v29 = *((_QWORD *)v28 + 4375);
      if ( v29 )
      {
        if ( *((_BYTE *)v28 + 32) <= 1u )
        {
          v30 = *(_DWORD *)(v29 + 24) - 1;
          *(_DWORD *)(v29 + 24) = v30;
          if ( !v30 )
            sub_140418E4C(v28);
        }
      }
      v31 = KeGetCurrentPrcb();
      v51 = 0;
      while ( 1 )
      {
        v32 = *((_QWORD *)v31 + 4375);
        if ( v32 )
        {
          if ( *((_BYTE *)v31 + 32) <= 1u )
          {
            v33 = *(_DWORD *)(v32 + 24);
            *(_DWORD *)(v32 + 24) = v33 + 1;
            if ( v33 == -1 )
              sub_140418E4C(v31);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
          break;
        v34 = *((_QWORD *)v31 + 4375);
        if ( v34 )
        {
          if ( *((_BYTE *)v31 + 32) <= 1u )
          {
            v35 = *(_DWORD *)(v34 + 24) - 1;
            *(_DWORD *)(v34 + 24) = v35;
            if ( !v35 )
              sub_140418E4C(v31);
          }
        }
        do
          sub_1402F32E0(&v51);
        while ( *(_QWORD *)(v7 + 64) );
      }
      v36 = KeGetCurrentPrcb();
      v52 = 0;
      while ( 1 )
      {
        v37 = *((_QWORD *)v36 + 4375);
        if ( v37 )
        {
          if ( *((_BYTE *)v36 + 32) <= 1u )
          {
            v38 = *(_DWORD *)(v37 + 24);
            *(_DWORD *)(v37 + 24) = v38 + 1;
            if ( v38 == -1 )
              sub_140418E4C(v36);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v39 = *((_QWORD *)v36 + 4375);
        if ( v39 )
        {
          if ( *((_BYTE *)v36 + 32) <= 1u )
          {
            v40 = *(_DWORD *)(v39 + 24) - 1;
            *(_DWORD *)(v39 + 24) = v40;
            if ( !v40 )
              sub_140418E4C(v36);
          }
        }
        do
          sub_1402F32E0(&v52);
        while ( *(_QWORD *)(v4 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 868));
      if ( v7 == *(_QWORD *)(v4 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v41 = KeGetCurrentPrcb();
      v42 = *((_QWORD *)v41 + 4375);
      if ( v42 )
      {
        if ( *((_BYTE *)v41 + 32) <= 1u )
        {
          v43 = *(_DWORD *)(v42 + 24) - 1;
          *(_DWORD *)(v42 + 24) = v43;
          if ( !v43 )
            sub_140418E4C(v41);
        }
      }
      sub_140224100(v7);
    }
    v8 = *(_DWORD *)(v7 + 588);
    v9 = 0;
    if ( !(unsigned int)sub_140290B74(v7) )
    {
      sub_140292884();
      v11 = *(_BYTE *)(v7 + 388);
      if ( v11 == 2 || v11 == 5 )
      {
        LOBYTE(v10) = 2;
        v9 = sub_14020EE7C(v7, *(_QWORD *)(v7 + 576), v10, v4, 0LL, a1);
      }
    }
    v12 = *(_DWORD *)(v7 + 588);
    sub_140224100(v7);
    if ( (xmmword_140D06910 & 0x8000000) != 0 )
      sub_14062DAE4(v7, 1350LL, v8, v12);
    v13 = *(_QWORD *)(v4 + 16);
    if ( v13 && !(unsigned int)sub_140290B74(*(_QWORD *)(v4 + 16)) )
    {
      v16 = *(_QWORD *)(v4 + 8);
      v17 = *(_BYTE **)(v4 + 56);
      if ( (*(_BYTE *)(v16 + 2) & 4) == 0
        || *(char *)(v16 + 195) >= 16
        || !*(_QWORD *)(v16 + 104)
        || (v22 = *(_QWORD *)(v16 + 104)) == 0
        || (v23 = *(unsigned int *)(v4 + 216) + v22) == 0
        || (v24 = sub_1402103E0(v16, v23, 0, 0, 0LL), v18 = 1, !v24) )
      {
        v18 = *(_BYTE *)(v16 + 195);
      }
      v19 = v18 & 0x7F | (*(_BYTE *)(v16 + 119) << 7);
      *v17 = v19;
      v20 = *(_QWORD *)(v4 + 35000);
      if ( v20 )
      {
        if ( v16 == *(_QWORD *)(v4 + 24) )
          v44 = (unsigned int)dword_140D0504C;
        else
          v44 = v19 & 0x7F;
        sub_14045B7FC(v20, v44, 0LL);
      }
      v21 = *(_QWORD *)(v4 + 56);
      if ( dword_140D068FC )
      {
        v45 = *(_DWORD *)(v16 + 80);
        v46 = (*(_BYTE *)(v21 + 64) ^ *(_BYTE *)(v16 + 512)) & 7 ^ *(_BYTE *)(v21 + 64);
        v47 = (v46 ^ (8 * *(_BYTE *)(v16 + 516))) & 0x38 ^ v46;
        if ( v45 <= *(_DWORD *)(v16 + 84) )
          v45 = *(_DWORD *)(v16 + 84);
        *(_BYTE *)(v21 + 64) = (v45 >= dword_140D05308 ? 0x40 : 0) | v47 & 0xBF;
      }
      sub_14035C3FC(v4, a1, v21);
      _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 0xCu);
      sub_1402F6970(a1, v13);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    v14 = KeGetCurrentPrcb();
    v15 = *((_QWORD *)v14 + 4375);
    if ( v15 )
    {
      if ( *((_BYTE *)v14 + 32) <= 1u )
      {
        v48 = *(_DWORD *)(v15 + 24) - 1;
        *(_DWORD *)(v15 + 24) = v48;
        if ( !v48 )
          sub_140418E4C(v14);
      }
    }
    if ( v9 )
    {
      v49 = *(unsigned int *)(v4 + 36);
      if ( HIDWORD(KeGetPcr()[1].LockArray) != (_DWORD)v49 )
      {
        LOBYTE(v15) = 2;
        sub_14022BA48(v49, v15);
      }
    }
    result = (unsigned int)dword_140D06884;
  }
  return result;
}
