/*
 * XREFs of sub_140360350 @ 0x140360350
 * Callers:
 *     sub_1407DBC0C @ 0x1407DBC0C (sub_1407DBC0C.c)
 * Callees:
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 */

__int64 __fastcall sub_140360350(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v8 = 0;
  v6 = a2;
  v5 = dword_140CF5E50;
  v4 = a1;
  v7 = a3;
  return sub_14036044C(
           30LL,
           dword_140C5451C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v4);
}
