/*
 * XREFs of TtmNotifyDeviceDeparture @ 0x1409A1960
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A27A8 @ 0x1409A27A8 (sub_1409A27A8.c)
 *     sub_1409A4B90 @ 0x1409A4B90 (sub_1409A4B90.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A7A18 @ 0x1409A7A18 (sub_1409A7A18.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall TtmNotifyDeviceDeparture(unsigned int a1, __int64 a2)
{
  char v4; // bl
  int v5; // eax
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v4 = 0;
  v5 = sub_1409A4B90(&v10);
  if ( v5 >= 0 )
  {
    v4 = sub_1409A27A8(v10, a1, a2, &v11);
    if ( v4 )
    {
      v7 = *(_DWORD *)(v11 + 600);
      if ( (v7 & 4) == 0 )
      {
        v8 = v10;
        *(_DWORD *)(v11 + 600) = v7 | 4;
        sub_1409A4D70(v8, 1LL);
      }
    }
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  else
  {
    sub_1409A8628("TtmNotifyDeviceDeparture", 623LL, (unsigned int)v5, (unsigned int)v5);
  }
  LOBYTE(v6) = v4;
  return sub_1409A7A18(a1, a2, v6);
}
