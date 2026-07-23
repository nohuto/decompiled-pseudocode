/*
 * XREFs of sub_14035A850 @ 0x14035A850
 * Callers:
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 *     sub_1407D5700 @ 0x1407D5700 (sub_1407D5700.c)
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

__int64 __fastcall sub_14035A850(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rdi
  unsigned int v13; // esi
  _QWORD *v14; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v17; // r14
  __int64 v18; // rcx
  bool v19; // r12
  __int64 v20; // r9
  char v21; // dl
  int v23; // edx
  __int64 *v24; // rcx
  unsigned __int8 v25; // al
  unsigned __int8 v26; // [rsp+90h] [rbp+38h]

  v8 = a7;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (v8 = sub_1407D57AC(a1, a6)) != 0) )
  {
    *(_DWORD *)(v8 + 40) = v9;
    v13 = 0;
    *(_QWORD *)(v8 + 48) = a5;
    *(_QWORD *)(v8 + 32) = v10;
    *(_QWORD *)(v8 + 24) = v11;
    v14 = (_QWORD *)(v12 + 8);
    CurrentIrql = KeGetCurrentIrql();
    v26 = CurrentIrql;
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = *((_QWORD *)CurrentPrcb + 1);
    if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
    {
      v25 = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
      sub_14062DA60(v17, v8, v25);
    }
    v18 = v17;
    if ( *(_QWORD *)(v17 + 1552) )
      v18 = *(_QWORD *)(v17 + 1552);
    v19 = a8 && sub_1402F8020(v18);
    sub_1402F3290((volatile signed __int32 *)v12, a2, a3, a4);
    if ( (_QWORD *)*v14 == v14
      || *(_DWORD *)(v12 + 40) >= *(_DWORD *)(v12 + 44) && !v19
      || *(_QWORD *)(v17 + 232) == v12 && *(_BYTE *)(v17 + 643) == 15
      || !sub_1402F6A70((__int64)CurrentPrcb, v12, v8, v20) )
    {
      v23 = *(_DWORD *)(v12 + 4);
      *(_DWORD *)(v12 + 4) = v23 + 1;
      v24 = *(__int64 **)(v12 + 32);
      if ( *v24 != v12 + 24 )
        __fastfail(3u);
      *(_QWORD *)v8 = v12 + 24;
      *(_QWORD *)(v8 + 8) = v24;
      *v24 = v8;
      *(_QWORD *)(v12 + 32) = v8;
      if ( !v23 && (_QWORD *)*v14 != v14 )
        sub_14035B550(CurrentPrcb, v12);
    }
    else
    {
      *(_QWORD *)v8 = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
    v21 = 0;
    if ( a8 )
      v21 = 3;
    sub_1402B0820((__int64)CurrentPrcb, v21, 1, 0, v26);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
