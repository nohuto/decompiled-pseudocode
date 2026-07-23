/*
 * XREFs of sub_14039ADE8 @ 0x14039ADE8
 * Callers:
 *     sub_140806FC0 @ 0x140806FC0 (sub_140806FC0.c)
 *     sub_1408091FC @ 0x1408091FC (sub_1408091FC.c)
 *     sub_1408095C4 @ 0x1408095C4 (sub_1408095C4.c)
 *     sub_140995888 @ 0x140995888 (sub_140995888.c)
 *     sub_1409959F8 @ 0x1409959F8 (sub_1409959F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039ADE8(int a1)
{
  unsigned int v1; // r8d
  _DWORD *v2; // rdx
  __int64 v3; // rax

  v1 = 0;
  v2 = &unk_140D05A84;
  v3 = 0LL;
  while ( *v2 != a1 )
  {
    v3 = (unsigned int)(v3 + 1);
    v2 += 2;
    if ( (unsigned int)v3 >= 0x37 )
      return v1;
  }
  return *((unsigned int *)&unk_140D05A80 + 2 * v3);
}
