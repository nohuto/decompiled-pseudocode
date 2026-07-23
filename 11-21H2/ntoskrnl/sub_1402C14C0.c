/*
 * XREFs of sub_1402C14C0 @ 0x1402C14C0
 * Callers:
 *     sub_1402C0900 @ 0x1402C0900 (sub_1402C0900.c)
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402E9540 @ 0x1402E9540 (sub_1402E9540.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402C14C0(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 6);
  if ( !a2 )
    return (v3 << 9) + v2 + 7232;
  if ( a2 == 1 )
    return (v3 << 9) + v2 + 11328;
  return 24512LL * *((unsigned int *)a1 + 2)
       + ((v3 + 8LL * *((unsigned int *)a1 + 7)) << 9)
       + *(_QWORD *)(v2 + 16)
       + 6080LL;
}
