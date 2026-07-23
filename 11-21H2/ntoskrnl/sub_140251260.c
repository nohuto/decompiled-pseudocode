/*
 * XREFs of sub_140251260 @ 0x140251260
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402512B0 @ 0x1402512B0 (sub_1402512B0.c)
 */

RTL_GENERIC_COMPARE_RESULTS __fastcall sub_140251260(_RTL_AVL_TABLE *a1, _DWORD *a2, _DWORD *a3)
{
  RTL_GENERIC_COMPARE_RESULTS result; // eax
  unsigned int v6; // ecx

  result = sub_1402512B0(a1, a2, a3);
  if ( result == GenericEqual )
  {
    v6 = a2[4];
    if ( v6 < a3[4] )
    {
      return 0;
    }
    else if ( v6 > a3[4] )
    {
      return 1;
    }
  }
  return result;
}
