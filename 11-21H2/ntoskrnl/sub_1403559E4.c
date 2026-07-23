/*
 * XREFs of sub_1403559E4 @ 0x1403559E4
 * Callers:
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     sub_140395BDC @ 0x140395BDC (sub_140395BDC.c)
 *     sub_14045DDF6 @ 0x14045DDF6 (sub_14045DDF6.c)
 *     sub_1405CCECC @ 0x1405CCECC (sub_1405CCECC.c)
 *     sub_1405CE488 @ 0x1405CE488 (sub_1405CE488.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403559E4(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *i; // r8

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v5 = a2 - v4;
      *(_QWORD *)(a1 + 128) += v5;
      if ( v5 < a3 )
      {
        *(_QWORD *)(a1 + 136) += v5;
      }
      else
      {
        for ( i = qword_140018348; v5 < *i || v5 >= qword_140018348[(unsigned int)(v3 + 1)]; ++i )
        {
          v3 = (unsigned int)(v3 + 1);
          if ( (unsigned int)v3 >= 5 )
            return;
        }
        ++*(_QWORD *)(a1 + 8 * v3 + 144);
        *(_QWORD *)(a1 + 8 * v3 + 184) += v5;
      }
    }
  }
}
