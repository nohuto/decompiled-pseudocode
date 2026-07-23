/*
 * XREFs of sub_1405C629C @ 0x1405C629C
 * Callers:
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 * Callees:
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 */

__int64 __fastcall sub_1405C629C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  if ( (unsigned int)sub_14033D720(a2) < dword_140C52B6C )
    return 0LL;
  v10 = *(_QWORD *)(v5 + 544);
  v11 = *(_QWORD *)(v10 + 1088) ^ *(_QWORD *)(v10 + 1128);
  v12[2] = v7 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v12[1] = v6 >> 12;
  v13 = dword_140CF5E50;
  v14 = *(_DWORD *)(v10 + 1088);
  v12[3] = v11 & 0x1FFFFFFFFFFFFFFFLL;
  v12[0] = v8;
  return sub_14036044C(
           10,
           dword_140C5451C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           v12,
           0x28u);
}
