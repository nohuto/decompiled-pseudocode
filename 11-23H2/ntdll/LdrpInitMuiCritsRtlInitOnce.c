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

__int64 LdrpInitMuiCritsRtlInitOnce()
{
  void *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = &LoadAsDataCrits;
  return RtlRunOnceExecuteOnce(
           &LdrpInitOnceLoadAsDataCrits,
           (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))NtdllRunOnceInitMuiCrits,
           (__int64)&v1,
           0LL);
}
