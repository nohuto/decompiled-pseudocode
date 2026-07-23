/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140B4F454
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 *     ExInitSystemPhase2 @ 0x140B6740C (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessSpacesBootInformation @ 0x140383CD8 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessEtwEvents @ 0x140383DA0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403ABE10 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     BapdpProcessEDrvHintInfo @ 0x140B4D960 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140B4D9F0 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140B4DA80 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140B4DB68 (BapdpProcessBootMetadata.c)
 *     BapdpRecordIumStatus @ 0x140B4F34C (BapdpRecordIumStatus.c)
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 *     BapdpProcessResumeInformation @ 0x140B4F684 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140B4F758 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessHSTIResults @ 0x140B4F82C (BapdpProcessHSTIResults.c)
 *     BapdpRegisterWbclData @ 0x140B4F900 (BapdpRegisterWbclData.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B4FA18 (BapdpProcessVsmKeyBlobs.c)
 *     ExpInitializeMemoryMirroring @ 0x140B75BDC (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 Pool2; // rax

  if ( (__int64 *)qword_140D160F0 == &qword_140D160F0 )
  {
LABEL_11:
    if ( a1 == 2 )
    {
      BapdpProcessBCDCache(1LL);
      BapdpProcessVsmKeyBlobs(1LL);
    }
    return;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExpInitializeMemoryMirroring();
      BapdpProcessBootMetadata();
      BapdpProcessSpacesBootInformation(v1);
      BapdpRecordIumStatus();
      BapdpProcessEtwEvents(v2);
      BapdpProcessHSTIResults();
      BapdpMarshallBootDataToRegistry();
      v3 = (PVOID *)qword_140D160F8;
      v4 = (PVOID *)*((_QWORD *)qword_140D160F8 + 1);
      if ( *(__int64 **)qword_140D160F8 == &qword_140D160F0 )
      {
        while ( *v4 == v3 )
        {
          qword_140D160F8 = v4;
          *v4 = &qword_140D160F0;
          if ( v3 == (PVOID *)&qword_140D160F0 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140D160F8;
          if ( *(__int64 **)qword_140D160F8 != &qword_140D160F0 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140D160F8 + 1);
        }
      }
      __fastfail(3u);
    }
    goto LABEL_11;
  }
  BapdpProcessWmdResults();
  BapdpProcessResumeInformation();
  BapdpProcessBitlockerStatus();
  BapdpRegisterWbclData(0LL);
  BapdpRegisterWbclData(1LL);
  BapdpProcessBCDCache(0LL);
  BapdpProcessVsmKeyBlobs(0LL);
  BapdpProcessEDrvHintInfo(v5);
  BapdpProcessFwUpdateResults(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3696LL);
  if ( v7 )
  {
    Pool2 = ExAllocatePool2(64LL, 0x18uLL, 0x64506142u);
    ExpFwRamdiskInfo = Pool2;
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = *(_OWORD *)v7;
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(v7 + 16);
    }
  }
}
