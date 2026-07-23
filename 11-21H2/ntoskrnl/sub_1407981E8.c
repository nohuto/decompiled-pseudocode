/*
 * XREFs of sub_1407981E8 @ 0x1407981E8
 * Callers:
 *     sub_1402E1140 @ 0x1402E1140 (sub_1402E1140.c)
 *     sub_140630D00 @ 0x140630D00 (sub_140630D00.c)
 *     sub_140635440 @ 0x140635440 (sub_140635440.c)
 *     sub_1406356A0 @ 0x1406356A0 (sub_1406356A0.c)
 *     sub_14065F10C @ 0x14065F10C (sub_14065F10C.c)
 *     sub_1406E6D40 @ 0x1406E6D40 (sub_1406E6D40.c)
 *     sub_1406E80C4 @ 0x1406E80C4 (sub_1406E80C4.c)
 *     sub_1406EA568 @ 0x1406EA568 (sub_1406EA568.c)
 *     sub_1406EC524 @ 0x1406EC524 (sub_1406EC524.c)
 *     sub_1406EC954 @ 0x1406EC954 (sub_1406EC954.c)
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406EEF3C @ 0x1406EEF3C (sub_1406EEF3C.c)
 *     sub_1406F01A4 @ 0x1406F01A4 (sub_1406F01A4.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_1407940E4 @ 0x1407940E4 (sub_1407940E4.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_140796C40 @ 0x140796C40 (sub_140796C40.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407FDA6C @ 0x1407FDA6C (sub_1407FDA6C.c)
 *     WmiQueryTraceInformation @ 0x140815520 (WmiQueryTraceInformation.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_140854CB8 @ 0x140854CB8 (sub_140854CB8.c)
 *     sub_140865450 @ 0x140865450 (sub_140865450.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409E48B8 @ 0x1409E48B8 (sub_1409E48B8.c)
 *     sub_1409E4B48 @ 0x1409E4B48 (sub_1409E4B48.c)
 *     sub_1409E4DAC @ 0x1409E4DAC (sub_1409E4DAC.c)
 *     sub_1409E4E94 @ 0x1409E4E94 (sub_1409E4E94.c)
 *     sub_1409E94C0 @ 0x1409E94C0 (sub_1409E94C0.c)
 *     sub_1409E9F80 @ 0x1409E9F80 (sub_1409E9F80.c)
 *     sub_1409EC088 @ 0x1409EC088 (sub_1409EC088.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 *     sub_1409EC9EC @ 0x1409EC9EC (sub_1409EC9EC.c)
 *     sub_1409ECB90 @ 0x1409ECB90 (sub_1409ECB90.c)
 *     sub_1409ED7D4 @ 0x1409ED7D4 (sub_1409ED7D4.c)
 *     sub_1409F5378 @ 0x1409F5378 (sub_1409F5378.c)
 *     sub_140A36BE0 @ 0x140A36BE0 (sub_140A36BE0.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall sub_1407981E8(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}
