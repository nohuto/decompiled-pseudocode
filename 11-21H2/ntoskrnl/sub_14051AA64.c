/*
 * XREFs of sub_14051AA64 @ 0x14051AA64
 * Callers:
 *     sub_140528440 @ 0x140528440 (sub_140528440.c)
 *     sub_1405284B0 @ 0x1405284B0 (sub_1405284B0.c)
 * Callees:
 *     sub_14051AEFC @ 0x14051AEFC (sub_14051AEFC.c)
 *     sub_140527900 @ 0x140527900 (sub_140527900.c)
 *     sub_140529F08 @ 0x140529F08 (sub_140529F08.c)
 *     sub_14052A328 @ 0x14052A328 (sub_14052A328.c)
 */

__int64 __fastcall sub_14051AA64(ULONG_PTR a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  ULONG_PTR v8; // r10
  unsigned int v9; // r13d
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  __int64 i; // rax
  unsigned __int64 v14; // r14
  __int64 j; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  v8 = a1;
  v9 = 0;
  if ( byte_140C4BCBC )
  {
    if ( !byte_140C4BCBE )
      return 3221225659LL;
    return (unsigned int)sub_140527900(a1);
  }
  else
  {
    v11 = 0LL;
    if ( a4 )
    {
      while ( 1 )
      {
        v12 = v11 + 1;
        for ( i = *(_QWORD *)(a3 + 8 * v11); v12 < a4 && *(_QWORD *)(a3 + 8 * v12) == i + 1; i = *(_QWORD *)(a3 + 8 * v12++) )
          ;
        v18 = sub_140529F08(
                0,
                *(_QWORD *)(v8 + 40),
                a2,
                *(_DWORD *)(a3 + 8 * v11) << 12,
                (v12 - v11) << 12,
                *(_QWORD *)(a3 + 8 * v11) << 12);
        v9 = v18;
        if ( v18 < 0 )
          break;
        v8 = a1;
        v11 = v12;
        if ( v12 >= a4 )
          return v9;
      }
      if ( v11 )
      {
        do
        {
          v14 = v4 + 1;
          for ( j = *(_QWORD *)(a3 + 8 * v4);
                v14 < a4 && *(_QWORD *)(a3 + 8 * v14) == j + 1;
                j = *(_QWORD *)(a3 + 8 * v14++) )
          {
            ;
          }
          v16 = *(_QWORD *)(a1 + 40);
          v17 = *(_QWORD *)(a3 + 8 * v4) << 12;
          v19 = (v14 - v4) << 12;
          sub_14052A328(v16, &v19, v17);
          sub_14051AEFC(a1, v17, (v14 - v4) << 12);
          v4 = v14;
        }
        while ( v14 < v11 );
        return (unsigned int)v18;
      }
    }
  }
  return v9;
}
