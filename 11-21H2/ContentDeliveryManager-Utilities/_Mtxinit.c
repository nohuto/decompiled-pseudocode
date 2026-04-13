/*
 * XREFs of _Mtxinit @ 0x18000C4FC
 * Callers:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x180004BD8 (--0_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall Mtxinit(struct _RTL_CRITICAL_SECTION *a1)
{
  return _crtInitializeCriticalSectionEx(a1, 0xFA0u, 0);
}
