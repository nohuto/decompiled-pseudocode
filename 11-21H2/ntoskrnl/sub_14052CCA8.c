/*
 * XREFs of sub_14052CCA8 @ 0x14052CCA8
 * Callers:
 *     sub_140521E50 @ 0x140521E50 (sub_140521E50.c)
 *     sub_1405223E0 @ 0x1405223E0 (sub_1405223E0.c)
 * Callees:
 *     sub_14052CD28 @ 0x14052CD28 (sub_14052CD28.c)
 */

__int64 __fastcall sub_14052CCA8(unsigned __int8 *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v9; // ecx

  v4 = 0;
  v9 = -1073741822;
  if ( !a2 )
    return v9;
  while ( 1 )
  {
    if ( *a1 == a3 )
    {
      v9 = sub_14052CD28(a1, a4, 0LL);
      if ( v9 == -1073741823 )
        break;
    }
    ++v4;
    a1 += 64;
    if ( v4 >= a2 )
      return v9;
  }
  return 0LL;
}
