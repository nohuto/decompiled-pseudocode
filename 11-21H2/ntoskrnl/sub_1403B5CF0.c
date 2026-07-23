/*
 * XREFs of sub_1403B5CF0 @ 0x1403B5CF0
 * Callers:
 *     sub_1403B5C80 @ 0x1403B5C80 (sub_1403B5C80.c)
 * Callees:
 *     sub_14036B250 @ 0x14036B250 (sub_14036B250.c)
 */

__int64 __fastcall sub_1403B5CF0(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ecx
  bool v4; // zf

  v1 = 0;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( (v3 & 0x10) == 0 )
    {
      v4 = ++*(_DWORD *)(a1 + 12) == 1;
      *(_DWORD *)(a1 + 8) = v3 | 0x10;
      if ( v4 )
        sub_14036B250(a1, 1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
