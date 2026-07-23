/*
 * XREFs of sub_1405725CC @ 0x1405725CC
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140293090 @ 0x140293090 (sub_140293090.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405725CC(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  int v23; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+60h] [rbp+18h] BYREF

  v24 = 0;
  v4 = 32;
  v8 = sub_140293090(a1, &v24);
  if ( v24 <= 0x20 )
    v4 = v24;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v5 = (-1LL << (CurrentIrql + 1)) & 4;
    v6 = (unsigned int)v5 | *(_DWORD *)(v7 + 20);
    *(_DWORD *)(v7 + 20) = v6;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  while ( 1 )
  {
    v11 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v11 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v12 = *(_DWORD *)(v11 + 24);
        *(_DWORD *)(v11 + 24) = v12 + 1;
        if ( v12 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v13 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v14 = *(_DWORD *)(v13 + 24) - 1;
        *(_DWORD *)(v13 + 24) = v14;
        if ( !v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v23, v5, v6, v7);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( v4 )
  {
    v15 = v8 - (_QWORD)a2;
    v16 = v4;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v15);
      ++a2;
      --v16;
    }
    while ( v16 );
  }
  sub_140224100(a1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C((__int64)v18);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v24;
}
