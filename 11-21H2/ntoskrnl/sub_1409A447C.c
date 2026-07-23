/*
 * XREFs of sub_1409A447C @ 0x1409A447C
 * Callers:
 *     sub_1407F2A20 @ 0x1407F2A20 (sub_1407F2A20.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A33CC @ 0x1409A33CC (sub_1409A33CC.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A7504 @ 0x1409A7504 (sub_1409A7504.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A447C(unsigned int a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = sub_1409A5200(&v7, a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    sub_1409A33CC(v7, *(_QWORD *)(v7 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  else
  {
    sub_1409A8628("TtmNotifyConsoleUserPresent", 3336LL, (unsigned int)v4, 0xFFFFFFFFLL);
  }
  return sub_1409A7504(a1, a2, v5);
}
