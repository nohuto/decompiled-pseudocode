/*
 * XREFs of sub_1405C8A68 @ 0x1405C8A68
 * Callers:
 *     sub_14098A510 @ 0x14098A510 (sub_14098A510.c)
 *     sub_14098AAF0 @ 0x14098AAF0 (sub_14098AAF0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405C8A68(int *a1)
{
  unsigned int v1; // edi
  int v2; // esi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v1 = a1[1];
  v2 = *a1;
  memset(a1, 0, 1008 * v1 + 24);
  if ( v1 )
  {
    v4 = a1 + 52;
    v5 = v1;
    do
    {
      *(v4 - 20) = -1LL;
      v6 = v4;
      v7 = 26LL;
      do
      {
        *v6 = -1LL;
        v6 += 4;
        --v7;
      }
      while ( v7 );
      v4 += 126;
      --v5;
    }
    while ( v5 );
  }
  a1[1] = v1;
  *a1 = v2 + 1;
  result = MEMORY[0xFFFFF78000000008];
  a1[3] = 0;
  *((_QWORD *)a1 + 2) = result;
  return result;
}
