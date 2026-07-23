/*
 * XREFs of sub_140565D34 @ 0x140565D34
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140565D34(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
