/*
 * XREFs of LdrpInitMuiCritsRtlInitOnce @ 0x18009F46C
 * Callers:
 *     LdrpGetLoadAsEntry @ 0x1800089C4 (LdrpGetLoadAsEntry.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180026F50 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180070A50 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180071FE0 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS LdrpInitMuiCritsRtlInitOnce()
{
  _RTL_CRITICAL_SECTION *Parameter; // [rsp+38h] [rbp+10h] BYREF

  Parameter = &LoadAsDataCrits;
  return RtlRunOnceExecuteOnce(&LdrpInitOnceLoadAsDataCrits, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
}
