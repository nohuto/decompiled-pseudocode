/*
 * XREFs of sub_14038E4BC @ 0x14038E4BC
 * Callers:
 *     sub_14038DF70 @ 0x14038DF70 (sub_14038DF70.c)
 *     sub_1405970A0 @ 0x1405970A0 (sub_1405970A0.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 * Callees:
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14038E4BC(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // r14
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r9
  __int64 result; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  __int64 v21; // r8
  int v22; // eax
  int v23; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v5 = sub_14038E608(a1, a2, 0x2000LL);
    v9 = v5;
    if ( v5 == -1 )
      break;
    v10 = 48 * v5 - 0x220000000000LL;
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v23, v6, v7, v8);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
    LOBYTE(v11) = sub_140268620(v10);
    sub_1402C6EB0(v9, v11 != 0 ? 1026 : 2);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = *((_QWORD *)v20 + 4375);
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v18 )
          sub_140418E4C(v20);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
