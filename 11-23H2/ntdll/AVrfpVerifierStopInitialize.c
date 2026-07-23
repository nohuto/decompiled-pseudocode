/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x1800E6D28
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C230 (RtlInitAnsiString.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 */

__int64 AVrfpVerifierStopInitialize()
{
  __int64 i; // rbx
  void *v2; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  PVOID *Callback; // [rsp+48h] [rbp+0h]
  PVOID ProcedureAddress; // [rsp+50h] [rbp+8h] BYREF

  for ( i = AVrfpVerifierProvidersList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AVrfpVerifierProvidersList )
      goto LABEL_5;
    if ( !wcsicmp(*(const wchar_t **)(i + 24), L"verifier.dll") )
      break;
  }
  v2 = *(void **)(*(_QWORD *)(i + 32) + 48LL);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v2, &DestinationString, 0, &ProcedureAddress, 0, Callback);
  if ( ProcedureAddressForCaller >= 0 )
    AVrfpVerifierStopMessageFunction = (__int64)ProcedureAddress;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddressForCaller;
}
