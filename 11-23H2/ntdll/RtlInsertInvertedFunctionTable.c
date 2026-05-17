/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x18002C14C
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD320 (LdrpInitializeExceptionTable.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x18002C1BC (RtlCaptureImageExceptionValues.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x18002C284 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(__int64 a1, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  RtlCaptureImageExceptionValues(a1, &v7, &v6);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v4, v3, v7, a2, v6);
  LdrProtectMrdata(1LL);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
