/*
 * XREFs of sub_1402F0D90 @ 0x1402F0D90
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D5324 @ 0x1402D5324 (sub_1402D5324.c)
 *     sub_1402F0B30 @ 0x1402F0B30 (sub_1402F0B30.c)
 *     sub_1403C6970 @ 0x1403C6970 (sub_1403C6970.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_140B2DEA8 @ 0x140B2DEA8 (sub_140B2DEA8.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F0AF8 @ 0x1402F0AF8 (sub_1402F0AF8.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

char __fastcall sub_1402F0D90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rcx
  __int64 v9; // r9
  _QWORD *v10; // r15
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v13; // r13
  int v14; // r8d
  _QWORD *v15; // rdx
  __int64 v16; // r8
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v23 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      sub_1402F32E0(&v23);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( *(int *)(a1 + 4) > 0 )
  {
    sub_1402F0AF8(a1);
    *(_BYTE *)(a3 + 17) = 5;
    v10 = (_QWORD *)(a2 + 8);
    *(_QWORD *)a3 = 0LL;
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v11 <= 0xFu )
    {
      v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v16 + 20) |= (-1 << (v11 + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = *((_QWORD *)CurrentPrcb + 1);
    if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
    {
      v17 = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
      sub_14062DA60(v13, a3, v17);
    }
    sub_1402F3290(a2);
    if ( (_QWORD *)*v10 == v10
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || *(_QWORD *)(v13 + 232) == a2 && *(_BYTE *)(v13 + 643) == 15
      || !(unsigned __int8)sub_1402F6A70(CurrentPrcb, a2, a3) )
    {
      v14 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v14 + 1;
      v15 = *(_QWORD **)(a2 + 32);
      if ( *v15 != a2 + 24 )
LABEL_26:
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v15;
      *v15 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v14 && (_QWORD *)*v10 != v10 )
        sub_14035B550(CurrentPrcb, a2);
    }
    else
    {
      *(_QWORD *)a3 = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    sub_1402B0820((__int64)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
    return 1;
  }
  v7 = *(_QWORD **)(a1 + 16);
  if ( *v7 != a1 + 8 )
    goto LABEL_26;
  *(_QWORD *)a3 = a1 + 8;
  *(_QWORD *)(a3 + 8) = v7;
  *v7 = a3;
  *(_QWORD *)(a1 + 16) = a3;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(v19);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0;
}
