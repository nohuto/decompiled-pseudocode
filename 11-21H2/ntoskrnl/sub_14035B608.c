/*
 * XREFs of sub_14035B608 @ 0x14035B608
 * Callers:
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 * Callees:
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

char __fastcall sub_14035B608(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // edx
  __int64 **v13; // rcx
  __int64 v14; // r8

  *a2 = 0LL;
  v4 = (_QWORD *)(a1 + 8);
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (__int64 *)((-1LL << (CurrentIrql + 1)) & 4);
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *((_QWORD *)CurrentPrcb + 1);
  if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
  {
    LOBYTE(v14) = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
    sub_14062DA60(v9, v5, v14);
  }
  sub_1402F3290((volatile signed __int32 *)a1, (__int64)a2, a3, a4);
  if ( (_QWORD *)*v4 == v4
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || *(_QWORD *)(v9 + 232) == a1 && *(_BYTE *)(v9 + 643) == 15
    || (LOBYTE(v11) = sub_1402F6A70((__int64)CurrentPrcb, a1, (__int64)v5, v10), !(_BYTE)v11) )
  {
    v12 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v12 + 1;
    v11 = a1 + 24;
    v13 = *(__int64 ***)(a1 + 32);
    if ( *v13 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *v5 = v11;
    v5[1] = (__int64)v13;
    *v13 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    if ( !v12 && (_QWORD *)*v4 != v4 )
      LOBYTE(v11) = sub_14035B550((__int64)CurrentPrcb, a1);
  }
  else
  {
    *v5 = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v11;
}
