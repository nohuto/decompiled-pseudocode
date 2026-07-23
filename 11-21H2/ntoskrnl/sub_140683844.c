/*
 * XREFs of sub_140683844 @ 0x140683844
 * Callers:
 *     sub_1402536E0 @ 0x1402536E0 (sub_1402536E0.c)
 *     sub_140683088 @ 0x140683088 (sub_140683088.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1409AD76C @ 0x1409AD76C (sub_1409AD76C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140683844(__int64 a1, int a2, char a3)
{
  int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  bool v8; // zf

  if ( (*(_DWORD *)(a1 + 2172) & 1) == 0 || (v8 = (a3 & 1) == 0, v3 = 0x10000000, !v8) )
    v3 = 805306368;
  LODWORD(result) = *(_DWORD *)(a1 + 1120);
  v5 = v3 & (a2 << 28);
  v6 = ~v3;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1120), v5 | result & v6, result);
  }
  while ( (_DWORD)result != v7 );
  return result;
}
