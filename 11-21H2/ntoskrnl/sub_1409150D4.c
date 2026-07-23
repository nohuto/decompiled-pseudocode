/*
 * XREFs of sub_1409150D4 @ 0x1409150D4
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_140917348 @ 0x140917348 (sub_140917348.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409150D4(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 i; // r8

  v3 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_DWORD *)(i + 24) == a3 )
      return i - 16;
  }
  return v3;
}
