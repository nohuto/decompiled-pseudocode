/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x140695E68
 * Callers:
 *     MiAttachToSessionForBaseImage @ 0x1406420E4 (MiAttachToSessionForBaseImage.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2EC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB46C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB68 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
