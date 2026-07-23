/*
 * XREFs of sub_1403BE4F0 @ 0x1403BE4F0
 * Callers:
 *     sub_1403BCBD0 @ 0x1403BCBD0 (sub_1403BCBD0.c)
 *     sub_1403BD04C @ 0x1403BD04C (sub_1403BD04C.c)
 *     sub_1403BD0FC @ 0x1403BD0FC (sub_1403BD0FC.c)
 *     sub_1403BD8C8 @ 0x1403BD8C8 (sub_1403BD8C8.c)
 *     sub_1405307FC @ 0x1405307FC (sub_1405307FC.c)
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 * Callees:
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 */

__int64 __fastcall sub_1403BE4F0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  ULONG_PTR v5; // rcx
  __int64 result; // rax

  v3 = a2;
  if ( !byte_140C09780 )
    return 3221225865LL;
  v4 = sub_1403BF104(45LL, 1LL);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  *(_QWORD *)(v4 + 29) = 0LL;
  *(_QWORD *)(v4 + 37) = 0LL;
  *(_DWORD *)(v4 + 8) = 3;
  *(_BYTE *)(v4 + 12) = 33;
  *(_QWORD *)(v4 + 13) = a1;
  *(_QWORD *)(v4 + 21) = v3;
  *(_QWORD *)v4 = qword_140D68688;
  result = 0LL;
  qword_140D68688 = v5;
  return result;
}
