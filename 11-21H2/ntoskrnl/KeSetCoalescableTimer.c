/*
 * XREFs of KeSetCoalescableTimer @ 0x1402E2C60
 * Callers:
 *     sub_14022EEF4 @ 0x14022EEF4 (sub_14022EEF4.c)
 *     sub_140248B24 @ 0x140248B24 (sub_140248B24.c)
 *     sub_14025383C @ 0x14025383C (sub_14025383C.c)
 *     sub_1402554D8 @ 0x1402554D8 (sub_1402554D8.c)
 *     sub_1402566A0 @ 0x1402566A0 (sub_1402566A0.c)
 *     sub_1402A4320 @ 0x1402A4320 (sub_1402A4320.c)
 *     sub_1402E1D48 @ 0x1402E1D48 (sub_1402E1D48.c)
 *     sub_14035489C @ 0x14035489C (sub_14035489C.c)
 *     sub_14035800C @ 0x14035800C (sub_14035800C.c)
 *     sub_1403EAC70 @ 0x1403EAC70 (sub_1403EAC70.c)
 *     sub_14053D99C @ 0x14053D99C (sub_14053D99C.c)
 *     sub_1405568E4 @ 0x1405568E4 (sub_1405568E4.c)
 *     sub_1405D4A94 @ 0x1405D4A94 (sub_1405D4A94.c)
 *     sub_14063E084 @ 0x14063E084 (sub_14063E084.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 *     sub_1406DBDA0 @ 0x1406DBDA0 (sub_1406DBDA0.c)
 *     sub_1406DFEB4 @ 0x1406DFEB4 (sub_1406DFEB4.c)
 *     sub_1407D4F98 @ 0x1407D4F98 (sub_1407D4F98.c)
 *     sub_140811AB4 @ 0x140811AB4 (sub_140811AB4.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 *     sub_14093FB40 @ 0x14093FB40 (sub_14093FB40.c)
 *     sub_140A59518 @ 0x140A59518 (sub_140A59518.c)
 *     sub_140AAB5FC @ 0x140AAB5FC (sub_140AAB5FC.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 *     sub_140AD6354 @ 0x140AD6354 (sub_140AD6354.c)
 *     sub_140B302E4 @ 0x140B302E4 (sub_140B302E4.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v8 = 10000LL * TolerableDelay;
    if ( v8 > 0xFC0000 )
    {
      v9 = v8 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( (__int64)(v9 + DueTime.QuadPart) < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( (__int64)(DueTime.QuadPart - v9) > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        v11 = -1;
        if ( Period + (int)v9 / 10000 >= Period )
          v11 = Period + (int)v9 / 10000;
        Period = v11;
      }
      LODWORD(v8) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v8 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return sub_1402E2D20((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
