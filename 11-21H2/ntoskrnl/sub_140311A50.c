/*
 * XREFs of sub_140311A50 @ 0x140311A50
 * Callers:
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     sub_140311870 @ 0x140311870 (sub_140311870.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F8020 @ 0x1402F8020 (sub_1402F8020.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

__int64 __fastcall sub_140311A50(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  _QWORD *v5; // rsi
  int v6; // r12d
  BOOL v7; // ebp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  bool v13; // r13
  __int64 v14; // r9
  unsigned int v15; // r15d
  _QWORD *v16; // rdi
  __int64 v17; // r13
  unsigned int v19; // eax
  int v20; // edx
  _QWORD *v21; // rcx
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  unsigned __int8 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a3;
  v7 = (_BYTE)a4 != 0;
  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a3 = (unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = (__int64)CurrentPrcb;
  v11 = *((_QWORD *)CurrentPrcb + 1);
  if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
  {
    v22 = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
    sub_14062DA60(v11, v23, v22);
  }
  if ( v6 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    v6 = 0;
  v12 = *(_QWORD *)(v11 + 1552);
  if ( !v12 )
    v12 = v11;
  v13 = v7 && sub_1402F8020(v12);
  sub_1402F3290((volatile signed __int32 *)a1, (__int64)a2, a3, a4);
  v15 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5 )
  {
    v16 = a2;
    v19 = v15 + 1;
    v17 = v25;
    v20 = *(_DWORD *)(a1 + 4);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v13
      || *(_QWORD *)(v11 + 232) == a1 && *(_BYTE *)(v11 + 643) == 15 )
    {
      v17 = v25;
      v16 = a2;
    }
    else
    {
      v16 = a2;
      v17 = v25;
      if ( sub_1402F6A70(v25, a1, (__int64)a2, v14) )
      {
        *a2 = 0LL;
        goto LABEL_14;
      }
    }
    v20 = *(_DWORD *)(a1 + 4);
    v19 = v20 + 1;
  }
  *(_DWORD *)(a1 + 4) = v19;
  v21 = *(_QWORD **)(a1 + 32);
  if ( *v21 != a1 + 24 )
    __fastfail(3u);
  *v16 = a1 + 24;
  v16[1] = v21;
  *v21 = v16;
  *(_QWORD *)(a1 + 32) = v16;
  if ( !v20 && (_QWORD *)*v5 != v5 )
    sub_14035B550(v17, a1);
LABEL_14:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v7 )
    v4 = 3;
  sub_1402B0820(v17, v4, 1, v6, v24);
  return v15;
}
