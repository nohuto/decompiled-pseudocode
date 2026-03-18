/*
 * XREFs of HUBHSM_CheckingIfResetByParent @ 0x1C0008610
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x1C0007818 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 */

__int64 __fastcall HUBHSM_CheckingIfResetByParent(__int64 a1)
{
  return HUBPARENT_QueryParentIfDeviceWasReset(*(_QWORD *)(a1 + 960));
}
