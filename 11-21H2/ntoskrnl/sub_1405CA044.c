/*
 * XREFs of sub_1405CA044 @ 0x1405CA044
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_14039A1C4 @ 0x14039A1C4 (sub_14039A1C4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CA044(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C5AD98 )
  {
    sub_14042A5E0(a1 + 24, a1 + 16);
    *(_QWORD *)(a1 + 8) = sub_14039A1C4(dword_140C542C0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
