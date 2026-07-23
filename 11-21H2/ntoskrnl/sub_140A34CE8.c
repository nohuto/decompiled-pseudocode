/*
 * XREFs of sub_140A34CE8 @ 0x140A34CE8
 * Callers:
 *     sub_1408301C0 @ 0x1408301C0 (sub_1408301C0.c)
 * Callees:
 *     sub_1408307E0 @ 0x1408307E0 (sub_1408307E0.c)
 */

__int64 __fastcall sub_140A34CE8(__int64 a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx

  v2 = 0;
  if ( a1 )
  {
    v5 = *(wchar_t **)(a1 + 136);
    if ( v5 && sub_1408307E0(v5, a2) )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v6 = *(wchar_t **)(a1 + 152);
      if ( v6 )
        return sub_1408307E0(v6, a2) != 0 ? 0xC0000034 : 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
