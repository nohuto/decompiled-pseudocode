/*
 * XREFs of sub_1409A49BC @ 0x1409A49BC
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A9EC4 @ 0x1409A9EC4 (sub_1409A9EC4.c)
 */

void __fastcall sub_1409A49BC(unsigned int a1, char a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = sub_1409A5200(&v8, a1);
  if ( v3 < 0 )
  {
    sub_1409A8628("TtmNotifySessionPowerStateChange", 3211LL, (unsigned int)v3, 0xFFFFFFFFLL);
    return;
  }
  LOBYTE(v4) = a2;
  sub_1409A9EC4(v4);
  v5 = v8;
  v6 = *(_DWORD *)(v8 + 4);
  if ( a2 )
  {
    if ( (v6 & 0x80u) != 0 )
    {
      v7 = v6 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v6 & 0x40) != 0 )
  {
    v7 = v6 & 0xFFFFFBBF | 0x400;
LABEL_8:
    *(_DWORD *)(v8 + 4) = v7;
    sub_1409A4D70(v5, 4LL);
  }
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
}
