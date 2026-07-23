/*
 * XREFs of sub_1405DD674 @ 0x1405DD674
 * Callers:
 *     sub_14098BC1C @ 0x14098BC1C (sub_14098BC1C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405DD718 @ 0x1405DD718 (sub_1405DD718.c)
 */

__int64 __fastcall sub_1405DD674(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
  if ( byte_140C1CC10 != a2 )
  {
    LOBYTE(v3) = a2;
    sub_1405DD718(v4, v3);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
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
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
