/*
 * XREFs of sub_140338D00 @ 0x140338D00
 * Callers:
 *     sub_1402302B0 @ 0x1402302B0 (sub_1402302B0.c)
 *     sub_14024DD20 @ 0x14024DD20 (sub_14024DD20.c)
 *     sub_1402C0900 @ 0x1402C0900 (sub_1402C0900.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_14038EB20 @ 0x14038EB20 (sub_14038EB20.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 *     sub_1405B130C @ 0x1405B130C (sub_1405B130C.c)
 *     sub_1405B350C @ 0x1405B350C (sub_1405B350C.c)
 *     sub_1405B3EB4 @ 0x1405B3EB4 (sub_1405B3EB4.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

void __fastcall sub_140338D00(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // rdx
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)(a2 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 24) = 0;
    }
    if ( *(_BYTE *)(a2 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 48) = 0;
    }
    if ( *(_BYTE *)(a2 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 72) = 0;
    }
    if ( *(_BYTE *)(a2 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 96) = 0;
    }
    v2 = (volatile signed __int32 *)(a1 + 32);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14063D8E0(v2, retaddr);
    }
    else
    {
      _InterlockedAnd(v2, 0xBFFFFFFF);
      _InterlockedDecrement(v2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v4 && *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v5 = *(_DWORD *)(v4 + 24) - 1;
      *(_DWORD *)(v4 + 24) = v5;
      if ( !v5 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
  }
}
