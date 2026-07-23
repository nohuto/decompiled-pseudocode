/*
 * XREFs of sub_1409A5200 @ 0x1409A5200
 * Callers:
 *     sub_1409A447C @ 0x1409A447C (sub_1409A447C.c)
 *     sub_1409A4510 @ 0x1409A4510 (sub_1409A4510.c)
 *     sub_1409A4584 @ 0x1409A4584 (sub_1409A4584.c)
 *     sub_1409A4620 @ 0x1409A4620 (sub_1409A4620.c)
 *     sub_1409A47BC @ 0x1409A47BC (sub_1409A47BC.c)
 *     sub_1409A49BC @ 0x1409A49BC (sub_1409A49BC.c)
 *     sub_1409A4A48 @ 0x1409A4A48 (sub_1409A4A48.c)
 *     sub_1409A4AE0 @ 0x1409A4AE0 (sub_1409A4AE0.c)
 *     sub_1409A4B90 @ 0x1409A4B90 (sub_1409A4B90.c)
 *     sub_1409A573C @ 0x1409A573C (sub_1409A573C.c)
 *     sub_1409A6100 @ 0x1409A6100 (sub_1409A6100.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A5200(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v2 = 0;
  *a1 = 0LL;
  if ( sub_1407F0F98() )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
    if ( qword_140D3CB08 && *(_DWORD *)qword_140D3CB08 == a2 )
    {
      *a1 = qword_140D3CB08;
    }
    else
    {
      v2 = -1073740715;
      sub_1409A8628("TtmpAcquireSessionById", 1697LL, 0xFFFFFFFFLL, 3221226581LL);
      ExReleaseResourceLite(&stru_140C1C020);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    sub_1409A8628("TtmpAcquireSessionById", 1686LL, 0xFFFFFFFFLL, 3221225659LL);
  }
  return v2;
}
