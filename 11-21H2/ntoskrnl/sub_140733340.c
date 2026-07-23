/*
 * XREFs of sub_140733340 @ 0x140733340
 * Callers:
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_14066B42C @ 0x14066B42C (sub_14066B42C.c)
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 *     sub_1407A2CB0 @ 0x1407A2CB0 (sub_1407A2CB0.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_140883EDC @ 0x140883EDC (sub_140883EDC.c)
 *     sub_140883F24 @ 0x140883F24 (sub_140883F24.c)
 *     sub_1409F9244 @ 0x1409F9244 (sub_1409F9244.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140733340(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
    return *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1) + 4 * (v2 & 0x3FF);
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF)) + 4 * (v2 & 0x3FF);
  return v3 + 4 * v2;
}
