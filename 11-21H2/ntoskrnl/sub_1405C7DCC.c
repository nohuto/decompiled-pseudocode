/*
 * XREFs of sub_1405C7DCC @ 0x1405C7DCC
 * Callers:
 *     sub_1405CD1FC @ 0x1405CD1FC (sub_1405CD1FC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C7F88 @ 0x1405C7F88 (sub_1405C7F88.c)
 */

__int64 __fastcall sub_1405C7DCC(unsigned int a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  result = qword_140D068A8;
  v4 = a1;
  if ( *(_DWORD *)(qword_140D068A8 + 4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
    LOBYTE(v6) = a2;
    v7 = v5;
    LOBYTE(v8) = 1;
    sub_1405C7F88(448 * v4 + qword_140D068A8 + 80, v8, v6);
    KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= result;
          if ( v11 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return result;
}
