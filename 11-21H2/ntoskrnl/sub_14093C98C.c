/*
 * XREFs of sub_14093C98C @ 0x14093C98C
 * Callers:
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 * Callees:
 *     sub_140A66CEC @ 0x140A66CEC (sub_140A66CEC.c)
 */

__int64 __fastcall sub_14093C98C(_RTL_BITMAP_EX *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // rax

  result = sub_140A66CEC(a1 + 34, (__int64)a4, (__int64)a5);
  if ( *a4 )
  {
    result = a1[47].SizeOfBitMap;
    *a3 = *(_QWORD *)(result + 8LL * *a5);
  }
  return result;
}
