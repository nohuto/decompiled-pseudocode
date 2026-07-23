/*
 * XREFs of sub_1409A50EC @ 0x1409A50EC
 * Callers:
 *     sub_1409A6714 @ 0x1409A6714 (sub_1409A6714.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409A1D70 @ 0x1409A1D70 (sub_1409A1D70.c)
 *     sub_1409A5AA4 @ 0x1409A5AA4 (sub_1409A5AA4.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409AB3EC @ 0x1409AB3EC (sub_1409AB3EC.c)
 */

__int64 __fastcall sub_1409A50EC(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _DWORD v7[136]; // [rsp+20h] [rbp-228h] BYREF

  v4 = sub_1409A1D70(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 2113LL;
LABEL_3:
    sub_1409A8628("TtmiWriteEnumerationEventsToQueue", v5, (unsigned int)v4, (unsigned int)v4);
    return (unsigned int)v4;
  }
  sub_1409A5AA4(a1, a2);
  memset(&v7[1], 0, 0x21CuLL);
  v7[0] = 1;
  v4 = sub_1409AB3EC(a2, v7);
  if ( v4 < 0 )
  {
    v5 = 2132LL;
    goto LABEL_3;
  }
  return 0LL;
}
