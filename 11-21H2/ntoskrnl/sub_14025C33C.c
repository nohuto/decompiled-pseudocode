/*
 * XREFs of sub_14025C33C @ 0x14025C33C
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025C33C(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  while ( 1 )
  {
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v6 + 24);
        *(_DWORD *)(v6 + 24) = v9 + 1;
        if ( v9 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v11;
        if ( !v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v17);
    while ( *(_QWORD *)(a1 + 64) );
  }
  sub_140300030(a2, *(unsigned __int16 *)(a2 + 2), *(_QWORD *)(a1 + 552));
  sub_140224100(a1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = *((_QWORD *)v13 + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(v13);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
