/*
 * XREFs of sub_14099CAD0 @ 0x14099CAD0
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 */

__int64 __fastcall sub_14099CAD0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 > 6 )
    return (unsigned int)-1073741811;
  v3 = 0;
  if ( !v1 && *(_BYTE *)(a1 + 8) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    sub_1407EF098(1);
    qword_140C1F410 = ((unsigned __int8)qword_140C1F410 ^ (unsigned __int8)*(_DWORD *)(a1 + 12)) & 7 ^ (unsigned __int64)qword_140C1F410;
    qword_140C1F410 = qword_140C1F410 & 0xFFFFFFFFFFFFFFF7uLL | (*(_BYTE *)(a1 + 8) != 0 ? 8 : 0);
    sub_1407EF120();
  }
  return v3;
}
