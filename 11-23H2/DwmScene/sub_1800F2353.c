/*
 * XREFs of sub_1800F2353 @ 0x1800F2353
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800E1B50 @ 0x1800E1B50 (sub_1800E1B50.c)
 */

__int64 __fastcall sub_1800F2353(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  sub_18001DB68(&stru_1801C8648, 3, "ComputeTangents threw exception");
  *(_OWORD *)(a2 + 88) = 0LL;
  sub_1800E1B50(*(_QWORD *)(a2 + 312), a2 + 88);
  v3 = *(_QWORD *)(a2 + 96);
  if ( v3 )
    sub_180010530(v3);
  return 0LL;
}
