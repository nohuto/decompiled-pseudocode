/*
 * XREFs of sub_14036EDD4 @ 0x14036EDD4
 * Callers:
 *     sub_14036EEAC @ 0x14036EEAC (sub_14036EEAC.c)
 *     sub_1403C445C @ 0x1403C445C (sub_1403C445C.c)
 * Callees:
 *     sub_140371378 @ 0x140371378 (sub_140371378.c)
 *     sub_140371D3C @ 0x140371D3C (sub_140371D3C.c)
 *     sub_140372070 @ 0x140372070 (sub_140372070.c)
 *     InitFn @ 0x1403DE6A0 (InitFn.c)
 */

__int64 __fastcall sub_14036EDD4(_RTL_RUN_ONCE *a1, int a2, __int64 a3, _RTL_RUN_ONCE a4, unsigned __int64 a5, char a6)
{
  int Ptr; // edi
  int v9; // ebx
  __int64 result; // rax
  unsigned int v11; // edi
  char v12; // bl
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF

  a1[1].Ptr = a4.Ptr;
  Ptr = (int)a4.Ptr;
  v9 = a3;
  result = sub_140372070(&a1[2], 2 * (a5 >> 20), a3, a2 == 1);
  if ( (int)result >= 0 )
  {
    result = sub_140371D3C((int)a1 + 88, a2, v9, Ptr, a5 - 1);
    if ( (int)result >= 0 )
    {
      if ( (a6 & 2) != 0 )
      {
        v13 = 0LL;
        *(_WORD *)((char *)&v13 + 1) = 1;
        LOBYTE(v13) = (2 * (v9 & 3)) | 1;
        InitFn(a1 + 1814, &v13, 0LL);
      }
      if ( (a6 & 1) != 0 )
      {
        v11 = 0;
        v12 = 2 * (v9 & 3);
        while ( 1 )
        {
          v13 = 0LL;
          *(_WORD *)((char *)&v13 + 1) = (unsigned __int8)v11;
          LOBYTE(v13) = v12 | (v11 != 0);
          result = sub_140371378(&a1[2 * v11 + 1811], &v13);
          if ( (int)result < 0 )
            break;
          if ( ++v11 >= 4 )
            return 0LL;
        }
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
