/*
 * XREFs of LogError @ 0x1C0067B14
 * Callers:
 *     ParseArgObj @ 0x1C00083D4 (ParseArgObj.c)
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     ParseName @ 0x1C000BE54 (ParseName.c)
 *     ParseNameTail @ 0x1C000D580 (ParseNameTail.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     Package @ 0x1C00122B0 (Package.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0015500 (ParseSuperName.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     ParseFieldList @ 0x1C0015C40 (ParseFieldList.c)
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     IfElse @ 0x1C0015FE0 (IfElse.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     AccFieldUnit @ 0x1C0016690 (AccFieldUnit.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     PushCall @ 0x1C0016ABC (PushCall.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     Store @ 0x1C0016F00 (Store.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     Method @ 0x1C0017300 (Method.c)
 *     Return @ 0x1C00174B0 (Return.c)
 *     WriteFieldLoop @ 0x1C0017A60 (WriteFieldLoop.c)
 *     WriteField @ 0x1C0017D20 (WriteField.c)
 *     ParseAcquire @ 0x1C0017EA0 (ParseAcquire.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     CreateXField @ 0x1C0018484 (CreateXField.c)
 *     PushScope @ 0x1C0018570 (PushScope.c)
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     Buffer @ 0x1C0018F50 (Buffer.c)
 *     Index @ 0x1C0019050 (Index.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C0019958 (CopyObjBuffer.c)
 *     Field @ 0x1C0019CE0 (Field.c)
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 *     AccessBaseField @ 0x1C001AE70 (AccessBaseField.c)
 *     WriteBuffField @ 0x1C001B368 (WriteBuffField.c)
 *     CreateField @ 0x1C001B760 (CreateField.c)
 *     Release @ 0x1C001C1A0 (Release.c)
 *     Acquire @ 0x1C001C290 (Acquire.c)
 *     ReadBuffField @ 0x1C001CA14 (ReadBuffField.c)
 *     NewGlobalHeap @ 0x1C0022190 (NewGlobalHeap.c)
 *     Load @ 0x1C0022220 (Load.c)
 *     LoadMemDDB @ 0x1C0022558 (LoadMemDDB.c)
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     ParseRelease @ 0x1C0024F10 (ParseRelease.c)
 *     OpRegion @ 0x1C0025430 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C0025584 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C00256B8 (AmlpValidateFirmwareMemoryAddress.c)
 *     ResetSignal @ 0x1C0026970 (ResetSignal.c)
 *     WriteCookAccess @ 0x1C0026A60 (WriteCookAccess.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     LogOp2_32 @ 0x1C00276D0 (LogOp2_32.c)
 *     ConcatenateResTemplate @ 0x1C00277F0 (ConcatenateResTemplate.c)
 *     NewObjOwner @ 0x1C00285B8 (NewObjOwner.c)
 *     ParseObjName @ 0x1C0028CA8 (ParseObjName.c)
 *     MidString @ 0x1C0028D90 (MidString.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     AMLIRegEventHandler @ 0x1C00292D8 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C00294BC (RegEventHandler.c)
 *     RegRSAccess @ 0x1C00294E4 (RegRSAccess.c)
 *     Wait @ 0x1C002A600 (Wait.c)
 *     ProcessIncDec @ 0x1C002AD60 (ProcessIncDec.c)
 *     PerformMutexDriverCallbacks @ 0x1C002AEB8 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C002AFB0 (InitMutex.c)
 *     PowerRes @ 0x1C002B420 (PowerRes.c)
 *     Processor @ 0x1C002B9F0 (Processor.c)
 *     ObjTypeSizeOf @ 0x1C002BEA0 (ObjTypeSizeOf.c)
 *     InitEvent @ 0x1C002DF60 (InitEvent.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     Notify @ 0x1C00319E0 (Notify.c)
 *     AcquireGL @ 0x1C0066318 (AcquireGL.c)
 *     GetFieldUnitRegionObj @ 0x1C00666B8 (GetFieldUnitRegionObj.c)
 *     RegOpcodeHandler @ 0x1C0066F34 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C00683E8 (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 *     SleepStall @ 0x1C0069CD0 (SleepStall.c)
 *     CopyObject @ 0x1C0069E40 (CopyObject.c)
 *     LoadTable @ 0x1C006A0B0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 *     ToString @ 0x1C006B340 (ToString.c)
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 *     SyncLoadDDB @ 0x1C00BC4EC (SyncLoadDDB.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BF108 (InitIllegalIOAddressListFromHAL.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C0067E6C (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  dword_1C0081AC8 = a1;
  if ( off_1C0080108 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0080100 + v4) )
    {
      ++v3;
      ++v1;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C0080100 + 2 * v3 + 1) )
        return;
    }
    v5 = 2LL * v1;
    RtlStringCchPrintfA(
      byte_1C0081ACC,
      0x100uLL,
      "AMLI_ERROR(%08x): %s",
      a1,
      *((const char **)&unk_1C0080100 + 2 * v1 + 1));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, a1, *((_QWORD *)&unk_1C0080100 + v5 + 1));
  }
}
