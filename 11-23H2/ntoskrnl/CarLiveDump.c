/*
 * XREFs of CarLiveDump @ 0x1405D6000
 * Callers:
 *     CarDoLiveDump @ 0x1405D5F40 (CarDoLiveDump.c)
 * Callees:
 *     CarEtwWriteLiveDumpEvent @ 0x1405D3400 (CarEtwWriteLiveDumpEvent.c)
 *     CarDeleteTelemetryData @ 0x1405D4054 (CarDeleteTelemetryData.c)
 *     DifiDbgPrint @ 0x1405D5BB4 (DifiDbgPrint.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140883720 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CarLiveDump(PVOID P)
{
  int v2; // eax
  int v3; // edx
  int v4; // r8d

  v2 = DbgkWerCaptureLiveKernelDump(
         (unsigned int)L"VerifierExt",
         452,
         qword_140C34EC8,
         qword_140C34ED0,
         qword_140C34ED8,
         qword_140C34EE0,
         CarLiveDumpData,
         (__int64)CarLiveDumpCallBack,
         0);
  if ( v2 >= 0 )
  {
    if ( CarLiveDumpData )
      CarEtwWriteLiveDumpEvent((int *)CarLiveDumpData, v3, v4);
    CarPreviousDumpTime = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    DifiDbgPrint("Livedump failed with Status code: 0x%X \n", v2);
  }
  if ( qword_140C34EE8 )
  {
    ExFreePoolWithTag(qword_140C34EE8, 0x4E726143u);
    qword_140C34EE8 = 0LL;
  }
  CarDeleteTelemetryData((void **)&CarLiveDumpData);
  if ( P )
    ExFreePoolWithTag(P, 0x4E726143u);
  _InterlockedExchange(&CarLkdInProgress, 0);
}
