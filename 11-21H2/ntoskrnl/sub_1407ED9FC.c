/*
 * XREFs of sub_1407ED9FC @ 0x1407ED9FC
 * Callers:
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 *     sub_1407A2CB0 @ 0x1407A2CB0 (sub_1407A2CB0.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall sub_1407ED9FC(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
