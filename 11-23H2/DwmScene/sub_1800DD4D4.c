/*
 * XREFs of sub_1800DD4D4 @ 0x1800DD4D4
 * Callers:
 *     sub_1800DD5A8 @ 0x1800DD5A8 (sub_1800DD5A8.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800DDDB8 @ 0x1800DDDB8 (sub_1800DDDB8.c)
 *     sub_1800DE0DC @ 0x1800DE0DC (sub_1800DE0DC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800DD4D4(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v10 = *a1;
    v11 = 0LL;
    v6 = a1 + 2;
    if ( a1[1] )
      goto LABEL_5;
    v7 = sub_18001C190();
    v11 = v7;
    sub_1800DDDB8(v8, v7 + 16, v4 + 2);
    a1[3] = v7;
    while ( 1 )
    {
      v11 = 0LL;
      *v6 = v7;
      ++a1[1];
      v4 = (_QWORD *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v7 = sub_18001C190();
      v11 = v7;
      sub_1800DDDB8(v9, v7 + 16, v4 + 2);
      *(_QWORD *)*v6 = v7;
      *(_QWORD *)(v7 + 8) = *v6;
    }
    sub_1800DE0DC(&v10);
  }
}
