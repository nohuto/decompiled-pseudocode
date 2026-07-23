/*
 * XREFs of sub_1407987F0 @ 0x1407987F0
 * Callers:
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     sub_14026187C @ 0x14026187C (sub_14026187C.c)
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 */

__int64 __fastcall sub_1407987F0(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  unsigned int v4; // esi

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 228);
    v4 = sub_1402E1C80(a1);
    if ( v3 < v4 && v4 - v3 != (unsigned int)sub_14026187C(a1, v4 - v3) )
      return (unsigned int)-1073741801;
  }
  return v1;
}
