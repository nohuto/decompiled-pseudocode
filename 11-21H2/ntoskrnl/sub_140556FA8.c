/*
 * XREFs of sub_140556FA8 @ 0x140556FA8
 * Callers:
 *     sub_1409345F0 @ 0x1409345F0 (sub_1409345F0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140556FA8()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // r9
  int v7; // edx
  bool v8; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C472B0);
  v1 = qword_140C472A0;
  v2 = v0;
  v3 = *(_QWORD *)qword_140C472A0;
  if ( *(__int64 **)(qword_140C472A0 + 8) != &qword_140C472A0 || *(_QWORD *)(v3 + 8) != qword_140C472A0 )
    __fastfail(3u);
  qword_140C472A0 = *(_QWORD *)qword_140C472A0;
  *(_QWORD *)(v3 + 8) = &qword_140C472A0;
  qword_140C46D78 = v1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C472B0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v1;
}
