/*
 * XREFs of sub_1403DEA70 @ 0x1403DEA70
 * Callers:
 *     sub_14051E390 @ 0x14051E390 (sub_14051E390.c)
 *     sub_140B4C634 @ 0x140B4C634 (sub_140B4C634.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DEA70(int a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned int v3; // r9d

  v2 = 0;
  v3 = *(_DWORD *)(qword_140C4AD18 + 56);
  if ( !v3 )
    return 3221226021LL;
  while ( *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 24) + 4LL * v2) != a1 )
  {
    if ( ++v2 >= v3 )
      return 3221226021LL;
  }
  *a2 = v2;
  return 0LL;
}
