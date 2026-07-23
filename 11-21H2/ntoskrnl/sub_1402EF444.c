/*
 * XREFs of sub_1402EF444 @ 0x1402EF444
 * Callers:
 *     sub_14079FBD4 @ 0x14079FBD4 (sub_14079FBD4.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall sub_1402EF444(__int64 a1, char a2)
{
  __int64 v2; // r12
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // r9
  struct _KPRCB *v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rax
  __int64 v29; // r9
  int v30; // edx
  int v31; // [rsp+58h] [rbp+10h] BYREF
  int v32; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v31 = 0;
    while ( 1 )
    {
      v7 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v7 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v14 = *(_DWORD *)(v7 + 24);
          *(_DWORD *)(v7 + 24) = v14 + 1;
          if ( v14 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v13 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v15 = *(_DWORD *)(v13 + 24) - 1;
          *(_DWORD *)(v13 + 24) = v15;
          if ( !v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v31);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      sub_140224100(a1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = *((_QWORD *)v17 + 4375);
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C(v17);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * a2 + 152) == a1 + 16LL * a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v21 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v22 = KeGetCurrentPrcb();
    v32 = 0;
    while ( 1 )
    {
      v23 = *((_QWORD *)v22 + 4375);
      if ( v23 )
      {
        if ( *((_BYTE *)v22 + 32) <= 1u )
        {
          v24 = *(_DWORD *)(v23 + 24);
          *(_DWORD *)(v23 + 24) = v24 + 1;
          if ( v24 == -1 )
            sub_140418E4C(v22);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v25 = *((_QWORD *)v22 + 4375);
      if ( v25 )
      {
        if ( *((_BYTE *)v22 + 32) <= 1u )
        {
          v26 = *(_DWORD *)(v25 + 24) - 1;
          *(_DWORD *)(v25 + 24) = v26;
          if ( !v26 )
            sub_140418E4C(v22);
        }
      }
      do
        sub_1402F32E0(&v32);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v9 = (_QWORD *)(16 * v2 + a1 + 152);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 )
  {
    v10 = 0LL;
  }
  else
  {
    v11 = (_QWORD *)v9[1];
    if ( (_QWORD *)v10[1] != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    v12 = v10;
    do
    {
      *((_BYTE *)v12 + 66) = 0;
      v12 = (_QWORD *)*v12;
    }
    while ( v12 != v10 );
    v9[1] = v9;
    *v9 = v9;
  }
  sub_140224100(a1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = *((_QWORD *)v28 + 4375);
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
        *(_DWORD *)(v29 + 20) &= v30;
        if ( v20 )
          sub_140418E4C(v28);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
