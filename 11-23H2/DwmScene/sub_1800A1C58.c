/*
 * XREFs of sub_1800A1C58 @ 0x1800A1C58
 * Callers:
 *     sub_1800A0D88 @ 0x1800A0D88 (sub_1800A0D88.c)
 *     sub_1800A0E14 @ 0x1800A0E14 (sub_1800A0E14.c)
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 *     sub_1800A2CD0 @ 0x1800A2CD0 (sub_1800A2CD0.c)
 *     sub_1800A2DA0 @ 0x1800A2DA0 (sub_1800A2DA0.c)
 *     sub_1800A2EC0 @ 0x1800A2EC0 (sub_1800A2EC0.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 *     sub_1800A38B4 @ 0x1800A38B4 (sub_1800A38B4.c)
 *     sub_1800EB3FE @ 0x1800EB3FE (sub_1800EB3FE.c)
 *     sub_1800EB410 @ 0x1800EB410 (sub_1800EB410.c)
 *     sub_1800EB429 @ 0x1800EB429 (sub_1800EB429.c)
 *     sub_1800EB442 @ 0x1800EB442 (sub_1800EB442.c)
 *     sub_1800EB45B @ 0x1800EB45B (sub_1800EB45B.c)
 *     sub_1800EB4CE @ 0x1800EB4CE (sub_1800EB4CE.c)
 *     sub_1800EB4E4 @ 0x1800EB4E4 (sub_1800EB4E4.c)
 *     sub_1800EB549 @ 0x1800EB549 (sub_1800EB549.c)
 *     sub_1800EB55F @ 0x1800EB55F (sub_1800EB55F.c)
 *     sub_1800EB58A @ 0x1800EB58A (sub_1800EB58A.c)
 *     sub_1800EB5D2 @ 0x1800EB5D2 (sub_1800EB5D2.c)
 *     sub_1800EB5E4 @ 0x1800EB5E4 (sub_1800EB5E4.c)
 *     sub_1800EB5F6 @ 0x1800EB5F6 (sub_1800EB5F6.c)
 *     sub_1800EB608 @ 0x1800EB608 (sub_1800EB608.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_1800A218C @ 0x1800A218C (sub_1800A218C.c)
 */

__int64 __fastcall sub_1800A1C58(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  result = sub_1800A218C();
  v3 = a1[21];
  if ( v3 )
    result = sub_180010530(v3);
  v4 = a1[19];
  if ( v4 )
    result = sub_180010530(v4);
  v5 = a1[3];
  if ( v5 )
    result = sub_180010530(v5);
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
    return sub_180010574(v6);
  return result;
}
