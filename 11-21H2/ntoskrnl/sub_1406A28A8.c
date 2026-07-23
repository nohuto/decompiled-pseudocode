/*
 * XREFs of sub_1406A28A8 @ 0x1406A28A8
 * Callers:
 *     sub_1406A26A8 @ 0x1406A26A8 (sub_1406A26A8.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

char __fastcall sub_1406A28A8(unsigned __int8 **a1, unsigned int a2, __int64 a3, char *a4)
{
  unsigned __int8 **v6; // rbx
  int v7; // edi
  unsigned int v8; // r14d
  char v9; // r15
  unsigned __int8 *v10; // rdx

  v6 = a1;
  if ( !a1 )
    return 0;
  v7 = 0;
  v8 = 4 * (unsigned __int8)a4[1] + 8;
  if ( !a2 )
    return 0;
  v9 = *a4;
  while ( 1 )
  {
    v10 = *v6;
    if ( v9 == **v6 && v8 == 4 * v10[1] + 8 && !memcmp(a4, v10, v8) )
      break;
    v6 += 2;
    if ( ++v7 >= a2 )
      return 0;
  }
  return 1;
}
