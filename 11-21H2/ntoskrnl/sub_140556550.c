/*
 * XREFs of sub_140556550 @ 0x140556550
 * Callers:
 *     sub_1409345F0 @ 0x1409345F0 (sub_1409345F0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char sub_140556550()
{
  char v0; // di
  KIRQL v1; // al
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // r9
  int v6; // edx
  bool v7; // zf

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C472B0);
  qword_140C46D78 = 0LL;
  v2 = v1;
  if ( (__int64 *)qword_140C472A0 == &qword_140C472A0 )
  {
    byte_140C472D8 = 0;
    v0 = 0;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C472B0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v0;
}
