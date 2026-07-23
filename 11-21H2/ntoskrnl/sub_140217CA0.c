/*
 * XREFs of sub_140217CA0 @ 0x140217CA0
 * Callers:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     sub_140217B04 @ 0x140217B04 (sub_140217B04.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140217CA0(__int64 a1, char a2, int a3, char a4)
{
  unsigned __int8 v4; // r15
  __int64 v6; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // rcx
  char v10; // bp
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  __int64 v20; // rdx
  bool v21; // zf
  unsigned __int8 CurrentIrql; // cl
  __int64 v23; // r9
  unsigned int v24; // edi
  int v25; // eax
  int v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+70h] [rbp+18h]

  v27 = a3;
  v4 = *(_BYTE *)(a1 + 390);
  v6 = a2;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = v6;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v26 = 0;
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v16 = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 24) = v16 + 1;
        if ( v16 == -1 )
LABEL_31:
          sub_140418E4C(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v14 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v14 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v17 = *(_DWORD *)(v14 + 24) - 1;
          *(_DWORD *)(v14 + 24) = v17;
          if ( !v17 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v26);
      while ( *(_QWORD *)(a1 + 64) );
      v15 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v15 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v18 = *(_DWORD *)(v15 + 24);
          *(_DWORD *)(v15 + 24) = v18 + 1;
          if ( v18 == -1 )
            goto LABEL_31;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    sub_140224100(a1);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = (*(_DWORD *)(v20 + 20) & 0xFFFF0003) == 0;
        *(_DWORD *)(v20 + 20) &= 0xFFFF0003;
        if ( v21 )
          sub_140418E4C(v19);
      }
    }
    __writecr8(1uLL);
    sub_1402F1DC0(0LL, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v23 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 390) = 0;
  }
  v10 = v27;
  if ( !a4 )
  {
    if ( (*(_BYTE *)(a1 + 194) & 2) == 0 || !(_BYTE)v6 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v6 + a1 + 114) )
  {
    *(_BYTE *)(v6 + a1 + 114) = 0;
    v24 = 257;
    goto LABEL_18;
  }
  if ( (_BYTE)v6 && *(_QWORD *)(a1 + 168) != a1 + 168 )
  {
    *(_BYTE *)(a1 + 194) |= 2u;
LABEL_17:
    v24 = 192;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 114) )
  {
    *(_BYTE *)(a1 + 114) = 0;
    v24 = 257;
LABEL_18:
    sub_140224100(a1);
    sub_140294824(KeGetCurrentPrcb(), v4);
    return v24;
  }
LABEL_9:
  *(_BYTE *)(a1 + 388) = 5;
  *(_BYTE *)(a1 + 643) = v10;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = *((_QWORD *)v11 + 4375);
  if ( v12 && *((_BYTE *)v11 + 32) <= 1u )
  {
    v25 = *(_DWORD *)(v12 + 24) - 1;
    *(_DWORD *)(v12 + 24) = v25;
    if ( !v25 )
      sub_140418E4C(v11);
  }
  return 0LL;
}
