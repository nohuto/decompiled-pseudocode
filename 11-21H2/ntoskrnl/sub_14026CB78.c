/*
 * XREFs of sub_14026CB78 @ 0x14026CB78
 * Callers:
 *     sub_140269464 @ 0x140269464 (sub_140269464.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 * Callees:
 *     sub_14026CCC0 @ 0x14026CCC0 (sub_14026CCC0.c)
 *     sub_14026CE64 @ 0x14026CE64 (sub_14026CE64.c)
 */

char __fastcall sub_14026CB78(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdx
  bool v14; // zf
  bool i; // zf

  v4 = 0LL;
  v5 = (-(__int64)((*(_DWORD *)(a1 + 24) & 2) != 0) & 0xFFFFFFFFFFFFFE20uLL) + 512;
  LOBYTE(v6) = ((*(_DWORD *)(a1 + 24) & 2) != 0 ? 0x20 : 0) + a2;
  v7 = a2 & ~((-(__int64)((*(_DWORD *)(a1 + 24) & 2) != 0) & 0xFFFFFFFFFFFFFE20uLL) + 511);
  v8 = (~((-(__int64)((*(_DWORD *)(a1 + 24) & 2) != 0) & 0xFFFFFFFFFFFFFE20uLL) + 511) & (v5 + a2 + a3 - 1)) - v7;
  if ( v8 )
  {
    do
    {
      v6 = *(_QWORD *)a1;
      v9 = v7 + v4;
      if ( v7 + v4 < *(_QWORD *)a1 )
      {
        v6 -= v9;
        if ( v6 >= v5 )
        {
          v10 = *(_QWORD *)(a1 + 8);
          v11 = (__int64 *)(v10 + 8 * (v9 >> 6));
          v12 = *v11;
          v13 = (__int64 *)(v10 + 8 * ((v9 + v5 - 1) >> 6));
          if ( v11 == v13 )
          {
            v14 = (v12 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v9)) == 0;
LABEL_6:
            LOBYTE(v6) = v14;
            if ( v14 )
            {
              LODWORD(v6) = sub_14026CCC0(a1, v7 + v4, v5);
              if ( (_DWORD)v6 )
                LOBYTE(v6) = sub_14026CE64(a1, v7 + v4, v5, 0LL);
            }
          }
          else
          {
            v6 = -1LL << v9;
            for ( i = (v12 & (-1LL << v9)) == 0; i; i = *v11 == 0 )
            {
              if ( ++v11 == v13 )
              {
                v14 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v5 - 1)) & *v11) == 0;
                goto LABEL_6;
              }
            }
          }
        }
      }
      v4 += v5;
    }
    while ( v4 < v8 );
  }
  return v6;
}
