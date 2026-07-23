/*
 * XREFs of sub_1403A5A64 @ 0x1403A5A64
 * Callers:
 *     sub_14080FDC0 @ 0x14080FDC0 (sub_14080FDC0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1403A5A64()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140D31180);
  v1 = qword_140C46FF0;
  v2 = v0;
  if ( (__int64 *)qword_140C46FF0 == &qword_140C46FF0 )
  {
    byte_140C46C39 = 0;
    v1 = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)qword_140C46FF0;
    if ( *(__int64 **)(qword_140C46FF0 + 8) != &qword_140C46FF0 || *(_QWORD *)(v4 + 8) != qword_140C46FF0 )
      __fastfail(3u);
    qword_140C46FF0 = *(_QWORD *)qword_140C46FF0;
    *(_QWORD *)(v4 + 8) = &qword_140C46FF0;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D31180);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v1;
}
