/*
 * XREFs of sub_14030F970 @ 0x14030F970
 * Callers:
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045AAC0 @ 0x14045AAC0 (sub_14045AAC0.c)
 *     sub_14045AB80 @ 0x14045AB80 (sub_14045AB80.c)
 */

__int64 __fastcall sub_14030F970(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct _KPRCB *v20; // rbp
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+48h] [rbp+10h] BYREF
  int v32; // [rsp+50h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v31 = 0;
  v8 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v8 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v17 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = v17 + 1;
      if ( v17 == -1 )
LABEL_13:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v15 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v15 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v15 + 24) - 1;
        *(_DWORD *)(v15 + 24) = v18;
        if ( !v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v31, v8, a3, a4);
    while ( *(_QWORD *)(a2 + 64) );
    v16 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v16 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v19 = *(_DWORD *)(v16 + 24);
        *(_DWORD *)(v16 + 24) = v19 + 1;
        if ( v19 == -1 )
          goto LABEL_13;
      }
    }
  }
  v9 = (unsigned __int8)*(_DWORD *)(a3 + 512);
  v10 = (unsigned __int8)*(_DWORD *)(a2 + 512);
  if ( v9 != v10 && (v9 == 3 || v10 == 3 || v9 < v10) )
  {
    v20 = KeGetCurrentPrcb();
    v32 = 0;
    v21 = *((_QWORD *)v20 + 4375);
    if ( v21 )
    {
      if ( *((_BYTE *)v20 + 32) <= 1u )
      {
        v22 = *(_DWORD *)(v21 + 24);
        *(_DWORD *)(v21 + 24) = v22 + 1;
        if ( v22 == -1 )
LABEL_26:
          sub_140418E4C(v20);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      v23 = *((_QWORD *)v20 + 4375);
      if ( v23 )
      {
        if ( *((_BYTE *)v20 + 32) <= 1u )
        {
          v24 = *(_DWORD *)(v23 + 24) - 1;
          *(_DWORD *)(v23 + 24) = v24;
          if ( !v24 )
            sub_140418E4C(v20);
        }
      }
      do
        sub_1402F32E0(&v32, v8, a3, a4);
      while ( *(_QWORD *)(a1 + 48) );
      v25 = *((_QWORD *)v20 + 4375);
      if ( v25 )
      {
        if ( *((_BYTE *)v20 + 32) <= 1u )
        {
          v26 = *(_DWORD *)(v25 + 24);
          *(_DWORD *)(v25 + 24) = v26 + 1;
          if ( v26 == -1 )
            goto LABEL_26;
        }
      }
    }
    sub_14045AB80(a2, v9);
    if ( !*(_QWORD *)(a1 + 16) && dword_140D068FC )
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) ^= (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) ^ *(_BYTE *)(a2 + 512)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v27 = KeGetCurrentPrcb();
    v28 = *((_QWORD *)v27 + 4375);
    if ( v28 )
    {
      if ( *((_BYTE *)v27 + 32) <= 1u )
      {
        v29 = *(_DWORD *)(v28 + 24) - 1;
        *(_DWORD *)(v28 + 24) = v29;
        if ( !v29 )
          sub_140418E4C(v27);
      }
    }
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = *((_QWORD *)v11 + 4375);
  if ( v12 )
  {
    if ( *((_BYTE *)v11 + 32) <= 1u )
    {
      v30 = *(_DWORD *)(v12 + 24) - 1;
      *(_DWORD *)(v12 + 24) = v30;
      if ( !v30 )
        sub_140418E4C(v11);
    }
  }
  _disable();
  v13 = (unsigned __int8)*(_DWORD *)(a1 + 236);
  result = *(unsigned int *)(a2 + 512);
  if ( (unsigned __int8)result != v13 && ((unsigned __int8)result == 3 || v13 == 3 || (unsigned __int8)result < v13) )
    result = sub_14045AAC0(a1, a2);
  _enable();
  return result;
}
