/*
 * XREFs of sub_140551AA0 @ 0x140551AA0
 * Callers:
 *     sub_140551840 @ 0x140551840 (sub_140551840.c)
 *     sub_1405518C0 @ 0x1405518C0 (sub_1405518C0.c)
 *     sub_140551930 @ 0x140551930 (sub_140551930.c)
 *     sub_140551A30 @ 0x140551A30 (sub_140551A30.c)
 *     sub_140551BE0 @ 0x140551BE0 (sub_140551BE0.c)
 *     sub_140551CA0 @ 0x140551CA0 (sub_140551CA0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void sub_140551AA0()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v2; // r9
  int v3; // eax
  bool v4; // zf

  v0 = (unsigned __int8)byte_140C485F8;
  KeReleaseSpinLockFromDpcLevel(&qword_140C48600);
  if ( (unsigned __int8)v0 <= 2u )
  {
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v2 = *((_QWORD *)CurrentPrcb + 4375);
      v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v4 = (v3 & *(_DWORD *)(v2 + 20)) == 0;
      *(_DWORD *)(v2 + 20) &= v3;
      if ( v4 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
    __writecr8(v0);
  }
}
