/*
 * XREFs of sub_1800549C0 @ 0x1800549C0
 * Callers:
 *     sub_1800561F8 @ 0x1800561F8 (sub_1800561F8.c)
 * Callees:
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_1800539F0 @ 0x1800539F0 (sub_1800539F0.c)
 *     sub_18005509C @ 0x18005509C (sub_18005509C.c)
 */

__int64 __fastcall sub_1800549C0(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r13
  char v5; // di
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 result; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+48h] [rbp-40h]

  v4 = *a1;
  v5 = 0;
  v17 = 0;
  v10 = v4;
  v11 = *(_QWORD *)(v4 + 8);
  v16 = v11;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v16 = v11;
    if ( (unsigned __int8)sub_18001DE04((_QWORD *)(v11 + 32), a3) )
    {
      v11 = *(_QWORD *)(v11 + 16);
      v17 = 0;
    }
    else
    {
      v10 = v11;
      v17 = 1;
      v11 = *(_QWORD *)v11;
    }
  }
  if ( *(_BYTE *)(v10 + 25) || (unsigned __int8)sub_18001DE04(a3, (_QWORD *)(v10 + 32)) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001F56C();
    v12 = sub_1800539F0((__int64)v15, (__int64)a1, v4, (__int64)a3, a4);
    v13 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = 0LL;
    sub_18005509C(v15);
    v10 = sub_18001F31C(a1, (__int64)&v16, v13);
    v5 = 1;
  }
  *(_QWORD *)a2 = v10;
  result = a2;
  *(_BYTE *)(a2 + 8) = v5;
  return result;
}
