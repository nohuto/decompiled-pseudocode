/*
 * XREFs of sub_1403542DC @ 0x1403542DC
 * Callers:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 */

char __fastcall sub_1403542DC(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&qword_140D31380);
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KeReleaseSpinLockFromDpcLevel(&qword_140D31380);
  }
  return v1;
}
