/*
 * XREFs of sub_1405F068C @ 0x1405F068C
 * Callers:
 *     sub_1405EFE44 @ 0x1405EFE44 (sub_1405EFE44.c)
 *     sub_1405F0120 @ 0x1405F0120 (sub_1405F0120.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405F068C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // rax

  v3 = a3 + 1024;
  while ( 1 )
  {
    if ( a3 >= v3 )
      return 1;
    if ( *a3 != a1 )
      break;
    *a3++ = a2;
  }
  return 0;
}
