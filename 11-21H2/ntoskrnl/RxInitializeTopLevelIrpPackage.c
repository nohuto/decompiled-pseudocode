/*
 * XREFs of RxInitializeTopLevelIrpPackage @ 0x1403BEAF0
 * Callers:
 *     sub_140A556B0 @ 0x140A556B0 (sub_140A556B0.c)
 * Callees:
 *     <none>
 */

__int64 *RxInitializeTopLevelIrpPackage()
{
  __int64 *result; // rax

  qword_140C4DD50 = 0LL;
  result = &qword_140C4DD40;
  qword_140C4DD48 = (__int64)&qword_140C4DD40;
  qword_140C4DD40 = (__int64)&qword_140C4DD40;
  return result;
}
