/*
 * XREFs of ?IsEmpty@?$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ @ 0x18001F250
 * Callers:
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001F1A0 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGenericSet<CWindowData *>::IsEmpty(struct _RTL_GENERIC_TABLE *a1)
{
  return RtlIsGenericTableEmpty(a1) != 0;
}
