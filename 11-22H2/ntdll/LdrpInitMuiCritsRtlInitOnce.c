/*
 * XREFs of LdrpInitMuiCritsRtlInitOnce @ 0x18009E3DC
 * Callers:
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180008AE0 (LdrpGetLoadAsEntry.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS LdrpInitMuiCritsRtlInitOnce()
{
  _RTL_CRITICAL_SECTION *Parameter; // [rsp+38h] [rbp+10h] BYREF

  Parameter = &LoadAsDataCrits;
  return RtlRunOnceExecuteOnce(&LdrpInitOnceLoadAsDataCrits, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
}
