/*
 * XREFs of sub_140578EF0 @ 0x140578EF0
 * Callers:
 *     sub_140579004 @ 0x140579004 (sub_140579004.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140547AF4 @ 0x140547AF4 (sub_140547AF4.c)
 *     sub_140552B10 @ 0x140552B10 (sub_140552B10.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 */

char __fastcall sub_140578EF0(unsigned __int8 *a1, bool *a2)
{
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // r10
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+2Ch] [rbp-1Ch]
  int v12; // [rsp+40h] [rbp-8h]

  if ( !dword_140D0195C || dword_140D0195C >= 3 )
    return 0;
  if ( dword_140D0195C == 2 )
  {
    if ( !qword_140C2AAA8 )
      sub_140552B10();
    dword_140D0689C &= 0x2000u;
    v11 = 0LL;
    v9 = 1LL;
    v10 = 96;
    sub_140579B48(&v9);
  }
  sub_14042A5E0(a1, a2);
  v4 = v12;
  _disable();
  *a2 = (v4 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  *a1 = CurrentIrql;
  sub_140578BB4(0);
  if ( dword_140D0195C == 2 )
    sub_140547AF4(0LL, v7);
  return 1;
}
