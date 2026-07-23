/*
 * XREFs of sub_1402F6750 @ 0x1402F6750
 * Callers:
 *     sub_1402234C0 @ 0x1402234C0 (sub_1402234C0.c)
 *     sub_1402F63D0 @ 0x1402F63D0 (sub_1402F63D0.c)
 *     sub_14035AB2C @ 0x14035AB2C (sub_14035AB2C.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F8020 @ 0x1402F8020 (sub_1402F8020.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 *     sub_1407D57AC @ 0x1407D57AC (sub_1407D57AC.c)
 */

__int64 __fastcall sub_1402F6750(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v12; // r14
  __int64 v13; // rcx
  int v16; // edx
  __int64 *v17; // rcx
  unsigned __int8 v18; // al
  bool v19; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( a4 || (LOBYTE(a1) = 1, (v5 = sub_1407D57AC(a1, 0LL)) != 0) )
  {
    *(_QWORD *)(v5 + 32) = v6;
    v9 = (_QWORD *)(v8 + 8);
    *(_QWORD *)(v5 + 24) = v7;
    *(_DWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 48) = 0LL;
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
    v12 = *((_QWORD *)CurrentPrcb + 1);
    if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
    {
      v18 = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
      sub_14062DA60(v12, v5, v18);
    }
    v13 = *(_QWORD *)(v12 + 1552);
    if ( !v13 )
      v13 = v12;
    v19 = a5 && (unsigned __int8)sub_1402F8020(v13);
    sub_1402F3290((volatile signed __int32 *)v8, a2, a3, a4);
    if ( (_QWORD *)*v9 == v9
      || *(_DWORD *)(v8 + 40) >= *(_DWORD *)(v8 + 44) && !v19
      || *(_QWORD *)(v12 + 232) == v8 && *(_BYTE *)(v12 + 643) == 15
      || !(unsigned __int8)sub_1402F6A70(CurrentPrcb, v8, v5) )
    {
      v16 = *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v8 + 4) = v16 + 1;
      v17 = *(__int64 **)(v8 + 32);
      if ( *v17 != v8 + 24 )
        __fastfail(3u);
      *(_QWORD *)v5 = v8 + 24;
      *(_QWORD *)(v5 + 8) = v17;
      *v17 = v5;
      *(_QWORD *)(v8 + 32) = v5;
      if ( !v16 && (_QWORD *)*v9 != v9 )
        sub_14035B550(CurrentPrcb, v8);
    }
    else
    {
      *(_QWORD *)v5 = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
    sub_1402B0820((__int64)CurrentPrcb, a5 != 0 ? 3 : 0, 1, 0, CurrentIrql);
    return 1;
  }
  else
  {
    return 0;
  }
}
