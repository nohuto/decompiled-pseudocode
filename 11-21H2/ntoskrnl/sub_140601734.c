/*
 * XREFs of sub_140601734 @ 0x140601734
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
 *     sub_140A99E14 @ 0x140A99E14 (sub_140A99E14.c)
 */

__int64 __fastcall sub_140601734(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 *v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // r12
  _QWORD **v9; // r14
  _QWORD *v10; // rbx
  unsigned __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 result; // rax
  unsigned __int64 *v14; // rbx
  char v15; // [rsp+20h] [rbp-48h]

  v4 = a2;
  v6 = 0LL;
  v7 = 0;
  v8 = sub_140A99440();
  v15 = sub_1406018DC();
LABEL_2:
  sub_140A994C4(v7);
  v9 = (_QWORD **)(16 * v8 + *((_QWORD *)qword_140D57500 + 2050));
  v10 = *v9;
  if ( *v9 != v9 && (unsigned int)sub_140A81A34((char *)qword_140D57500 + 16 * v8 + 16416, a1, v4) )
  {
    while ( v10 != v9 )
    {
      v11 = v10 - 3;
      v10 = (_QWORD *)*v10;
      if ( *v11 >= a3 && *v11 < a4 )
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
        sub_140A99E14((__int64)v11);
        *v11 = (unsigned __int64)v6;
        v6 = v11;
      }
    }
  }
  sub_140A994FC(v7);
  LOBYTE(v12) = v15;
  result = sub_140601864(v12);
  if ( v6 )
  {
    do
    {
      v14 = (unsigned __int64 *)*v6;
      result = sub_140A997C0(v6, 3LL);
      v6 = v14;
    }
    while ( v14 );
  }
  return result;
}
