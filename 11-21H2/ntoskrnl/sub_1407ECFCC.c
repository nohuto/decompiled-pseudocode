/*
 * XREFs of sub_1407ECFCC @ 0x1407ECFCC
 * Callers:
 *     sub_1407EC34C @ 0x1407EC34C (sub_1407EC34C.c)
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     sub_1408277FC @ 0x1408277FC (sub_1408277FC.c)
 *     sub_14086172C @ 0x14086172C (sub_14086172C.c)
 * Callees:
 *     sub_1406E0BB8 @ 0x1406E0BB8 (sub_1406E0BB8.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_1407ED054 @ 0x1407ED054 (sub_1407ED054.c)
 *     sub_1407ED0C8 @ 0x1407ED0C8 (sub_1407ED0C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_1407ECFCC(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v7; // rcx

  v4 = sub_14075B444(a1, 0x5F0uLL);
  if ( v4 )
  {
    v5 = sub_1407ED0C8(a1, a2, 0LL);
    v4[1] = v5;
    if ( v5 )
    {
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)v4 + 7) = 1;
      *((_DWORD *)v4 + 14) = 2;
      v4[6] = v5;
      *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 28);
      sub_1407ED054(v4);
      return v4;
    }
    sub_1406E0C3C(1LL, (__int64)"SdbInitDatabaseInMemory");
    v7 = (_QWORD *)v4[1];
    if ( v7 )
      sub_1406E0BB8(v7);
    ExFreePoolWithTag(v4, 0x74705041u);
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbInitDatabaseInMemory");
  }
  return 0LL;
}
