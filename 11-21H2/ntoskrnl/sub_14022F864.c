/*
 * XREFs of sub_14022F864 @ 0x14022F864
 * Callers:
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_14038BFAC @ 0x14038BFAC (sub_14038BFAC.c)
 * Callees:
 *     sub_14022F670 @ 0x14022F670 (sub_14022F670.c)
 *     sub_14022F96C @ 0x14022F96C (sub_14022F96C.c)
 *     sub_14022F99C @ 0x14022F99C (sub_14022F99C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 */

__int64 __fastcall sub_14022F864(unsigned __int64 a1, _QWORD *a2, int *a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a1;
  if ( byte_140D06889 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a1 = (unsigned int)CurrentIrql + 1;
      v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LOBYTE(a1) = 1;
    *((_DWORD *)CurrentPrcb + 9252) = 2;
    *(_QWORD *)a3 = (unsigned int)sub_14056D050(a1);
    *a2 = *((unsigned int *)CurrentPrcb + 9251);
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
            sub_140418E4C(v18);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v7 = dword_140C2B7E4;
    v8 = (unsigned int)dword_140C2B1C8;
    *a2 = (unsigned int)dword_140C2B1C8;
    if ( v7 )
    {
      v12 = qword_140C2B7F8;
      if ( qword_140C2B7E8 >= v6 && qword_140C2B7E8 < (unsigned __int64)qword_140C2B7F8 )
        v12 = qword_140C2B7E8;
      v13 = sub_14022F670(v12, v6);
      *a2 = v13;
      sub_14042A5E0(1LL, v13, a3);
      v9 = *(_DWORD *)a2;
      v14 = *a3;
      dword_140C2B1C8 = *(_DWORD *)a2;
      dword_140D06938 = v14;
    }
    else
    {
      sub_14042A5E0(0LL, v8, a3);
      v9 = *(_DWORD *)a2;
    }
    *((_DWORD *)CurrentPrcb + 9252) = v7;
    *((_DWORD *)CurrentPrcb + 9251) = v9;
    *((_DWORD *)CurrentPrcb + 9250) = *a3;
    sub_14022F99C((_DWORD)CurrentPrcb, v6, v9, *a3, v7 == 1);
    LOBYTE(v10) = 1;
    return sub_14022F96C(v10);
  }
  return result;
}
