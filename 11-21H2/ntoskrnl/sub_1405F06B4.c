/*
 * XREFs of sub_1405F06B4 @ 0x1405F06B4
 * Callers:
 *     sub_1405EFE44 @ 0x1405EFE44 (sub_1405EFE44.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405F06B4(int a1, _DWORD *a2)
{
  _DWORD *v2; // rax

  v2 = a2 + 1024;
  while ( 1 )
  {
    if ( a2 >= v2 )
      return 1;
    if ( *a2 != a1 )
      break;
    ++a2;
  }
  return 0;
}
