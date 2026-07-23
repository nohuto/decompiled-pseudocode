/*
 * XREFs of sub_1402D26E0 @ 0x1402D26E0
 * Callers:
 *     sub_1406E60B0 @ 0x1406E60B0 (sub_1406E60B0.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_BOOL8 __fastcall sub_1402D26E0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax
  BOOL v5; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C46008);
  v4 = (_QWORD *)qword_140C45FC8;
  v5 = qword_140C45FC0 == (_QWORD)&qword_140C45FC0;
  if ( *(__int64 **)qword_140C45FC8 != &qword_140C45FC0 )
    __fastfail(3u);
  *a2 = &qword_140C45FC0;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140C45FD0;
  qword_140C45FC8 = (__int64)a2;
  KeReleaseSpinLockFromDpcLevel(&qword_140C46008);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v5;
}
