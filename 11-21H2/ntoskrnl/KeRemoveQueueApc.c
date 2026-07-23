/*
 * XREFs of KeRemoveQueueApc @ 0x14024EC10
 * Callers:
 *     sub_14024E07C @ 0x14024E07C (sub_14024E07C.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 *     sub_1406330FC @ 0x1406330FC (sub_1406330FC.c)
 *     sub_140635C4C @ 0x140635C4C (sub_140635C4C.c)
 *     sub_14063DFAC @ 0x14063DFAC (sub_14063DFAC.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14024ECFC @ 0x14024ECFC (sub_14024ECFC.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  char v6; // bl
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  while ( 1 )
  {
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v9 + 1;
        if ( v9 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
      break;
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v11;
        if ( !v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v17);
    while ( *(_QWORD *)(v1 + 64) );
  }
  v6 = sub_14024ECFC(a1);
  sub_140224100(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = *((_QWORD *)v13 + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(v13);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
