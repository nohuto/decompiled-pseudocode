/*
 * XREFs of sub_140A9A13C @ 0x140A9A13C
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A99834 @ 0x140A99834 (sub_140A99834.c)
 *     sub_140A99B3C @ 0x140A99B3C (sub_140A99B3C.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_140A9A13C(__int64 *a1, int a2)
{
  int v2; // r8d
  PVOID result; // rax

  do
  {
    v2 = a2 + *((_DWORD *)a1 + 19);
    *((_DWORD *)a1 + 19) = v2;
    a1 = (__int64 *)*a1;
  }
  while ( a1 );
  result = qword_140D57500;
  if ( v2 > *((_DWORD *)qword_140D57500 + 8282) )
    *((_DWORD *)qword_140D57500 + 8282) = v2;
  return result;
}
