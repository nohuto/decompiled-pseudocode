/*
 * XREFs of sub_1405D8880 @ 0x1405D8880
 * Callers:
 *     sub_140996B90 @ 0x140996B90 (sub_140996B90.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405D8880(char a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
  if ( a1 )
  {
    if ( dword_140C5AE20 == 2 )
      qword_140C224B8 = MEMORY[0xFFFFF78000000008];
  }
  else if ( qword_140C224B8 )
  {
    qword_140C224C0 += (MEMORY[0xFFFFF78000000008] - qword_140C224B8) / 0xAuLL;
    qword_140C224B8 = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
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
