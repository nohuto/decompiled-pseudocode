/*
 * XREFs of sub_1C00ABC80 @ 0x1C00ABC80
 * Callers:
 *     <none>
 * Callees:
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 */

__int64 __fastcall sub_1C00ABC80(PDRIVER_OBJECT DriverObject, ULONG_PTR BugCheckParameter3, __int64 a3, __int64 a4)
{
  if ( !qword_1C0094148 )
    qword_1C0094148 = (__int64)MmLockPagableDataSection(sub_1C00B21D0);
  if ( !DriverObject || !BugCheckParameter3 )
    KeBugCheckEx(0xF1u, 0x2000uLL, (ULONG_PTR)DriverObject, BugCheckParameter3, 0LL);
  return StorPortInitialize(DriverObject, BugCheckParameter3, a3, a4);
}
