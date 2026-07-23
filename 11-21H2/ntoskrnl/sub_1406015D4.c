/*
 * XREFs of sub_1406015D4 @ 0x1406015D4
 * Callers:
 *     sub_140A7F844 @ 0x140A7F844 (sub_140A7F844.c)
 * Callees:
 *     sub_1406015A4 @ 0x1406015A4 (sub_1406015A4.c)
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A81A34 @ 0x140A81A34 (sub_140A81A34.c)
 *     sub_140A99440 @ 0x140A99440 (sub_140A99440.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A997C0 @ 0x140A997C0 (sub_140A997C0.c)
 *     sub_140A99C74 @ 0x140A99C74 (sub_140A99C74.c)
 */

__int64 __fastcall sub_1406015D4(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rbp
  _QWORD **v9; // r15
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rbx
  char v16; // [rsp+20h] [rbp-58h]

  v4 = a2;
  v6 = 0LL;
  v7 = 0;
  v8 = sub_140A99440();
  v16 = sub_1406018DC();
LABEL_2:
  sub_140A994C4(v7);
  v9 = (_QWORD **)(16 * v8 + *((_QWORD *)qword_140D57500 + 2));
  v10 = *v9;
  if ( *v9 != v9 && (unsigned int)sub_140A81A34((char *)qword_140D57500 + 16 * v8 + 32, a1, v4) )
  {
    while ( v10 != v9 )
    {
      v11 = v10 - 5;
      v10 = (_QWORD *)*v10;
      v12 = v11[1];
      if ( v12 >= a3 && v12 < a4 )
      {
        if ( !v7 )
        {
          v7 = 1;
          if ( !sub_1406015A4() )
          {
            sub_140A994FC(0LL);
            v4 = a2;
            goto LABEL_2;
          }
        }
        sub_140A99C74((__int64)v11);
        *v11 = v6;
        v6 = v11;
      }
    }
  }
  sub_140A994FC(v7);
  LOBYTE(v13) = v16;
  result = sub_140601864(v13);
  if ( v6 )
  {
    do
    {
      v15 = (_QWORD *)*v6;
      result = sub_140A997C0(v6, 1LL);
      v6 = v15;
    }
    while ( v15 );
  }
  return result;
}
