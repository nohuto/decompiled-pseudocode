/*
 * XREFs of sub_14095EB04 @ 0x14095EB04
 * Callers:
 *     sub_140956ADC @ 0x140956ADC (sub_140956ADC.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall sub_14095EB04(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C44540, 1u);
  while ( 1 )
  {
    v3 = *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7);
    if ( *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) == (PBOOLEAN)((char *)&KdDebuggerEnabled + 7) )
      break;
    if ( (*(PBOOLEAN ***)((char *)&KdDebuggerEnabled + 7))[1] != (PBOOLEAN *)((char *)&KdDebuggerEnabled + 7)
      || (v4 = **(_QWORD **)((char *)&KdDebuggerEnabled + 7),
          *(PBOOLEAN *)(**(_QWORD **)((char *)&KdDebuggerEnabled + 7) + 8LL) != *(PBOOLEAN *)((char *)&KdDebuggerEnabled
                                                                                            + 7))
      || (*(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) = **(PBOOLEAN **)((char *)&KdDebuggerEnabled + 7),
          *(_QWORD *)(v4 + 8) = (char *)&KdDebuggerEnabled + 7,
          v5 = *(_QWORD **)(a1 + 8),
          *v5 != a1) )
    {
      __fastfail(3u);
    }
    *v3 = a1;
    v3[1] = v5;
    *v5 = v3;
    *(_QWORD *)(a1 + 8) = v3;
  }
  ExReleaseResourceLite(&stru_140C44540);
  KeLeaveCriticalRegion();
}
