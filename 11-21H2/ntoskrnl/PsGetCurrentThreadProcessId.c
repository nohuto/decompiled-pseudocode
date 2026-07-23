/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1402A7BC0
 * Callers:
 *     sub_1406CE5F8 @ 0x1406CE5F8 (sub_1406CE5F8.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_140865050 @ 0x140865050 (sub_140865050.c)
 *     sub_1409539A8 @ 0x1409539A8 (sub_1409539A8.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadProcessId()
{
  return *((_QWORD *)KeGetCurrentThread() + 153);
}
