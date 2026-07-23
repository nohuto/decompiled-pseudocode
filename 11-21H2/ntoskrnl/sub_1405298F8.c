/*
 * XREFs of sub_1405298F8 @ 0x1405298F8
 * Callers:
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_14051B094 @ 0x14051B094 (sub_14051B094.c)
 *     sub_140A61BE0 @ 0x140A61BE0 (sub_140A61BE0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall sub_1405298F8(__int64 a1, unsigned int a2, PHYSICAL_ADDRESS *a3)
{
  unsigned int v3; // eax
  char *v6; // r8
  unsigned int v7; // eax
  _DWORD *v8; // rdx
  __int64 v9; // r9
  int v10; // eax

  v3 = *(_DWORD *)(a1 + 24);
  if ( a2 > v3 )
    return 3221225485LL;
  v6 = *(char **)(a1 + 16);
  v7 = v3 - a2;
  if ( v7 )
  {
    v8 = (_DWORD *)(a1 + 36);
    v9 = v7;
    do
    {
      v10 = 1 << *v8++;
      v6 = *(char **)&v6[v10 << *(_DWORD *)(a1 + 28)];
      --v9;
    }
    while ( v9 );
  }
  *a3 = MmGetPhysicalAddress(v6);
  return 0LL;
}
