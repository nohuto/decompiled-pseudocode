/*
 * XREFs of sub_1409A61C4 @ 0x1409A61C4
 * Callers:
 *     sub_1409A5AA4 @ 0x1409A5AA4 (sub_1409A5AA4.c)
 *     sub_1409A6030 @ 0x1409A6030 (sub_1409A6030.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409A5188 @ 0x1409A5188 (sub_1409A5188.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409AB3EC @ 0x1409AB3EC (sub_1409AB3EC.c)
 */

void __fastcall sub_1409A61C4(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  _QWORD v9[68]; // [rsp+20h] [rbp-228h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = *(_DWORD *)(a3 + 40) == 0;
  LODWORD(v9[1]) = *(_DWORD *)(a3 + 16);
  v7 = *(_DWORD *)(a3 + 20);
  LOBYTE(v9[3]) = !v6;
  HIDWORD(v9[1]) = v7;
  v9[2] = *(_QWORD *)(a3 + 32);
  LODWORD(v9[0]) = 6;
  if ( a2 )
  {
    v8 = sub_1409AB3EC(a2, v9);
    if ( v8 < 0 )
      sub_1409A8628("TtmpWriteDisplayRequiredPowerRequestUpdatedEvent", 555LL, (unsigned int)v8, 0xFFFFFFFFLL);
  }
  else
  {
    sub_1409A5188(a1, (__int64)v9);
  }
}
