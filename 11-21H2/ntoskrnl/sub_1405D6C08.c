/*
 * XREFs of sub_1405D6C08 @ 0x1405D6C08
 * Callers:
 *     sub_1405C92A0 @ 0x1405C92A0 (sub_1405C92A0.c)
 *     sub_1405CD1FC @ 0x1405CD1FC (sub_1405CD1FC.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D6B94 @ 0x1405D6B94 (sub_1405D6B94.c)
 */

__int64 __fastcall sub_1405D6C08(char a1)
{
  unsigned __int64 v2; // rdi
  char v3; // cl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C542C8);
  if ( a1 )
  {
    if ( ++dword_140C542C4 == 1 )
    {
      v3 = 0;
LABEL_6:
      sub_1405D6B94(v3, &qword_140C541B8, &qword_140C541C0);
    }
  }
  else if ( !--dword_140C542C4 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C542C8);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
