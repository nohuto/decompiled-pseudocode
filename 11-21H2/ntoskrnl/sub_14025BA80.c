/*
 * XREFs of sub_14025BA80 @ 0x14025BA80
 * Callers:
 *     sub_140777B74 @ 0x140777B74 (sub_140777B74.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_14025BA80()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  KeWaitForSingleObject(&byte_140C45FE8, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C46008);
  v1 = qword_140C45FD8;
  v2 = v0;
  v3 = *(_QWORD *)qword_140C45FD8;
  if ( *(__int64 **)(qword_140C45FD8 + 8) != &qword_140C45FD8 || *(_QWORD *)(v3 + 8) != qword_140C45FD8 )
    __fastfail(3u);
  qword_140C45FD8 = *(_QWORD *)qword_140C45FD8;
  *(_QWORD *)(v3 + 8) = &qword_140C45FD8;
  KeReleaseSpinLockFromDpcLevel(&qword_140C46008);
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
