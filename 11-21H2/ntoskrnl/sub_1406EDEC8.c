/*
 * XREFs of sub_1406EDEC8 @ 0x1406EDEC8
 * Callers:
 *     sub_1406EDD54 @ 0x1406EDD54 (sub_1406EDD54.c)
 *     sub_1409E92F8 @ 0x1409E92F8 (sub_1409E92F8.c)
 * Callees:
 *     sub_1402619C4 @ 0x1402619C4 (sub_1402619C4.c)
 *     sub_1402E1C2C @ 0x1402E1C2C (sub_1402E1C2C.c)
 */

__int64 __fastcall sub_1406EDEC8(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  sub_1402619C4((__int16 *)a1, (_DWORD *)a2);
  *(_DWORD *)a2 = a3;
  sub_1402E1C2C(a2, 7);
  *(_DWORD *)(a2 + 44) = 3;
  result = 1LL;
  *(_WORD *)(a2 + 52) = 1;
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 304);
  v7 = *(_QWORD *)(a2 + 32) ^ (*(_DWORD *)(a2 + 32) ^ *(_DWORD *)(a1 + 200)) & 7;
  *(_QWORD *)(a2 + 32) = v7;
  switch ( *(_DWORD *)(a1 + 200) )
  {
    case 1:
      goto LABEL_2;
    case 3:
      result = v7 & 7 | (8LL * (unsigned int)dword_140C15F74);
      *(_QWORD *)(a2 + 32) = result;
      return result;
    case 4:
LABEL_2:
      result = 8 * stru_140C15F78.QuadPart;
      *(_QWORD *)(a2 + 32) = (8 * stru_140C15F78.QuadPart) | v7 & 7;
      break;
  }
  return result;
}
