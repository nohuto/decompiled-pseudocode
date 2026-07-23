/*
 * XREFs of IoSetIoCompletionEx @ 0x14022A180
 * Callers:
 *     sub_1406A1DE0 @ 0x1406A1DE0 (sub_1406A1DE0.c)
 *     sub_1406A2200 @ 0x1406A2200 (sub_1406A2200.c)
 *     sub_1406A22D0 @ 0x1406A22D0 (sub_1406A22D0.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 *     sub_1407D57AC @ 0x1407D57AC (sub_1407D57AC.c)
 */

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v15; // r13
  unsigned int v16; // r14d
  int v17; // edx
  __int64 *v18; // rcx
  __int64 v20; // r9
  unsigned __int8 v21; // al

  v7 = a7;
  v11 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (v7 = sub_1407D57AC(a1, a6)) != 0) )
  {
    *(_DWORD *)(v7 + 40) = a4;
    v12 = (_QWORD *)(v11 + 8);
    *(_QWORD *)(v7 + 48) = a5;
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = a3;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = *((_QWORD *)CurrentPrcb + 1);
    if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
    {
      v21 = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
      sub_14062DA60(v15, v7, v21);
    }
    sub_1402F3290(v11);
    v16 = 0;
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
      || *(_QWORD *)(v15 + 232) == v11 && *(_BYTE *)(v15 + 643) == 15
      || !(unsigned __int8)sub_1402F6A70(CurrentPrcb, v11, v7) )
    {
      v17 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v11 + 4) = v17 + 1;
      v18 = *(__int64 **)(v11 + 32);
      if ( *v18 != v11 + 24 )
        __fastfail(3u);
      *(_QWORD *)v7 = v11 + 24;
      *(_QWORD *)(v7 + 8) = v18;
      *v18 = v7;
      *(_QWORD *)(v11 + 32) = v7;
      if ( !v17 && (_QWORD *)*v12 != v12 )
        sub_14035B550(CurrentPrcb, v11);
    }
    else
    {
      *(_QWORD *)v7 = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    sub_1402B0820((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v16;
}
