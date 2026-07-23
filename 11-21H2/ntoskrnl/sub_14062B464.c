/*
 * XREFs of sub_14062B464 @ 0x14062B464
 * Callers:
 *     sub_14062B7FC @ 0x14062B7FC (sub_14062B7FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140653D68 @ 0x140653D68 (sub_140653D68.c)
 */

unsigned __int64 __fastcall sub_14062B464(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v6; // rbp
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r10d
  unsigned __int64 result; // rax
  _BYTE *i; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+38h] [rbp-40h] BYREF

  v15 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    v9 = 0LL;
    if ( v6 == -1 )
    {
      v11 = -1073741823;
      v15 = 0LL;
    }
    else
    {
      LOBYTE(v9) = a5 != 0;
      v10 = sub_140653D68(v6, v9, a3, a2, (__int64)&v15, (__int64)v16);
      v9 = v15;
      v11 = v10;
    }
    result = (unsigned __int64)v16;
    for ( i = v16; i < &v16[v9]; ++a4 )
    {
      v14 = *a4;
      if ( (*i & 1) != 0 )
        v14 |= 1uLL;
      ++i;
      *a4 = v14 & 0xFFFFFFFFFFFFFFF9uLL | 4;
    }
    a2 += 8 * v9;
    a3 -= v9;
    if ( !a3 )
      break;
    if ( v11 < 0 )
    {
      result = *a4;
      if ( (*a4 & 4) == 0 )
      {
        result |= 6uLL;
        *a4 = result;
      }
      a2 += 8LL;
      ++a4;
      if ( !--a3 )
        break;
    }
  }
  return result;
}
