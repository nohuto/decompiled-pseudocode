/*
 * XREFs of sub_1405387E8 @ 0x1405387E8
 * Callers:
 *     sub_140538580 @ 0x140538580 (sub_140538580.c)
 * Callees:
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 */

__int64 __fastcall sub_1405387E8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 16);
  while ( v5 != v3 )
  {
    a1 = (__int64)v5;
    v5 = (_QWORD *)*v5;
    if ( *(_QWORD *)(a1 + 16) == a2 && *(_QWORD *)(a1 + 24) == a3 )
      return 0;
  }
  v7 = 0;
  v11 = 0LL;
  sub_1403CE24C(a1, 0x20u, &v11);
  v8 = v11;
  if ( v11 )
  {
    v11[2] = a2;
    v8[3] = a3;
    v9 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v9 != v3 )
      __fastfail(3u);
    *v8 = v3;
    v8[1] = v9;
    *v9 = v8;
    v3[1] = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
