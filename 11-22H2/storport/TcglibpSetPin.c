/*
 * XREFs of TcglibpSetPin @ 0x1C007E01C
 * Callers:
 *     TcglibSetAdmin1Pin @ 0x1C0079E88 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBandPin @ 0x1C007A4AC (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x1C007A5FC (TcglibSetSidPin.c)
 * Callees:
 *     TcglibpSetTableColumnData @ 0x1C007CC28 (TcglibpSetTableColumnData.c)
 */

__int64 __fastcall TcglibpSetPin(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  if ( (unsigned int)*a4 <= 0x20 )
    return TcglibpSetTableColumnData(a1, a2, a3, 3u, (__int64)(a4 + 1), *a4, 15);
  else
    return 3221225485LL;
}
