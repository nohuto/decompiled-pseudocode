/*
 * XREFs of sub_1409A1D08 @ 0x1409A1D08
 * Callers:
 *     sub_1409A3450 @ 0x1409A3450 (sub_1409A3450.c)
 *     sub_1409A6940 @ 0x1409A6940 (sub_1409A6940.c)
 * Callees:
 *     sub_1409A7C70 @ 0x1409A7C70 (sub_1409A7C70.c)
 */

char __fastcall sub_1409A1D08(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rbx
  char result; // al
  __int64 v6; // rcx

  v2 = (__int64 *)(a1 + 96);
  v4 = *(__int64 **)(a1 + 96);
  result = 0;
  while ( v4 != v2 )
  {
    v6 = *(unsigned int *)(a2 + 28);
    if ( *((_DWORD *)v4 + 149) == (_DWORD)v6 )
    {
      sub_1409A7C70(v6, *((unsigned int *)v4 + 4), v4[3], *((unsigned int *)v4 + 8));
      *((_DWORD *)v4 + 149) = -1;
      result = 1;
      *((_DWORD *)v4 + 150) |= 0x10u;
    }
    v4 = (__int64 *)*v4;
  }
  return result;
}
