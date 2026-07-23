/*
 * XREFs of sub_14033DFC0 @ 0x14033DFC0
 * Callers:
 *     sub_1402394EC @ 0x1402394EC (sub_1402394EC.c)
 *     sub_14027E474 @ 0x14027E474 (sub_14027E474.c)
 *     sub_14033DC30 @ 0x14033DC30 (sub_14033DC30.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     sub_14033E0D4 @ 0x14033E0D4 (sub_14033E0D4.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

__int64 __fastcall sub_14033DFC0(_QWORD *a1)
{
  _DWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // rcx
  signed __int32 v6; // ett
  __int64 v7; // rdi
  struct _KPRCB *v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_140461B20(v2, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v13 + 1;
        if ( v13 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    _m_prefetchw(v2);
    v6 = *v2 & 0x7FFFFFFF;
    if ( v6 != _InterlockedCompareExchange(v2, v6 + 1, v6) )
    {
      v11 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v11 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v14 = *(_DWORD *)(v11 + 24) - 1;
          *(_DWORD *)(v11 + 24) = v14;
          if ( !v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      sub_140366A20(v2, CurrentIrql);
    }
  }
  v7 = sub_14033E0D4(a1);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14063D8E0(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  v8 = KeGetCurrentPrcb();
  v9 = *((_QWORD *)v8 + 4375);
  if ( v9 )
  {
    if ( *((_BYTE *)v8 + 32) <= 1u )
    {
      v15 = *(_DWORD *)(v9 + 24) - 1;
      *(_DWORD *)(v9 + 24) = v15;
      if ( !v15 )
        sub_140418E4C(v8);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = *((_QWORD *)v17 + 4375);
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v7;
}
