/*
 * XREFs of sub_140A49250 @ 0x140A49250
 * Callers:
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 *     sub_1407FE938 @ 0x1407FE938 (sub_1407FE938.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_1407FFE58 @ 0x1407FFE58 (sub_1407FFE58.c)
 *     sub_14081BB14 @ 0x14081BB14 (sub_14081BB14.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 *     sub_14038B6C0 @ 0x14038B6C0 (sub_14038B6C0.c)
 *     sub_14038BAF0 @ 0x14038BAF0 (sub_14038BAF0.c)
 *     sub_1405C6380 @ 0x1405C6380 (sub_1405C6380.c)
 *     sub_140986F94 @ 0x140986F94 (sub_140986F94.c)
 *     sub_140988074 @ 0x140988074 (sub_140988074.c)
 *     sub_140A48D9C @ 0x140A48D9C (sub_140A48D9C.c)
 *     sub_140A540E0 @ 0x140A540E0 (sub_140A540E0.c)
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 *     sub_140A6AA08 @ 0x140A6AA08 (sub_140A6AA08.c)
 *     sub_140A6AACC @ 0x140A6AACC (sub_140A6AACC.c)
 */

__int64 __fastcall sub_140A49250(int a1, char a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  signed int v6; // ebx
  int v7; // [rsp+58h] [rbp+20h] BYREF
  int v8; // [rsp+5Ch] [rbp+24h]

  v8 = 0;
  v7 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v7 = (2 * a1) | 1;
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 5 && (unsigned int)(a3 - 2) <= 2 )
          sub_140986F94(1, 2, 1, dword_140C54554, 0);
LABEL_7:
        v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
           + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return sub_14036044C(
                 28,
                 dword_140C5451C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                               + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
                 &v7,
                 8u);
      }
      if ( !(unsigned int)sub_14038BAF0((__int64)&qword_140C4E960) )
        sub_140A6AA08(&qword_140C54520);
      if ( dword_140C54550 == 5 )
        sub_140A544B0(4LL);
      sub_140A540E0((ULONG_PTR)&qword_140C54520);
      sub_140A540E0((ULONG_PTR)&qword_140C54520);
      sub_140A540E0((ULONG_PTR)&qword_140C54520);
      result = sub_140A48D9C();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        if ( !(unsigned int)sub_14038BAF0((__int64)&qword_140C4E960) )
        {
          sub_140A5B810(1LL);
          v6 = sub_1405C6380(0x10u);
          sub_140988074((__int64)&Thread, 1);
          if ( v6 <= 31 )
            sub_1405C6380(v6);
          v8 = sub_140A6AACC((ULONG_PTR)&qword_140C54520);
        }
        sub_14038B6C0(0LL);
        return sub_14036044C(
                 28,
                 dword_140C5451C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                               + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
                 &v7,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return sub_140A540E0((ULONG_PTR)&qword_140C54520);
  }
  return result;
}
