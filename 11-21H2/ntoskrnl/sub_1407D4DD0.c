/*
 * XREFs of sub_1407D4DD0 @ 0x1407D4DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407D4E34 @ 0x1407D4E34 (sub_1407D4E34.c)
 *     sub_1407D4F98 @ 0x1407D4F98 (sub_1407D4F98.c)
 */

__int64 __fastcall sub_1407D4DD0(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // ecx
  int v7; // r8d

  v6 = 0;
  if ( (*(_DWORD *)(a6 + 64) & 4) == 0 )
    return (unsigned int)-1073741822;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( a4 == 1 )
      return (unsigned int)sub_1407D4E34(a6, *a5);
    return v6;
  }
  if ( v7 != 1 )
    return (unsigned int)-1073741822;
  if ( a4 == 1 )
    return (unsigned int)sub_1407D4F98(a6, *a5);
  return v6;
}
