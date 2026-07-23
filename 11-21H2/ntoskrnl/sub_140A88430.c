/*
 * XREFs of sub_140A88430 @ 0x140A88430
 * Callers:
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A84630 @ 0x140A84630 (sub_140A84630.c)
 *     sub_140A846E0 @ 0x140A846E0 (sub_140A846E0.c)
 *     sub_140A84860 @ 0x140A84860 (sub_140A84860.c)
 *     sub_140A84950 @ 0x140A84950 (sub_140A84950.c)
 *     sub_140A849F0 @ 0x140A849F0 (sub_140A849F0.c)
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A85150 @ 0x140A85150 (sub_140A85150.c)
 *     sub_140A852B0 @ 0x140A852B0 (sub_140A852B0.c)
 *     sub_140A853A0 @ 0x140A853A0 (sub_140A853A0.c)
 *     sub_140A85550 @ 0x140A85550 (sub_140A85550.c)
 *     sub_140A85600 @ 0x140A85600 (sub_140A85600.c)
 *     sub_140A856B0 @ 0x140A856B0 (sub_140A856B0.c)
 *     sub_140A85840 @ 0x140A85840 (sub_140A85840.c)
 *     sub_140A859A0 @ 0x140A859A0 (sub_140A859A0.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A862F0 @ 0x140A862F0 (sub_140A862F0.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 *     sub_140A86C30 @ 0x140A86C30 (sub_140A86C30.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88B74 @ 0x140A88B74 (sub_140A88B74.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

struct _LIST_ENTRY *__fastcall sub_140A88430(ULONG_PTR a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r8
  int v16; // eax

  if ( !a1 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( dword_140C1AE0C )
      sub_140A83D24();
    return 0LL;
  }
  if ( !dword_140C1AE0C && dword_140D575B4 == 1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140D575A0);
  Flink = stru_140D57590.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &stru_140D57590 == Flink )
    {
      KeReleaseSpinLockFromDpcLevel(&qword_140D575A0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      break;
    Flink = Flink->Flink;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D575A0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = *((_QWORD *)v14 + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v11 )
          sub_140418E4C((__int64)v14);
      }
    }
  }
  __writecr8(v6);
  if ( a2 && SHIDWORD(Flink[2].Flink) <= 0 )
  {
    sub_140A88948(
      byte_140C0D988,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    sub_1405FFA20(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C0D988);
  }
  return Flink;
}
