/*
 * XREFs of sub_140344DD0 @ 0x140344DD0
 * Callers:
 *     sub_140201DF4 @ 0x140201DF4 (sub_140201DF4.c)
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_14035D00C @ 0x14035D00C (sub_14035D00C.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     sub_14035EE9C @ 0x14035EE9C (sub_14035EE9C.c)
 *     sub_14035EF6C @ 0x14035EF6C (sub_14035EF6C.c)
 *     sub_1403D3170 @ 0x1403D3170 (sub_1403D3170.c)
 *     sub_140574B54 @ 0x140574B54 (sub_140574B54.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_1405757C0 @ 0x1405757C0 (sub_1405757C0.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140344DD0(__int64 a1, __int64 a2, volatile signed __int32 **a3, __int64 a4)
{
  _QWORD *v5; // rbp
  __int64 *v7; // r8
  int v8; // ebx
  __int64 v9; // rdi
  volatile signed __int32 *v10; // r14
  __int64 v11; // rax
  struct _KPRCB *v12; // r13
  __int64 v13; // rcx
  __int64 result; // rax
  char v15; // al
  __int64 v16; // r12
  struct _KPRCB *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v22; // rcx
  struct _KPRCB *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct _KPRCB *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v49[17]; // [rsp+24h] [rbp-44h] BYREF
  int v50; // [rsp+70h] [rbp+8h] BYREF
  int v51; // [rsp+88h] [rbp+20h] BYREF

  v5 = (_QWORD *)a2;
LABEL_2:
  v7 = qword_140D088C0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 == 2 )
        goto LABEL_4;
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 3 )
      {
        v20 = *(unsigned int *)(a1 + 536);
        if ( (int)v20 >= 0 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = qword_140D088C0[v20];
          v50 = 0;
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v22 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v34 = *(_DWORD *)(v22 + 24);
              *(_DWORD *)(v22 + 24) = v34 + 1;
              if ( v34 == -1 )
LABEL_57:
                sub_140418E4C(CurrentPrcb);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v28 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v28 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v35 = *(_DWORD *)(v28 + 24) - 1;
                *(_DWORD *)(v28 + 24) = v35;
                if ( !v35 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
            do
              sub_1402F32E0(&v50, a2, (__int64)v7, a4);
            while ( *(_QWORD *)(v9 + 48) );
            v29 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v29 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v36 = *(_DWORD *)(v29 + 24);
                *(_DWORD *)(v29 + 24) = v36 + 1;
                if ( v36 == -1 )
                  goto LABEL_57;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 16) )
            goto LABEL_8;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v20 )
            __fastfail(0x1Eu);
LABEL_26:
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          goto LABEL_27;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_8;
        v15 = *(_BYTE *)(a1 + 112) & 7;
        if ( v15 == 1 || (unsigned __int8)(v15 - 3) <= 3u )
          goto LABEL_8;
        LOBYTE(v8) = 2;
LABEL_4:
        v11 = *(unsigned int *)(a1 + 536);
        if ( (int)v11 >= 0 )
        {
          v12 = KeGetCurrentPrcb();
          v9 = qword_140D088C0[v11];
          v49[0] = 0;
          v13 = *((_QWORD *)v12 + 4375);
          if ( v13 )
          {
            if ( *((_BYTE *)v12 + 32) <= 1u )
            {
              v44 = *(_DWORD *)(v13 + 24);
              *(_DWORD *)(v13 + 24) = v44 + 1;
              if ( v44 == -1 )
LABEL_87:
                sub_140418E4C(v12);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v24 = *((_QWORD *)v12 + 4375);
            if ( v24 )
            {
              if ( *((_BYTE *)v12 + 32) <= 1u )
              {
                v45 = *(_DWORD *)(v24 + 24) - 1;
                *(_DWORD *)(v24 + 24) = v45;
                if ( !v45 )
                  sub_140418E4C(v12);
              }
            }
            do
              sub_1402F32E0(v49, a2, (__int64)v7, a4);
            while ( *(_QWORD *)(v9 + 48) );
            v25 = *((_QWORD *)v12 + 4375);
            if ( v25 )
            {
              if ( *((_BYTE *)v12 + 32) <= 1u )
              {
                v46 = *(_DWORD *)(v25 + 24);
                *(_DWORD *)(v25 + 24) = v46 + 1;
                if ( v46 == -1 )
                  goto LABEL_87;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 8) )
            goto LABEL_8;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          v23 = KeGetCurrentPrcb();
          v7 = qword_140D088C0;
          a2 = *((_QWORD *)v23 + 4375);
          if ( a2 )
          {
            v7 = qword_140D088C0;
            if ( *((_BYTE *)v23 + 32) <= 1u )
            {
              v7 = qword_140D088C0;
              v47 = *(_DWORD *)(a2 + 24) - 1;
              *(_DWORD *)(a2 + 24) = v47;
              if ( !v47 )
              {
LABEL_84:
                sub_140418E4C(v23);
                goto LABEL_2;
              }
            }
          }
        }
      }
    }
    v16 = *(unsigned int *)(a1 + 536);
    if ( (int)v16 >= 0 )
    {
      v26 = KeGetCurrentPrcb();
      v9 = qword_140D088C0[v16];
      v48 = 0;
      v27 = *((_QWORD *)v26 + 4375);
      if ( v27 )
      {
        if ( *((_BYTE *)v26 + 32) <= 1u )
        {
          v40 = *(_DWORD *)(v27 + 24);
          *(_DWORD *)(v27 + 24) = v40 + 1;
          if ( v40 == -1 )
LABEL_75:
            sub_140418E4C(v26);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
      {
        v30 = *((_QWORD *)v26 + 4375);
        if ( v30 )
        {
          if ( *((_BYTE *)v26 + 32) <= 1u )
          {
            v41 = *(_DWORD *)(v30 + 24) - 1;
            *(_DWORD *)(v30 + 24) = v41;
            if ( !v41 )
              sub_140418E4C(v26);
          }
        }
        do
          sub_1402F32E0(&v48, a2, (__int64)v7, a4);
        while ( *(_QWORD *)(v9 + 48) );
        v31 = *((_QWORD *)v26 + 4375);
        if ( v31 )
        {
          if ( *((_BYTE *)v26 + 32) <= 1u )
          {
            v42 = *(_DWORD *)(v31 + 24);
            *(_DWORD *)(v31 + 24) = v42 + 1;
            if ( v42 == -1 )
              goto LABEL_75;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
        goto LABEL_8;
      goto LABEL_26;
    }
    v17 = KeGetCurrentPrcb();
    v18 = (unsigned int)v16;
    LODWORD(v18) = v16 & 0x7FFFFFFF;
    v51 = 0;
    v19 = *((_QWORD *)v17 + 4375);
    v10 = *(volatile signed __int32 **)(qword_140D088C0[v18] + 34888);
    if ( v19 )
    {
      if ( *((_BYTE *)v17 + 32) <= 1u )
      {
        v37 = *(_DWORD *)(v19 + 24);
        *(_DWORD *)(v19 + 24) = v37 + 1;
        if ( v37 == -1 )
LABEL_66:
          sub_140418E4C(v17);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      v32 = *((_QWORD *)v17 + 4375);
      if ( v32 )
      {
        if ( *((_BYTE *)v17 + 32) <= 1u )
        {
          v38 = *(_DWORD *)(v32 + 24) - 1;
          *(_DWORD *)(v32 + 24) = v38;
          if ( !v38 )
            sub_140418E4C(v17);
        }
      }
      do
        sub_1402F32E0(&v51, a2, (__int64)v7, a4);
      while ( *(_QWORD *)v10 );
      v33 = *((_QWORD *)v17 + 4375);
      if ( v33 )
      {
        if ( *((_BYTE *)v17 + 32) <= 1u )
        {
          v39 = *(_DWORD *)(v33 + 24);
          *(_DWORD *)(v33 + 24) = v39 + 1;
          if ( v39 == -1 )
            goto LABEL_66;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
LABEL_27:
    v23 = KeGetCurrentPrcb();
    v7 = qword_140D088C0;
    a2 = *((_QWORD *)v23 + 4375);
    if ( a2 )
    {
      v7 = qword_140D088C0;
      if ( *((_BYTE *)v23 + 32) <= 1u )
      {
        v7 = qword_140D088C0;
        v43 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v43;
        if ( !v43 )
          goto LABEL_84;
      }
    }
  }
  v9 = 0LL;
LABEL_8:
  result = (unsigned __int8)v8;
  *v5 = v9;
  *a3 = v10;
  return result;
}
