/*
 * XREFs of sub_14035C560 @ 0x14035C560
 * Callers:
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 *     sub_140A58CF8 @ 0x140A58CF8 (sub_140A58CF8.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035C560(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 result; // rax
  int v11; // ebp
  struct _KPRCB *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+60h] [rbp+8h] BYREF
  int v30; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 209);
  v6 = *(_QWORD *)(a1 + 192);
  v7 = *(unsigned __int8 *)(a1 + 35);
  v8 = *(_QWORD *)(a1 + 34912);
  v9 = 1LL << v4;
  if ( !(_DWORD)a2 )
  {
    *(_BYTE *)(a1 + 13243) = 0;
    if ( (v7 & 1) != 0 )
      __fastfail(0x21u);
    v19 = v7 + 1;
    *(_BYTE *)(a1 + 35) = v19;
    CurrentPrcb = KeGetCurrentPrcb();
    v29 = 0;
    while ( 1 )
    {
      v21 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v27 = *(_DWORD *)(v21 + 24);
          *(_DWORD *)(v21 + 24) = v27 + 1;
          if ( v27 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        break;
      v24 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v24 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v28 = *(_DWORD *)(v24 + 24) - 1;
          *(_DWORD *)(v24 + 24) = v28;
          if ( !v28 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v29, a2, a3, a4);
      while ( *(_QWORD *)v6 );
    }
    if ( v19 == 1 )
      *(_QWORD *)(v6 + 8) &= ~(1LL << v4);
    *(_QWORD *)(v6 + 40) &= ~(1LL << v4);
    *(_QWORD *)(v6 + 16) &= ~v8;
    v22 = v9 | *(_QWORD *)(v6 + 24) & ~v8;
    if ( (v8 & ~*(_QWORD *)(v6 + 40)) != v9 )
      v22 = *(_QWORD *)(v6 + 24) & ~v8;
    *(_QWORD *)(v6 + 24) = v22;
    result = ~*(_QWORD *)(a1 + 34936) & *(_QWORD *)(v6 + 32);
    goto LABEL_14;
  }
  result = *(_QWORD *)(a1 + 35000);
  if ( result )
    *(_BYTE *)(result + 16) = 1;
  *(_BYTE *)(a1 + 13243) = a3;
  if ( (v7 & 1) != 0 )
  {
    v11 = v7 - 1;
    *(_BYTE *)(a1 + 35) = v11;
    v12 = KeGetCurrentPrcb();
    v30 = 0;
    while ( 1 )
    {
      v13 = *((_QWORD *)v12 + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)v12 + 32) <= 1u )
        {
          v25 = *(_DWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 24) = v25 + 1;
          if ( v25 == -1 )
            sub_140418E4C(v12);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        break;
      v23 = *((_QWORD *)v12 + 4375);
      if ( v23 )
      {
        if ( *((_BYTE *)v12 + 32) <= 1u )
        {
          v26 = *(_DWORD *)(v23 + 24) - 1;
          *(_DWORD *)(v23 + 24) = v26;
          if ( !v26 )
            sub_140418E4C(v12);
        }
      }
      do
        sub_1402F32E0(&v30, a2, a3, a4);
      while ( *(_QWORD *)v6 );
    }
    if ( !v11 )
      *(_QWORD *)(v6 + 8) |= 1LL << v4;
    v14 = *(_QWORD *)(v6 + 40) | (1LL << v4);
    *(_QWORD *)(v6 + 40) = v14;
    if ( (v8 & v14) == v8 )
    {
      *(_QWORD *)(v6 + 16) |= v8;
    }
    else
    {
      v18 = v8 & ~v14;
      if ( ((v18 - 1) & v18) == 0 )
        *(_QWORD *)(v6 + 24) |= v18;
    }
    *(_QWORD *)(v6 + 24) &= ~(1LL << v4);
    v15 = *(_QWORD *)(a1 + 34936);
    result = *(_QWORD *)(v6 + 40) & v15;
    if ( result != v15 )
      goto LABEL_15;
    result = v15 | *(_QWORD *)(v6 + 32);
LABEL_14:
    *(_QWORD *)(v6 + 32) = result;
LABEL_15:
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    v16 = KeGetCurrentPrcb();
    v17 = *((_QWORD *)v16 + 4375);
    if ( v17 && *((_BYTE *)v16 + 32) <= 1u )
    {
      result = (unsigned int)(*(_DWORD *)(v17 + 24) - 1);
      *(_DWORD *)(v17 + 24) = result;
      if ( !(_DWORD)result )
        return sub_140418E4C(v16);
    }
  }
  return result;
}
