/*
 * XREFs of sub_14056C984 @ 0x14056C984
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_14030A6F0 @ 0x14030A6F0 (sub_14030A6F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 */

__int64 sub_14056C984()
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v1; // rdx
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // r9
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  struct _KPRCB *v9; // rbx
  int v10; // r14d
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER v18; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v18.QuadPart = 0LL;
  v1 = -1LL;
  v2 = -1LL;
  v17 = -1LL;
  if ( !dword_140D05038 )
  {
    v3 = KeQueryInterruptTimePrecise(&v18);
    v4 = sub_14030A6F0((__int64)CurrentPrcb, v3, 0, &v17);
    v1 = v17;
    v2 = v4;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v1 = v17;
    *(_DWORD *)(v6 + 20) |= (-1LL << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( v1 != -1LL )
    sub_14056CF48((_DWORD)CurrentPrcb, v1, 0, 0, 0, 0);
  if ( v2 != -1 )
    sub_14056CF48((_DWORD)CurrentPrcb, v2, 0, 1, 0, 0);
  v7 = 0LL;
  v8 = (char *)CurrentPrcb + 37028;
  do
  {
    if ( (*v8 & 3) == 1 )
    {
      sub_14056D050(0LL);
      goto LABEL_21;
    }
    ++v7;
    v8 += 16;
  }
  while ( v7 < 7 );
  v9 = KeGetCurrentPrcb();
  v10 = dword_140C2B1C0;
  if ( (*((_BYTE *)v9 + 34) & 1) != 0 )
  {
    sub_14042A5E0(v8, v7);
    *((_BYTE *)v9 + 34) &= ~1u;
    *((_BYTE *)v9 + 37128) = 0;
  }
  if ( *((_DWORD *)v9 + 9) == v10 )
    ++dword_140C2B148;
  if ( *((_BYTE *)v9 + 33) )
    *((_BYTE *)v9 + 33) = 0;
LABEL_21:
  *((_DWORD *)CurrentPrcb + 8104) = 1;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = *((_QWORD *)v12 + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)v12);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
