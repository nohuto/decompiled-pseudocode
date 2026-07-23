/*
 * XREFs of sub_14095EC4C @ 0x14095EC4C
 * Callers:
 *     sub_14095EB98 @ 0x14095EB98 (sub_14095EB98.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall sub_14095EC4C(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C44540, 1u);
  v3 = (_QWORD *)qword_140C44538;
  if ( *(PBOOLEAN **)qword_140C44538 != (PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) )
    __fastfail(3u);
  *a1 = (char *)&KdDebuggerEnabled + 7;
  a1[1] = v3;
  *v3 = a1;
  qword_140C44538 = (__int64)a1;
  ExReleaseResourceLite(&stru_140C44540);
  KeLeaveCriticalRegion();
}
