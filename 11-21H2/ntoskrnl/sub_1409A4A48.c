/*
 * XREFs of sub_1409A4A48 @ 0x1409A4A48
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A33CC @ 0x1409A33CC (sub_1409A33CC.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

void __fastcall sub_1409A4A48(unsigned int a1, int a2, char a3)
{
  int v5; // eax
  __int64 i; // rdx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = sub_1409A5200(&v7, a1);
  if ( v5 >= 0 )
  {
    for ( i = *(_QWORD *)(v7 + 40); i != v7 + 40; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 28) == a2 )
      {
        sub_1409A33CC(v7, i, 4u, 1950962771, a3);
        break;
      }
    }
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  else
  {
    sub_1409A8628("TtmNotifySessionTerminalInput", 4213LL, (unsigned int)v5, 0xFFFFFFFFLL);
  }
}
