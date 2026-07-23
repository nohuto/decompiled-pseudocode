/*
 * XREFs of sub_1409A6100 @ 0x1409A6100
 * Callers:
 *     sub_1409A4934 @ 0x1409A4934 (sub_1409A4934.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A556C @ 0x1409A556C (sub_1409A556C.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

char __fastcall sub_1409A6100(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  char v8; // bl
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v8 = 0;
  v9 = sub_1409A5200(&v11, a1);
  if ( v9 >= 0 )
  {
    if ( sub_1409A556C(v11, a2, &v12)
      && *(_DWORD *)(v12 + 20) == a3
      && *(_QWORD *)(v12 + 24) == a4
      && !*(_DWORD *)(v12 + 40) )
    {
      v8 = 1;
      *(_QWORD *)(v12 + 32) = a5;
    }
  }
  else
  {
    sub_1409A8628("TtmpUpdatePowerRequestAttribute", 3530LL, (unsigned int)v9, 0xFFFFFFFFLL);
  }
  if ( v11 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  return v8;
}
