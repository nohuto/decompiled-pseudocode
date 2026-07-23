/*
 * XREFs of sub_140644D30 @ 0x140644D30
 * Callers:
 *     sub_1403DAA2C @ 0x1403DAA2C (sub_1403DAA2C.c)
 *     sub_14092CFC0 @ 0x14092CFC0 (sub_14092CFC0.c)
 *     sub_140A08FFC @ 0x140A08FFC (sub_140A08FFC.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     qsort_s @ 0x1403E2250 (qsort_s.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_14081D380 @ 0x14081D380 (sub_14081D380.c)
 *     sub_140A09408 @ 0x140A09408 (sub_140A09408.c)
 *     sub_140A09454 @ 0x140A09454 (sub_140A09454.c)
 *     sub_140A1CB84 @ 0x140A1CB84 (sub_140A1CB84.c)
 *     sub_140A1D3AC @ 0x140A1D3AC (sub_140A1D3AC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140644D30(__int64 a1)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // r15d
  int v7; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+50h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = 0LL;
  v3 = sub_1408125C4(0LL, 0LL, &v14);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( (int)sub_140812B74(v14, qword_14003C200, &v15) < 0 )
  {
    v12 = 0x2010000000000001LL;
    v3 = sub_140A1CB84(v14, qword_14003C200, &v12, &v15);
    if ( v3 < 0 )
    {
      v4 = v15;
      goto LABEL_18;
    }
  }
  v4 = v15;
  v13 = 0;
  v5 = sub_14081D380(v15, 385875978LL, 0LL, &v13);
  v6 = v13;
  if ( v5 != -1073741789 )
    v6 = 0;
  v7 = v5;
  v13 = v6;
  Pool2 = ExAllocatePool2(258LL, v6 + 8LL, 1634035799LL);
  v2 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)sub_140A09454(v2, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      v2[v9] = a1;
      v10 = v9 + 1;
      qsort_s(v2, v10, 8uLL, sub_1406453E0, 0LL);
      if ( (unsigned int)sub_140A09408(v2, v10) <= 0x40 )
      {
        v3 = sub_140A1D3AC(v4, 385875978LL, v2, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = sub_14081D380(v4, 385875978LL, Pool2, &v13);
  if ( v3 >= 0 )
  {
    v6 = v13;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    sub_140812D00(v4);
LABEL_20:
  if ( v14 )
    sub_1408124A0(v14);
  if ( v2 )
    sub_140348B40((ULONG_PTR)v2);
  return (unsigned int)v3;
}
