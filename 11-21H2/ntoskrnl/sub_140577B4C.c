/*
 * XREFs of sub_140577B4C @ 0x140577B4C
 * Callers:
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x140385140 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405779D0 @ 0x1405779D0 (sub_1405779D0.c)
 */

char __fastcall sub_140577B4C(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v8 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v8 + 1;
        if ( v8 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      break;
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v9 + 24) - 1;
        *(_DWORD *)(v9 + 24) = v10;
        if ( !v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v12, a2, a3, a4);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    sub_1405779D0(BugCheckParameter1, (__int64)&v13);
  sub_140224100(BugCheckParameter1);
  return sub_140344800((__int64)KeGetCurrentPrcb(), &v13, CurrentIrql);
}
