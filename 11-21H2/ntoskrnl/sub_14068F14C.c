/*
 * XREFs of sub_14068F14C @ 0x14068F14C
 * Callers:
 *     sub_14068F4AC @ 0x14068F4AC (sub_14068F4AC.c)
 * Callees:
 *     sub_14068ED70 @ 0x14068ED70 (sub_14068ED70.c)
 */

__int64 __fastcall sub_14068F14C(ULONG_PTR a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 result; // rax

  if ( a2[8] )
  {
    v4 = a2[5];
    v5 = v4;
    v6 = v4;
    if ( v4 < a2[6] )
    {
      while ( a2[8] )
      {
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v6 - a2[3]) >> 12) + 72) & 0x10) == 0 )
        {
          if ( v4 != v5 )
          {
            result = sub_14068ED70(a1, a2, v4, v5);
            if ( (int)result < 0 )
              return result;
          }
          v4 = v6 + 4096;
          v5 = v6;
        }
        v5 += 4096LL;
        v6 += 4096LL;
        if ( v6 >= a2[6] )
        {
          if ( v4 != v5 )
          {
            result = sub_14068ED70(a1, a2, v4, v5);
            if ( (int)result < 0 )
              return result;
          }
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}
