/*
 * XREFs of sub_1405EF890 @ 0x1405EF890
 * Callers:
 *     sub_1405EF24C @ 0x1405EF24C (sub_1405EF24C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405EF890(unsigned int a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rdx
  unsigned int v7; // ecx

  v4 = 0;
  if ( !a4 )
    return 0;
  v6 = a2 - (_QWORD)a3;
  while ( 1 )
  {
    v7 = *(_DWORD *)((char *)a3 + v6);
    if ( a1 >= v7 && a1 < *a3 + v7 )
      break;
    ++v4;
    ++a3;
    if ( v4 >= a4 )
      return 0;
  }
  return 1;
}
