/*
 * XREFs of sub_14024253C @ 0x14024253C
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 * Callees:
 *     sub_1402393AC @ 0x1402393AC (sub_1402393AC.c)
 *     sub_1403385E0 @ 0x1403385E0 (sub_1403385E0.c)
 */

__int64 __fastcall sub_14024253C(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = (8 * (*(_DWORD *)(a1 + 36) & 0xFFE00000 | 0x1000000000LL)) | (((*(_QWORD *)a1 >> 20) | *(_QWORD *)(a1 + 40) & 0x780000000000000uLL) >> 20);
  }
  else
  {
    sub_1402393AC(a1, 0);
    *(_DWORD *)(a1 + 36) &= 0xFFE00000;
  }
  return sub_1403385E0(a1, v2);
}
