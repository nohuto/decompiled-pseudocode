/*
 * XREFs of sub_14035CE74 @ 0x14035CE74
 * Callers:
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_14035CA04 @ 0x14035CA04 (sub_14035CA04.c)
 *     sub_1403861B4 @ 0x1403861B4 (sub_1403861B4.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14035D00C @ 0x14035D00C (sub_14035D00C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

__int64 __fastcall sub_14035CE74(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r13
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  bool v12; // bl
  int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  int v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF

  v25 = 0;
  v4 = (_DWORD *)a3;
  v5 = a2;
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
  v26 = 0;
  while ( 1 )
  {
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 24) = v18 + 1;
        if ( v18 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v19 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v19;
        if ( !v19 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v26, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(_DWORD *)(a1 + 588);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = (*(_DWORD *)(a1 + 116) & 8) != 0 && (struct _KTHREAD *)a1 == KeGetCurrentThread();
  LOBYTE(a3) = v12;
  v13 = sub_14035D00C(a1, v5, a3, &v25);
  if ( v13 >= 0 && !v12 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  v14 = *(_DWORD *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  sub_140224100(a1);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
  {
    sub_14062DAE4(a1, 1350LL, v10, v14);
    if ( (xmmword_140D06910 & 0x8000000) != 0 )
      sub_14062DAE4(a1, 1351LL, v11, v15);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = *((_QWORD *)v21 + 4375);
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v24 )
          sub_140418E4C(v21);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v4 )
    *v4 = v25;
  return (unsigned int)v13;
}
