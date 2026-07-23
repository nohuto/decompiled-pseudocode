/*
 * XREFs of sub_1402519E4 @ 0x1402519E4
 * Callers:
 *     sub_14024BFF8 @ 0x14024BFF8 (sub_14024BFF8.c)
 *     sub_1406D97E0 @ 0x1406D97E0 (sub_1406D97E0.c)
 * Callees:
 *     sub_140251AA8 @ 0x140251AA8 (sub_140251AA8.c)
 *     sub_1402EDF48 @ 0x1402EDF48 (sub_1402EDF48.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall sub_1402519E4(
        PEVENT_DATA_DESCRIPTOR UserData,
        ULONG UserDataCount,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        PCEVENT_DESCRIPTOR EventDescriptor)
{
  unsigned int i; // r11d
  int v13; // eax
  int v14; // r11d

  for ( i = 0; i < a6; i = v14 + 1 )
  {
    if ( a3 && _bittest(&a5, i) )
      v13 = sub_140251AA8(&UserData[UserDataCount], a4 + ((unsigned __int64)i << 6));
    else
      v13 = sub_1402EDF48(&UserData[UserDataCount]);
    UserDataCount += v13;
  }
  return EtwWriteEx(qword_140C15E00, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
