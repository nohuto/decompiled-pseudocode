/*
 * XREFs of sub_14036B250 @ 0x14036B250
 * Callers:
 *     sub_14036B0D0 @ 0x14036B0D0 (sub_14036B0D0.c)
 *     sub_14036B190 @ 0x14036B190 (sub_14036B190.c)
 *     sub_1403B5600 @ 0x1403B5600 (sub_1403B5600.c)
 *     sub_1403B5CF0 @ 0x1403B5CF0 (sub_1403B5CF0.c)
 * Callees:
 *     sub_14036B2A4 @ 0x14036B2A4 (sub_14036B2A4.c)
 */

__int64 __fastcall sub_14036B250(__int64 a1, char a2)
{
  int v2; // r8d
  bool v3; // zf
  int v4; // edx
  int v5; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2 == 0;
  v4 = v2;
  v5 = !v3;
  result = v2 & 1;
  if ( v5 != (_DWORD)result && (v2 & 2) != 0 )
  {
    result = sub_14036B2A4(a1, MEMORY[0xFFFFF78000000008], 0LL);
    v4 = *(_DWORD *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 8) = v5 | v4 & 0xFFFFFFFE;
  return result;
}
