/*
 * XREFs of sub_1405CE21C @ 0x1405CE21C
 * Callers:
 *     sub_1405CCECC @ 0x1405CCECC (sub_1405CCECC.c)
 *     sub_1405CDBB4 @ 0x1405CDBB4 (sub_1405CDBB4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CE63C @ 0x1405CE63C (sub_1405CE63C.c)
 */

__int64 __fastcall sub_1405CE21C(char a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C23D00);
  if ( a1 )
  {
    if ( byte_140C23D20 )
      qword_140C23D28 = MEMORY[0xFFFFF78000000008];
    else
      *(_QWORD *)&xmmword_140C23D40 = xmmword_140C23D40 + 1;
  }
  else if ( byte_140C23D20 )
  {
    sub_1405CE63C(MEMORY[0xFFFFF78000000008], 1200000000LL);
  }
  byte_140C23D21 = a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C23D00);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
