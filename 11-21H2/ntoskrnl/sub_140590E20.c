/*
 * XREFs of sub_140590E20 @ 0x140590E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140590A18 @ 0x140590A18 (sub_140590A18.c)
 *     sub_140591040 @ 0x140591040 (sub_140591040.c)
 */

ULONG_PTR __fastcall sub_140590E20(ULONG_PTR Argument, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int32 v14; // eax
  unsigned int v15; // ebx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  ULONG_PTR result; // rax
  signed __int32 v22; // eax
  unsigned int v23; // ebx
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(Argument + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  v7 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 72));
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v25 = 0;
    while ( (*(_DWORD *)(Argument + 72) & 0x80000000) != v8 )
      sub_1402F32E0(&v25, a2, a3, a4);
    v22 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 72));
    v23 = ~v22 & 0x80000000;
    if ( (v22 & 0x7FFFFFFF) != 0 )
    {
      v26 = 0;
      while ( (*(_DWORD *)(Argument + 72) & 0x80000000) != v23 )
        sub_1402F32E0(&v26, a2, a3, a4);
    }
    else
    {
      *(_DWORD *)(Argument + 72) = v23 | *(_DWORD *)(Argument + 76);
    }
  }
  else
  {
    *(_DWORD *)(Argument + 72) = v8 | *(_DWORD *)(Argument + 76);
    v9 = 48LL * *(_QWORD *)Argument - 0x220000000000LL;
    v10 = 48LL * *(_QWORD *)(Argument + 8) - 0x220000000000LL;
    sub_140590A18(v10, v9, *(_QWORD *)(Argument + 16));
    sub_1403AD304(v4, 0);
    sub_140591040(v10, v9);
    *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v9 + 34) &= 0xC7u;
    *(_BYTE *)(v9 + 35) &= ~0x20u;
    v14 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 72));
    v15 = ~v14 & 0x80000000;
    if ( (v14 & 0x7FFFFFFF) != 0 )
    {
      v24 = 0;
      while ( (*(_DWORD *)(Argument + 72) & 0x80000000) != v15 )
        sub_1402F32E0(&v24, v11, v12, v13);
    }
    else
    {
      *(_DWORD *)(Argument + 72) = v15 | *(_DWORD *)(Argument + 76);
    }
  }
  sub_1403AD304(v4, 0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
