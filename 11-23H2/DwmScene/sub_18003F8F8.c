/*
 * XREFs of sub_18003F8F8 @ 0x18003F8F8
 * Callers:
 *     sub_180040150 @ 0x180040150 (sub_180040150.c)
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     sub_180098AA0 @ 0x180098AA0 (sub_180098AA0.c)
 *     sub_1800A55F0 @ 0x1800A55F0 (sub_1800A55F0.c)
 *     sub_1800DE348 @ 0x1800DE348 (sub_1800DE348.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18003F8F8(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  result = 0LL;
  v5 = a1;
  v6 = (unsigned __int64)((char *)a2 - (char *)a1 + 7) >> 3;
  if ( a1 > a2 )
    v6 = 0LL;
  if ( v6 >= 2 )
  {
    result = *a3;
    v7 = (unsigned __int64)&a1[v6 - 1];
    if ( v5 > a3 || v7 < (unsigned __int64)a3 )
    {
      v8 = 8 * (v6 & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v5, result, v8 >> 3);
      v5 = (unsigned __int64 *)((char *)v5 + v8);
    }
  }
  while ( v5 != a2 )
  {
    result = *a3;
    *v5++ = *a3;
  }
  return result;
}
