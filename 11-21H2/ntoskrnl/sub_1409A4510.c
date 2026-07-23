/*
 * XREFs of sub_1409A4510 @ 0x1409A4510
 * Callers:
 *     sub_1407FE640 @ 0x1407FE640 (sub_1407FE640.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A9508 @ 0x1409A9508 (sub_1409A9508.c)
 */

void __fastcall sub_1409A4510(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = sub_1409A5200(&v4, a1);
  if ( v2 >= 0 )
  {
    sub_1409A9508(a1);
    v3 = v4;
    *(_DWORD *)(v4 + 4) &= 0xFFFFFCFF;
    sub_1409A4D70(v3, 4LL);
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  else
  {
    sub_1409A8628("TtmNotifyLowPowerStateExited", 3159LL, (unsigned int)v2, (unsigned int)v2);
  }
}
