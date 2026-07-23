/*
 * XREFs of sub_1405D8980 @ 0x1405D8980
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 */

void __fastcall sub_1405D8980(__int64 a1, int a2)
{
  KeAcquireSpinLockAtDpcLevel(&qword_140C1F640);
  if ( (xmmword_140C1F6F8 & 1) != 0 && DWORD1(xmmword_140C1F6F8) == a2 )
  {
    LODWORD(xmmword_140C1F6F8) = xmmword_140C1F6F8 & 1 | ((xmmword_140C1F6F8 & 0xFFFFFFFE) + 2000);
    sub_14036AAC4((__int64)&unk_140C1F6D0, CriticalWorkQueue);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F640);
}
