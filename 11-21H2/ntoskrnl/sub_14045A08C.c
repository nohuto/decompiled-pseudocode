/*
 * XREFs of sub_14045A08C @ 0x14045A08C
 * Callers:
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045A08C(__int64 a1, char a2)
{
  int v2; // r8d
  unsigned int v3; // ecx
  bool v4; // dl

  v2 = dword_140D05478[((unsigned __int64)*(unsigned int *)(a1 + 632) >> 7) & 0xF];
  v3 = 1;
  v4 = v2 == 6 && a2 == 1;
  if ( !byte_140D068E1 || (((v2 - 1) & 0xFFFFFFFA) != 0 || v2 == 6) && !v4 )
    return 0;
  return v3;
}
