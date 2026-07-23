/*
 * XREFs of sub_14037ADB8 @ 0x14037ADB8
 * Callers:
 *     sub_14037AC18 @ 0x14037AC18 (sub_14037AC18.c)
 *     sub_14037C6BC @ 0x14037C6BC (sub_14037C6BC.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14037AF04 @ 0x14037AF04 (sub_14037AF04.c)
 *     sub_14037AF3C @ 0x14037AF3C (sub_14037AF3C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B657C @ 0x1405B657C (sub_1405B657C.c)
 */

LONG __fastcall sub_14037ADB8(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _SLIST_ENTRY *v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  if ( (*a2 & 7) != 0 )
  {
    if ( (*a2 & 7) == 2 )
      *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_QWORD *)(a4 + 8);
  }
  else
  {
    *(_QWORD *)(a4 + 8) &= 1uLL;
  }
  if ( a3 < 0 )
    return KeSetEvent((PRKEVENT)a3, 1, 0);
  v4 = (_SLIST_ENTRY *)(a3 | 0x8000000000000000uLL);
  v5 = *(_DWORD *)((a3 | 0x8000000000000000uLL) + 0x10);
  v6 = *(_QWORD *)(*(_QWORD *)((a3 | 0x8000000000000000uLL) + 0x38) + 192LL);
  if ( v5 < 0 )
  {
    sub_1405B657C((unsigned int)v5);
    v8 = 48 * (__int64)v4[7].Next - 0x220000000000LL;
    v9 = (unsigned __int8)sub_1402F2700(v8);
    *(_BYTE *)(v8 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    *(_DWORD *)(v6 + 1188) = 32;
  }
  sub_14037AF3C();
  return sub_14037AF04(v4);
}
