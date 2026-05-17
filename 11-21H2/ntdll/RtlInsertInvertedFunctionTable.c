/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x18003449C
 * Callers:
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD1F0 (LdrpInitializeExceptionTable.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x18003450C (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x1800345EC (RtlCaptureImageExceptionValues.c)
 */

signed __int64 __fastcall RtlInsertInvertedFunctionTable(__int64 a1, int a2)
{
  int v3; // edi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  RtlCaptureImageExceptionValues(a1, &v16, &v15);
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, v4, v5, v6);
  LdrProtectMrdata(0, v7, v8, v9);
  RtlpInsertInvertedFunctionTableEntry(v10, v3, v16, a2, v15);
  LdrProtectMrdata(1, v11, v12, v13);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
