/*
 * XREFs of sub_14035FD2C @ 0x14035FD2C
 * Callers:
 *     sub_1407DA91C @ 0x1407DA91C (sub_1407DA91C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14035FDEC @ 0x14035FDEC (sub_14035FDEC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035FD2C(__int64 a1)
{
  unsigned __int64 v2; // rsi
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  if ( sub_140347810(&stru_140C54640) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
    v3 = sub_14035FDEC(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_140C54688;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_140C54688 != &qword_140C54680 )
        __fastfail(3u);
      ++dword_140C4EEF0;
      *v5 = &qword_140C54680;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_140C54688 = a1 + 8;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
