/*
 * XREFs of sub_14056B234 @ 0x14056B234
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14056B234(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 result; // rax
  int v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
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
  v21 = 0;
  while ( 1 )
  {
    v8 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(v8 + 24) = v9 + 1;
        if ( v9 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
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
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v21, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(v4 + 8) = *(_WORD *)(a1 + 584);
  v12 = *(_WORD **)(a1 + 576);
  v13 = *(unsigned __int16 *)(a1 + 584);
  if ( (unsigned __int16)v13 >= *v12 )
    v14 = 0LL;
  else
    v14 = *(_QWORD *)&v12[4 * v13 + 4];
  *(_QWORD *)v4 = v14;
  sub_140224100(a1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
