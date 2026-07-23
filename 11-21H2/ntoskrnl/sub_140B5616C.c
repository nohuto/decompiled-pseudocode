/*
 * XREFs of sub_140B5616C @ 0x140B5616C
 * Callers:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403CE3FC @ 0x1403CE3FC (sub_1403CE3FC.c)
 *     sub_140B56268 @ 0x140B56268 (sub_140B56268.c)
 */

__int64 __fastcall sub_140B5616C(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  if ( !byte_140C0DF00 )
  {
    qword_140C0DF18 = (__int64)&qword_140C0DF10;
    qword_140C0DF10 = (__int64)&qword_140C0DF10;
    byte_140C0DF00 = 1;
  }
  v4 = sub_1403AA2B8(0x38uLL);
  v5 = v4;
  if ( !v4 )
    return (unsigned int)-1073741801;
  *(_OWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_OWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 48) = v4 + 40;
  *(_QWORD *)(v4 + 40) = v4 + 40;
  *(_QWORD *)(v4 + 16) = a1;
  *(_DWORD *)(v4 + 28) = a2;
  v6 = sub_1403CE3FC(a1, 0, &v9);
  if ( v6 < 0 )
    goto LABEL_11;
  if ( v9 == 1953784678 )
  {
    *(_DWORD *)(v5 + 32) |= 1u;
    v6 = sub_1403CE3FC(a1, 4u, &v10);
    if ( v6 < 0 )
      goto LABEL_11;
    if ( ((v10 - 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v6 = -1073741701;
      goto LABEL_11;
    }
    v6 = sub_1403CE3FC(a1, 8u, (_DWORD *)(v5 + 24));
    if ( v6 < 0 )
      goto LABEL_11;
  }
  else
  {
    *(_DWORD *)(v5 + 24) = 1;
  }
  v6 = sub_140B56268(v5);
  if ( v6 < 0 )
  {
LABEL_11:
    sub_1403A8CB4(v5);
    return (unsigned int)v6;
  }
  v7 = qword_140C0DF10;
  if ( *(__int64 **)(qword_140C0DF10 + 8) != &qword_140C0DF10 )
    __fastfail(3u);
  *(_QWORD *)v5 = qword_140C0DF10;
  *(_QWORD *)(v5 + 8) = &qword_140C0DF10;
  *(_QWORD *)(v7 + 8) = v5;
  qword_140C0DF10 = v5;
  return (unsigned int)v6;
}
