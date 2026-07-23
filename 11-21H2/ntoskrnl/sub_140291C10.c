/*
 * XREFs of sub_140291C10 @ 0x140291C10
 * Callers:
 *     sub_140428B10 @ 0x140428B10 (sub_140428B10.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210664 @ 0x140210664 (sub_140210664.c)
 *     sub_140210988 @ 0x140210988 (sub_140210988.c)
 *     sub_140291E98 @ 0x140291E98 (sub_140291E98.c)
 *     sub_140291EB8 @ 0x140291EB8 (sub_140291EB8.c)
 *     sub_1402EDFE8 @ 0x1402EDFE8 (sub_1402EDFE8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

char __fastcall sub_140291C10(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rbp
  struct _KPRCB *v10; // rcx
  __int64 v11; // rdx
  _BYTE *v13; // r14
  char v14; // cl
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // edx
  char v28; // al
  char v29; // al
  int v30; // edx
  int v31; // eax
  char v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)sub_140291E98(a1, a2) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v33 = 0;
  v32 = 0;
  while ( 1 )
  {
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v24 = *(_DWORD *)(v6 + 24);
        *(_DWORD *)(v6 + 24) = v24 + 1;
        if ( v24 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v20 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v20 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v25 = *(_DWORD *)(v20 + 24) - 1;
        *(_DWORD *)(v20 + 24) = v25;
        if ( !v25 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v33);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v7 == *(_QWORD *)(a2 + 24)
    || !(unsigned __int8)sub_140291EB8(*(_QWORD *)(a1 + 576), a2)
    || ((v9 = *(_QWORD *)(v7 + 104)) == 0
     || (v9 += *(unsigned int *)(a2 + 216)) == 0
     || (v5 = sub_1402103E0(v7, v9, v8, 1, (bool *)&v32)) == 0)
    && *(_BYTE *)(v7 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v10 = KeGetCurrentPrcb();
    v11 = *((_QWORD *)v10 + 4375);
    if ( v11 && *((_BYTE *)v10 + 32) <= 1u )
    {
      v31 = *(_DWORD *)(v11 + 24) - 1;
      *(_DWORD *)(v11 + 24) = v31;
      if ( !v31 )
        sub_140418E4C(v10);
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  v13 = *(_BYTE **)(a2 + 56);
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || *(char *)(a1 + 195) >= 16
    || !*(_QWORD *)(a1 + 104)
    || (v21 = *(_QWORD *)(a1 + 104)) == 0
    || (v22 = *(unsigned int *)(a2 + 216) + v21) == 0
    || (v23 = sub_1402103E0(a1, v22, v8, 0, 0LL), v14 = 1, !v23) )
  {
    v14 = *(_BYTE *)(a1 + 195);
  }
  v15 = v14 & 0x7F | (*(_BYTE *)(a1 + 119) << 7);
  *v13 = v15;
  v16 = *(_QWORD *)(a2 + 35000);
  if ( v16 )
  {
    if ( a1 == *(_QWORD *)(a2 + 24) )
      v26 = (unsigned int)dword_140D0504C;
    else
      v26 = v15 & 0x7F;
    sub_14045B7FC(v16, v26, 0LL);
  }
  v17 = *(_QWORD *)(a2 + 56);
  if ( dword_140D068FC )
  {
    v27 = *(_DWORD *)(a1 + 80);
    v28 = (*(_BYTE *)(v17 + 64) ^ *(_BYTE *)(a1 + 512)) & 7 ^ *(_BYTE *)(v17 + 64);
    v29 = (v28 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v28;
    if ( v27 <= *(_DWORD *)(a1 + 84) )
      v27 = *(_DWORD *)(a1 + 84);
    *(_BYTE *)(v17 + 64) = (v27 >= dword_140D05308 ? 0x40 : 0) | v29 & 0xBF;
  }
  *(_BYTE *)(v7 + 388) = 1;
  if ( v5 )
    sub_140210988(a2, v9, v7, 1);
  else
    sub_140210664(a2, v7, *(char *)(v7 + 195), 1, v32);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = *((_QWORD *)v18 + 4375);
  if ( v19 )
  {
    if ( *((_BYTE *)v18 + 32) <= 1u )
    {
      v30 = *(_DWORD *)(v19 + 24) - 1;
      *(_DWORD *)(v19 + 24) = v30;
      if ( !v30 )
        sub_140418E4C(v18);
    }
  }
  sub_1402EDFE8(a2, a1, 0LL);
  return 1;
}
