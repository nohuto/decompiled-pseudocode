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
