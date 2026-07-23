/*
 * XREFs of sub_1402D6254 @ 0x1402D6254
 * Callers:
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     sub_1402D66F0 @ 0x1402D66F0 (sub_1402D66F0.c)
 *     sub_140368FC4 @ 0x140368FC4 (sub_140368FC4.c)
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 *     sub_1405CFAF4 @ 0x1405CFAF4 (sub_1405CFAF4.c)
 *     sub_1405CFC50 @ 0x1405CFC50 (sub_1405CFC50.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_1407FF440 @ 0x1407FF440 (sub_1407FF440.c)
 *     sub_1408081E0 @ 0x1408081E0 (sub_1408081E0.c)
 *     sub_140808500 @ 0x140808500 (sub_140808500.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402D6254(int a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C23060);
  dword_140C222B4 |= a1;
  v3 = v2;
  KeReleaseSpinLockFromDpcLevel(&qword_140C23060);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
