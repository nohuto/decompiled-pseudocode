/*
 * XREFs of sub_140294574 @ 0x140294574
 * Callers:
 *     sub_140293184 @ 0x140293184 (sub_140293184.c)
 *     sub_14029A6E0 @ 0x14029A6E0 (sub_14029A6E0.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062E258 @ 0x14062E258 (sub_14062E258.c)
 */

__int64 __fastcall sub_140294574(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  char v9; // si
  __int64 v10; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+48h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(v12 + 20);
    *(_DWORD *)(v12 + 20) = a3;
  }
  if ( (WORD2(xmmword_140D06900) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    sub_14062E258(a1, a2, a3);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( 1 )
  {
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v6 + 24);
        *(_DWORD *)(v6 + 24) = v13 + 1;
        if ( v13 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v14 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v14 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v15 = *(_DWORD *)(v14 + 24) - 1;
        *(_DWORD *)(v14 + 24) = v15;
        if ( !v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  sub_1402F69A0(a1);
  sub_140224100(v7);
  v8 = (_QWORD *)(a1 + 216);
  v9 = 0;
  *v8 = 0LL;
  v17 = 0LL;
  do
  {
    sub_1403405E0(CurrentPrcb, v8 - 27, &v17);
    v8 = v17;
    ++v9;
    if ( v17 )
      v17 = (_QWORD *)*v17;
    if ( (v9 & 0xF) == 0 )
      sub_140340300((char *)CurrentPrcb + 12760);
  }
  while ( v8 );
  sub_140340300((char *)CurrentPrcb + 12760);
  LOBYTE(v10) = CurrentIrql;
  return sub_140294824(CurrentPrcb, v10);
}
