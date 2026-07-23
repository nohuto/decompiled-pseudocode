/*
 * XREFs of sub_1405CE144 @ 0x1405CE144
 * Callers:
 *     sub_1405CD1FC @ 0x1405CD1FC (sub_1405CD1FC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CE584 @ 0x1405CE584 (sub_1405CE584.c)
 *     sub_1405CE63C @ 0x1405CE63C (sub_1405CE63C.c)
 */

__int64 __fastcall sub_1405CE144(char a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C23D00);
  if ( byte_140C23D21 )
  {
    if ( byte_140C23D20 == a1 )
      goto LABEL_8;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( a1 )
      qword_140C23D28 = MEMORY[0xFFFFF78000000008];
    else
      sub_1405CE63C(MEMORY[0xFFFFF78000000008], 0LL);
  }
  if ( byte_140C23D20 != a1 )
  {
    LOBYTE(v2) = a1;
    byte_140C23D20 = a1;
    sub_1405CE584(v2);
  }
LABEL_8:
  KeReleaseSpinLockFromDpcLevel(&qword_140C23D00);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
