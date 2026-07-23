/*
 * XREFs of sub_1402AD350 @ 0x1402AD350
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_1404183E0 @ 0x1404183E0 (sub_1404183E0.c)
 *     sub_1404186A0 @ 0x1404186A0 (sub_1404186A0.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140658DCC @ 0x140658DCC (sub_140658DCC.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 */

void __fastcall sub_1402AD350(volatile __int32 *Object)
{
  _InterlockedExchange(Object + 29, 0);
  if ( *((_DWORD *)Object + 28) )
    sub_1403595B4((PVOID)(Object + 32), 0, 1);
  sub_1402AFC00((ULONG_PTR)(Object + 32));
  ObfDereferenceObject((PVOID)Object);
  KeLeaveCriticalRegion();
}
