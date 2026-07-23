/*
 * XREFs of sub_1405A9E34 @ 0x1405A9E34
 * Callers:
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_140979A34 @ 0x140979A34 (sub_140979A34.c)
 * Callees:
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 */

__int64 __fastcall sub_1405A9E34(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx

  v5 = (_QWORD *)sub_1405A828C(
                   a2,
                   *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 192)
                                       + 138LL),
                   1,
                   a3);
  if ( !v5 )
    return 3221225495LL;
  *(_QWORD *)(a1 + 104) += a3;
  do
  {
    v7 = v5[3] & 0xFFFFFFFFFFLL;
    if ( v7 == 0x3FFFFFFFFFLL )
      v8 = 0LL;
    else
      v8 = 48 * v7 - 0x220000000000LL;
    *v5 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v5;
    sub_140313CA0((__int64)v5, 0LL, 0);
    v5 = (_QWORD *)v8;
  }
  while ( v8 );
  return 0LL;
}
