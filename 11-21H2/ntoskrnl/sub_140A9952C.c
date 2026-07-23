/*
 * XREFs of sub_140A9952C @ 0x140A9952C
 * Callers:
 *     sub_140A99478 @ 0x140A99478 (sub_140A99478.c)
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 * Callees:
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A997C0 @ 0x140A997C0 (sub_140A997C0.c)
 *     sub_140A99C74 @ 0x140A99C74 (sub_140A99C74.c)
 *     sub_140A99E14 @ 0x140A99E14 (sub_140A99E14.c)
 */

__int64 sub_140A9952C()
{
  __int64 v0; // rdi
  _QWORD *v1; // r14
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx
  unsigned __int8 v18; // [rsp+60h] [rbp+8h]

  v0 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v18 = sub_1406018DC();
  sub_140A994C4(1);
  dword_140D5751C = 0;
  if ( qword_140D57500 )
  {
    v3 = *((_QWORD *)qword_140D57500 + 2);
    v4 = 1023LL;
    v5 = 1023LL;
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD **)(v6 + v3);
      while ( v7 != (_QWORD *)(v0 + v3) )
      {
        v8 = v7 - 5;
        v7 = (_QWORD *)*v7;
        sub_140A99C74((__int64)v8);
        v9 = qword_140D57500;
        *v8 = v2;
        v2 = v8;
        v3 = v9[2];
      }
      v0 += 16LL;
      v6 += 16LL;
      --v5;
    }
    while ( v5 );
    v10 = 0LL;
    v11 = *((_QWORD *)qword_140D57500 + 2050);
    do
    {
      v12 = *(_QWORD **)(v5 + v11);
      while ( v12 != (_QWORD *)(v10 + v11) )
      {
        v13 = v12 - 3;
        v12 = (_QWORD *)*v12;
        sub_140A99E14((__int64)v13);
        v14 = qword_140D57500;
        *v13 = v1;
        v1 = v13;
        v11 = v14[2050];
      }
      v10 += 16LL;
      v5 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  sub_140A994FC(1);
  result = sub_140601864(v18);
  if ( v1 )
  {
    do
    {
      v16 = (_QWORD *)*v1;
      result = sub_140A997C0(v1, 3LL);
      v1 = v16;
    }
    while ( v16 );
  }
  if ( v2 )
  {
    do
    {
      v17 = (_QWORD *)*v2;
      result = sub_140A997C0(v2, 1LL);
      v2 = v17;
    }
    while ( v17 );
  }
  return result;
}
