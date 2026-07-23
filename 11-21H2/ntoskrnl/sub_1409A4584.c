/*
 * XREFs of sub_1409A4584 @ 0x1409A4584
 * Callers:
 *     sub_1403C10B0 @ 0x1403C10B0 (sub_1403C10B0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A33CC @ 0x1409A33CC (sub_1409A33CC.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A4584(unsigned int a1, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = sub_1409A5200(&v7, a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( a2 == 5 )
    {
      v5 = 1111769921;
    }
    else
    {
      v5 = 1111778643;
      if ( a2 == 16 )
        v5 = 1111769922;
    }
    sub_1409A33CC(v7, *(_QWORD *)(v7 + 32), a2, v5, 1);
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    sub_1409A8628("TtmNotifySessionDisplayBurst", 3280LL, (unsigned int)v3, (unsigned int)v3);
  }
  return v4;
}
