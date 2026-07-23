/*
 * XREFs of sub_1402D6004 @ 0x1402D6004
 * Callers:
 *     sub_1402D5EE4 @ 0x1402D5EE4 (sub_1402D5EE4.c)
 *     sub_14038B744 @ 0x14038B744 (sub_14038B744.c)
 *     sub_14038B860 @ 0x14038B860 (sub_14038B860.c)
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 *     sub_1405C94E0 @ 0x1405C94E0 (sub_1405C94E0.c)
 *     sub_1405CD1FC @ 0x1405CD1FC (sub_1405CD1FC.c)
 *     sub_1405D05C0 @ 0x1405D05C0 (sub_1405D05C0.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 *     sub_140845880 @ 0x140845880 (sub_140845880.c)
 *     sub_14098BC1C @ 0x14098BC1C (sub_14098BC1C.c)
 *     sub_14099CEC0 @ 0x14099CEC0 (sub_14099CEC0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D6094 @ 0x1402D6094 (sub_1402D6094.c)
 *     sub_1402D6128 @ 0x1402D6128 (sub_1402D6128.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140579E04 @ 0x140579E04 (sub_140579E04.c)
 */

__int64 __fastcall sub_1402D6004(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // edx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v2 = 1 << a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C1FB98);
  v4 = dword_140C1FB94;
  v5 = v3;
  dword_140C1FB94 &= ~v2;
  if ( v4 != dword_140C1FB94 )
  {
    sub_1402D6128(a1);
    sub_1402D6094(a1, 0LL);
    if ( !dword_140C1FB94 )
    {
      if ( (dword_140C22390 & 2) != 0 )
      {
        sub_140579E04();
        byte_140C22388 = 1;
      }
      if ( !byte_140C1FB80 )
      {
        byte_140C1FB80 = 1;
        ExQueueWorkItem(&stru_140C1FB60, DelayedWorkQueue);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1FB98);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
