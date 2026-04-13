/*
 * XREFs of _Mtxdst @ 0x18000CBE0
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x180005300 (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
