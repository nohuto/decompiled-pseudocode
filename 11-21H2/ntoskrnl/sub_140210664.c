/*
 * XREFs of sub_140210664 @ 0x140210664
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_140291A94 @ 0x140291A94 (sub_140291A94.c)
 *     sub_140291C10 @ 0x140291C10 (sub_140291C10.c)
 *     sub_14035EF6C @ 0x14035EF6C (sub_14035EF6C.c)
 *     sub_1405737B4 @ 0x1405737B4 (sub_1405737B4.c)
 * Callees:
 *     sub_140210BE8 @ 0x140210BE8 (sub_140210BE8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140210664(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // r15
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  _QWORD *v30; // rdx
  int v31; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
  sub_140210BE8(a2);
  v9 = *(_QWORD *)(a1 + 34880);
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
    || !v9
    || ((v10 = *(_WORD **)(a2 + 576), v11 = *(unsigned __int8 *)(a1 + 208), (unsigned __int16)v11 >= *v10)
      ? (v12 = 0LL)
      : (v12 = *(_QWORD *)&v10[4 * v11 + 4]),
        (v9 & v12) != v9 || a5) )
  {
    v23 = (_QWORD *)(a2 + 216);
    v24 = (_QWORD *)(a1 + 16 * (v6 + 2036));
    if ( a4 )
    {
      v25 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) != v24 )
        goto LABEL_38;
      *v23 = v25;
      *(_QWORD *)(a2 + 224) = v24;
      *(_QWORD *)(v25 + 8) = v23;
      *v24 = v23;
      _bittestandset((signed __int32 *)(a1 + 32476), v6);
    }
    else
    {
      v30 = (_QWORD *)v24[1];
      if ( (_QWORD *)*v30 != v24 )
        goto LABEL_38;
      *v23 = v24;
      *(_QWORD *)(a2 + 224) = v30;
      *v30 = v23;
      v24[1] = v23;
    }
    v26 = *(_DWORD *)(a1 + 32472);
    ++*(_DWORD *)(a1 + 33140);
    *(_DWORD *)(a1 + 32472) = v26 | (1 << v6);
    result = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 1648) = result;
    *(_QWORD *)(a1 + 33144) += result;
    return result;
  }
  v13 = *(_QWORD *)(a1 + 34888);
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = (_QWORD *)(v13 + 16 * (v6 + 1));
  v31 = 0;
  while ( 1 )
  {
    v16 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v16 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v28 = *(_DWORD *)(v16 + 24);
        *(_DWORD *)(v16 + 24) = v28 + 1;
        if ( v28 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      break;
    v27 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v27 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v29 = *(_DWORD *)(v27 + 24) - 1;
        *(_DWORD *)(v27 + 24) = v29;
        if ( !v29 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v31);
    while ( *(_QWORD *)v13 );
  }
  v17 = (_QWORD *)(a2 + 216);
  if ( !a4 )
  {
    v22 = (_QWORD *)v15[1];
    if ( (_QWORD *)*v22 == v15 )
    {
      *v17 = v15;
      *(_QWORD *)(a2 + 224) = v22;
      *v22 = v17;
      v15[1] = v17;
      goto LABEL_15;
    }
LABEL_38:
    __fastfail(3u);
  }
  v18 = *v15;
  if ( *(_QWORD **)(*v15 + 8LL) != v15 )
    goto LABEL_38;
  *v17 = v18;
  *(_QWORD *)(a2 + 224) = v15;
  *(_QWORD *)(v18 + 8) = v17;
  *v15 = v17;
  _bittestandreset((signed __int32 *)(a1 + 32476), v6);
LABEL_15:
  *(_DWORD *)(v13 + 8) |= 1 << v6;
  *(_DWORD *)(a2 + 536) |= 0x80000000;
  ++*(_DWORD *)(v13 + 672);
  result = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 1648) = result;
  *(_QWORD *)(v13 + 680) += result;
  _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  v20 = KeGetCurrentPrcb();
  v21 = *((_QWORD *)v20 + 4375);
  if ( v21 && *((_BYTE *)v20 + 32) <= 1u )
  {
    result = (unsigned int)(*(_DWORD *)(v21 + 24) - 1);
    *(_DWORD *)(v21 + 24) = result;
    if ( !(_DWORD)result )
      return sub_140418E4C(v20);
  }
  return result;
}
