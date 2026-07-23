/*
 * XREFs of sub_140A6AA08 @ 0x140A6AA08
 * Callers:
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 * Callees:
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 *     sub_140A483FC @ 0x140A483FC (sub_140A483FC.c)
 *     sub_140A484F0 @ 0x140A484F0 (sub_140A484F0.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 */

__int64 __fastcall sub_140A6AA08(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_140A483FC((__int64)&qword_140C4E960, a2, 4);
  sub_140A5B810();
  sub_140A484F0((__int64)&qword_140C4E960, (__int64)&qword_140CF5E00, 4);
  v3 = *(int *)(a1 + 48);
  v6 = 0LL;
  v5 = v3;
  LODWORD(v6) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return sub_14036044C(
           27,
           dword_140C5451C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v5,
           0x10u);
}
