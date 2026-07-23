/*
 * XREFs of sub_140310810 @ 0x140310810
 * Callers:
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140310810(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *v10; // rbp
  __int64 v11; // rcx
  struct _KPRCB *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  bool v23; // zf
  int v24; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 )
  {
    if ( a2 )
      return 0;
  }
  else if ( !a2 || *(_QWORD *)(a1 + 104) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  sub_140345C80(CurrentPrcb, a1, 0LL, 0LL);
  sub_140345B70(CurrentPrcb, a1, 0LL);
  _enable();
  v10 = KeGetCurrentPrcb();
  v24 = 0;
  v11 = *((_QWORD *)v10 + 4375);
  if ( v11 )
  {
    if ( *((_BYTE *)v10 + 32) <= 1u )
    {
      v17 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 24) = v17 + 1;
      if ( v17 == -1 )
LABEL_24:
        sub_140418E4C(v10);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
  {
    v15 = *((_QWORD *)v10 + 4375);
    if ( v15 )
    {
      if ( *((_BYTE *)v10 + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v15 + 24) - 1;
        *(_DWORD *)(v15 + 24) = v18;
        if ( !v18 )
          sub_140418E4C(v10);
      }
    }
    do
      sub_1402F32E0(&v24, v7, v8, v9);
    while ( *((_QWORD *)CurrentPrcb + 6) );
    v16 = *((_QWORD *)v10 + 4375);
    if ( v16 )
    {
      if ( *((_BYTE *)v10 + 32) <= 1u )
      {
        v19 = *(_DWORD *)(v16 + 24);
        *(_DWORD *)(v16 + 24) = v19 + 1;
        if ( v19 == -1 )
          goto LABEL_24;
      }
    }
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 9u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
  }
  _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
  v12 = KeGetCurrentPrcb();
  v13 = *((_QWORD *)v12 + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)v12 + 32) <= 1u )
    {
      v20 = *(_DWORD *)(v13 + 24) - 1;
      *(_DWORD *)(v13 + 24) = v20;
      if ( !v20 )
        sub_140418E4C(v12);
    }
  }
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
  {
    v21 = KeGetCurrentPrcb();
    v22 = *((_QWORD *)v21 + 4375);
    v23 = (*(_DWORD *)(v22 + 20) & 0xFFFF0001) == 0;
    *(_DWORD *)(v22 + 20) &= 0xFFFF0001;
    if ( v23 )
      sub_140418E4C(v21);
  }
  __writecr8(0LL);
  return 1;
}
