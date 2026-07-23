/*
 * XREFs of sub_1402D5F7C @ 0x1402D5F7C
 * Callers:
 *     sub_1402D5E5C @ 0x1402D5E5C (sub_1402D5E5C.c)
 *     sub_14038B860 @ 0x14038B860 (sub_14038B860.c)
 *     sub_1403A4264 @ 0x1403A4264 (sub_1403A4264.c)
 *     sub_1405C94E0 @ 0x1405C94E0 (sub_1405C94E0.c)
 *     sub_1405CD1FC @ 0x1405CD1FC (sub_1405CD1FC.c)
 *     sub_1405D04CC @ 0x1405D04CC (sub_1405D04CC.c)
 *     sub_1405DC1D0 @ 0x1405DC1D0 (sub_1405DC1D0.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 *     sub_14098BD1C @ 0x14098BD1C (sub_14098BD1C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D6094 @ 0x1402D6094 (sub_1402D6094.c)
 *     sub_1402D6184 @ 0x1402D6184 (sub_1402D6184.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140579CD4 @ 0x140579CD4 (sub_140579CD4.c)
 */

__int64 __fastcall sub_1402D5F7C(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1FB98);
  v3 = dword_140C1FB94;
  v4 = v2;
  dword_140C1FB94 |= 1 << a1;
  if ( v3 != dword_140C1FB94 )
  {
    sub_1402D6184();
    LOBYTE(v5) = 1;
    sub_1402D6094(a1, v5);
    if ( !v3 )
    {
      if ( byte_140C22388 )
      {
        sub_140579CD4();
        byte_140C22388 = 0;
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
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
