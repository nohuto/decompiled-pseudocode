/*
 * XREFs of sub_1403603D0 @ 0x1403603D0
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 * Callees:
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 */

__int64 __fastcall sub_1403603D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v1 = *(unsigned int *)(a1 - 576);
  v5 = 0;
  v3 = v1;
  v4 = *(_DWORD *)(a1 - 140);
  return sub_14036044C(
           7LL,
           dword_140C5451C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v3);
}
