/*
 * XREFs of sub_140986F94 @ 0x140986F94
 * Callers:
 *     sub_14081BB14 @ 0x14081BB14 (sub_14081BB14.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 * Callees:
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 *     sub_14038BAF0 @ 0x14038BAF0 (sub_14038BAF0.c)
 *     sub_1405C6380 @ 0x1405C6380 (sub_1405C6380.c)
 *     sub_140988074 @ 0x140988074 (sub_140988074.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 */

__int64 __fastcall sub_140986F94(int a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int64 v6; // r14
  signed int v9; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = 0LL;
  v6 = a1;
  if ( !(unsigned int)sub_14038BAF0((__int64)&qword_140C4E960) )
    sub_140A5B810(1LL);
  v9 = sub_1405C6380(0x10u);
  sub_140988074(&Thread, 1LL);
  v11 = v6;
  LODWORD(v12) = a2 & 3 | v12 & 0xFFF00000 | (4 * (a4 | ((a3 & 3) << 16)));
  result = sub_14036044C(
             27,
             dword_140C5451C
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
             &v11,
             0x10u);
  if ( (a5 & 1) != 0 )
    result = sub_140988074(&Thread, 0LL);
  if ( v9 <= 31 )
    return sub_1405C6380(v9);
  return result;
}
