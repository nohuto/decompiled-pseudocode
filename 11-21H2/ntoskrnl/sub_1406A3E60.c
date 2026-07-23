/*
 * XREFs of sub_1406A3E60 @ 0x1406A3E60
 * Callers:
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 */

__int64 __fastcall sub_1406A3E60(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rsi
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // rsi
  __int64 *i; // rcx
  __int64 v22; // rax
  __int64 *v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24[8]; // [rsp+48h] [rbp-40h] BYREF

  v9 = *(unsigned int *)(a2 + 48);
  v23 = 0LL;
  v11 = a3;
  v24[0] = 0LL;
  if ( (a5 | dword_140015E20[(v9 >> 7) & 7] | 0x700) != (dword_140015E20[(v9 >> 7) & 7] | 0x700) )
    return 3221225550LL;
  v13 = a3 >> 12;
  v14 = a4 >> 12;
  v15 = sub_140319600(a2, a3 >> 12, 0, (__int64 *)&v23);
  sub_140319600(a2, v14, 0, v24);
  v16 = sub_140319990(a2);
  v18 = (__int64)v23;
  if ( v16 )
  {
    v20 = (__int64)v23;
    for ( i = v23; ; i = (__int64 *)v20 )
    {
      result = sub_140311CC0(i, 1uLL, 8LL, v17);
      if ( (int)result < 0 )
        break;
      if ( v20 == v24[0] )
      {
        if ( !v15 )
        {
          v22 = sub_140319600(a2, v13, 0, (__int64 *)&v23);
          v18 = (__int64)v23;
          v15 = v22;
        }
        v11 = a3;
        goto LABEL_3;
      }
      v20 = *(_QWORD *)(v20 + 16);
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)sub_1406A4140(v18, v15, v14 - v13 + 1) )
      return sub_14032D1C0(a1, a2, v11, a4, a5, 0, a8, a9);
    else
      return 3221225773LL;
  }
  return result;
}
