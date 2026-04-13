/*
 * XREFs of _Mtxinit @ 0x18000CBF0
 * Callers:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x180005268 (--0_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall Mtxinit(struct _RTL_CRITICAL_SECTION *a1)
{
  return _crtInitializeCriticalSectionEx(a1, 0xFA0u, 0);
}
