/*
 * XREFs of sub_1409A1D70 @ 0x1409A1D70
 * Callers:
 *     sub_1409A50EC @ 0x1409A50EC (sub_1409A50EC.c)
 * Callees:
 *     sub_1409A29D4 @ 0x1409A29D4 (sub_1409A29D4.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A1D70(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v2 = (__int64 *)(a1 + 96);
  for ( i = *(__int64 **)(a1 + 96); ; i = (__int64 *)*i )
  {
    if ( i == v2 )
      return 0;
    if ( (i[75] & 0xA) == 2 )
    {
      v6 = sub_1409A29D4(a1, a2, i, 0LL);
      v7 = v6;
      if ( v6 < 0 )
        break;
    }
  }
  sub_1409A8628("TtmiPublishDeviceEnumerationEvents", 1054LL, (unsigned int)v6, (unsigned int)v6);
  return v7;
}
