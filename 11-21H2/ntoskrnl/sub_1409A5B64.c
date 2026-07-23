/*
 * XREFs of sub_1409A5B64 @ 0x1409A5B64
 * Callers:
 *     sub_1409A52C8 @ 0x1409A52C8 (sub_1409A52C8.c)
 *     sub_1409A54C0 @ 0x1409A54C0 (sub_1409A54C0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14099CD30 @ 0x14099CD30 (sub_14099CD30.c)
 *     sub_1409A9A54 @ 0x1409A9A54 (sub_1409A9A54.c)
 *     sub_1409A9B48 @ 0x1409A9B48 (sub_1409A9B48.c)
 */

__int64 __fastcall sub_1409A5B64(unsigned int *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int *v5; // r14
  struct _KTHREAD *CurrentThread; // rax

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  sub_1409A9A54(a1, a3);
  *((_QWORD *)v5 + 29) = 0LL;
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
  sub_14099CD30(a2, a3, v3);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  *((_QWORD *)v5 + 29) = KeGetCurrentThread();
  return sub_1409A9B48();
}
