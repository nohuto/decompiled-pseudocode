/*
 * XREFs of sub_1409A56A4 @ 0x1409A56A4
 * Callers:
 *     sub_1409A52C8 @ 0x1409A52C8 (sub_1409A52C8.c)
 *     sub_1409A54C0 @ 0x1409A54C0 (sub_1409A54C0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140996DE8 @ 0x140996DE8 (sub_140996DE8.c)
 *     sub_1409A8BAC @ 0x1409A8BAC (sub_1409A8BAC.c)
 *     sub_1409A8CA0 @ 0x1409A8CA0 (sub_1409A8CA0.c)
 */

__int64 __fastcall sub_1409A56A4(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx

  v4 = a1;
  LOBYTE(a1) = a2;
  sub_1409A8BAC(a1, a3);
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
  v6 = sub_140996DE8(a2, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  *(_QWORD *)(v4 + 232) = KeGetCurrentThread();
  sub_1409A8CA0(v8);
  return v8;
}
