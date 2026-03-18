/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1C0007768
 * Callers:
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     WriteCookAccess @ 0x1C0005DA0 (WriteCookAccess.c)
 *     Notify @ 0x1C00062C0 (Notify.c)
 *     SleepStall @ 0x1C0006400 (SleepStall.c)
 *     ObjTypeSizeOf @ 0x1C00067D0 (ObjTypeSizeOf.c)
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F58 (AMLIEvalPkgDataElement.c)
 *     AMLIRegEventHandler @ 0x1C0048A9C (AMLIRegEventHandler.c)
 *     AcquireGL @ 0x1C004ACD0 (AcquireGL.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C004AD68 (AmlpValidateFirmwareMemoryAddress.c)
 *     DupObjData @ 0x1C004AF24 (DupObjData.c)
 *     FreeObjData @ 0x1C004B564 (FreeObjData.c)
 *     GetFieldUnitRegionObj @ 0x1C004B964 (GetFieldUnitRegionObj.c)
 *     MapUnmapPhysMem @ 0x1C004BF60 (MapUnmapPhysMem.c)
 *     NewObjData @ 0x1C004C1BC (NewObjData.c)
 *     NewObjOwner @ 0x1C004C344 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C004CA14 (PerformMutexDriverCallbacks.c)
 *     RegEventHandler @ 0x1C004CC2C (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x1C004CC88 (RegOpcodeHandler.c)
 *     RegRSAccess @ 0x1C004CD44 (RegRSAccess.c)
 *     ValidateArgTypes @ 0x1C004CF0C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D510 (ValidateTarget.c)
 *     NewGlobalHeap @ 0x1C004EFC4 (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C004F07C (NewLocalHeap.c)
 *     CreateNameSpaceObject @ 0x1C004F12C (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004F860 (GetNameSpaceObjectNoLock.c)
 *     LoadDDB @ 0x1C004FA60 (LoadDDB.c)
 *     LoadFieldUnitDDB @ 0x1C004FB88 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004FD6C (LoadMemDDB.c)
 *     BankField @ 0x1C004FED0 (BankField.c)
 *     CreateField @ 0x1C0050220 (CreateField.c)
 *     CreateXField @ 0x1C0050394 (CreateXField.c)
 *     Field @ 0x1C00505D0 (Field.c)
 *     IndexField @ 0x1C0050760 (IndexField.c)
 *     InitEvent @ 0x1C005095C (InitEvent.c)
 *     InitMutex @ 0x1C0050A1C (InitMutex.c)
 *     Method @ 0x1C0050B00 (Method.c)
 *     OpRegion @ 0x1C0050D20 (OpRegion.c)
 *     PowerRes @ 0x1C0050EA0 (PowerRes.c)
 *     Processor @ 0x1C0051010 (Processor.c)
 *     AccessBaseField @ 0x1C00517D0 (AccessBaseField.c)
 *     RawFieldAccess @ 0x1C0052780 (RawFieldAccess.c)
 *     ReadBuffField @ 0x1C0052A34 (ReadBuffField.c)
 *     ReadField @ 0x1C0052B00 (ReadField.c)
 *     WriteBuffField @ 0x1C0052FDC (WriteBuffField.c)
 *     WriteField @ 0x1C00530B0 (WriteField.c)
 *     WriteObject @ 0x1C00532C0 (WriteObject.c)
 *     PushCall @ 0x1C0053B18 (PushCall.c)
 *     PushFrame @ 0x1C0053C54 (PushFrame.c)
 *     PushTerm @ 0x1C0053E38 (PushTerm.c)
 *     AcquireASLMutex @ 0x1C0054288 (AcquireASLMutex.c)
 *     AsyncEvalObject @ 0x1C00544F0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005498C (NestAsyncEvalObject.c)
 *     SyncEvalObject @ 0x1C0054EAC (SyncEvalObject.c)
 *     IfElse @ 0x1C0055590 (IfElse.c)
 *     Load @ 0x1C00556E0 (Load.c)
 *     Release @ 0x1C0055870 (Release.c)
 *     ResetSignal @ 0x1C00559E0 (ResetSignal.c)
 *     Acquire @ 0x1C0055CB0 (Acquire.c)
 *     Buffer @ 0x1C0055E10 (Buffer.c)
 *     Concat @ 0x1C0055F80 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00562B0 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0056570 (CopyObject.c)
 *     Index @ 0x1C0056C20 (Index.c)
 *     LoadTable @ 0x1C0056EA0 (LoadTable.c)
 *     LogOp2_32 @ 0x1C0057348 (LogOp2_32.c)
 *     MidString @ 0x1C0057B60 (MidString.c)
 *     Package @ 0x1C0058010 (Package.c)
 *     ParsePackage @ 0x1C0058180 (ParsePackage.c)
 *     ProcessIncDec @ 0x1C0058530 (ProcessIncDec.c)
 *     ProcessLoadTable @ 0x1C0058630 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C0058CE0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590D0 (ToHexStr.c)
 *     ToString @ 0x1C0059470 (ToString.c)
 *     Wait @ 0x1C0059650 (Wait.c)
 *     ParseAcquire @ 0x1C005A110 (ParseAcquire.c)
 *     ParseAndGetNameSpaceObject @ 0x1C005A3D4 (ParseAndGetNameSpaceObject.c)
 *     ParseArg @ 0x1C005A48C (ParseArg.c)
 *     ParseArgObj @ 0x1C005A600 (ParseArgObj.c)
 *     ParseCall @ 0x1C005A6C0 (ParseCall.c)
 *     ParseField @ 0x1C005AB50 (ParseField.c)
 *     ParseFieldConnection @ 0x1C005AF80 (ParseFieldConnection.c)
 *     ParseFieldList @ 0x1C005B250 (ParseFieldList.c)
 *     ParseIntObj @ 0x1C005B3C0 (ParseIntObj.c)
 *     ParseName @ 0x1C005B880 (ParseName.c)
 *     ParseNameTail @ 0x1C005BA28 (ParseNameTail.c)
 *     ParseObjName @ 0x1C005BC24 (ParseObjName.c)
 *     ParseOpcode @ 0x1C005BD60 (ParseOpcode.c)
 *     ParseRelease @ 0x1C005BF90 (ParseRelease.c)
 *     ParseString @ 0x1C005C460 (ParseString.c)
 *     ParseSuperName @ 0x1C005C58C (ParseSuperName.c)
 *     ParseTerm @ 0x1C005C7B0 (ParseTerm.c)
 *     AMLIInitialize @ 0x1C00AAAC0 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00AB6B0 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00AB83C (SyncLoadDDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceAmlError(__int64 a1, int a2)
{
  int v2; // r10d
  int v3; // r9d
  __int64 v4; // rax
  char *v5; // rdx
  __int64 *v6; // r8
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  char *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int16 v13; // ax
  int v15; // [rsp+30h] [rbp-19h] BYREF
  char v16; // [rsp+34h] [rbp-15h]
  int v17; // [rsp+38h] [rbp-11h] BYREF
  char v18; // [rsp+3Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+50h] [rbp+7h]
  int v21; // [rsp+58h] [rbp+Fh]
  int v22; // [rsp+5Ch] [rbp+13h]
  int *v23; // [rsp+60h] [rbp+17h]
  __int64 v24; // [rsp+68h] [rbp+1Fh]
  __int64 v25; // [rsp+70h] [rbp+27h] BYREF
  __int16 v26; // [rsp+78h] [rbp+2Fh]
  __int64 v27; // [rsp+80h] [rbp+37h] BYREF
  __int16 v28; // [rsp+88h] [rbp+3Fh]
  int v29; // [rsp+B8h] [rbp+6Fh] BYREF

  v29 = a2;
  v28 = 0;
  v27 = 0x41002F004ELL;
  v25 = 0x41002F004ELL;
  v26 = 0;
  v2 = 3;
  v18 = 0;
  v3 = 3;
  v16 = 0;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v5 = (char *)&v15;
      v15 = *(_DWORD *)(v4 + 40);
      v6 = &v25;
      v7 = 4LL;
      do
      {
        v8 = *v5++;
        *(_WORD *)v6 = v8;
        v6 = (__int64 *)((char *)v6 + 2);
        --v7;
      }
      while ( v7 );
      v26 = 0;
      v3 = 5;
    }
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
    {
      v10 = (char *)&v17;
      v17 = *(_DWORD *)(v9 + 40);
      v11 = &v27;
      v12 = 4LL;
      do
      {
        v13 = *v10++;
        *(_WORD *)v11 = v13;
        v11 = (__int64 *)((char *)v11 + 2);
        --v12;
      }
      while ( v12 );
      v28 = 0;
      v2 = 5;
    }
  }
  UserData.Ptr = (unsigned __int64)&v25;
  UserData.Reserved = 0;
  UserData.Size = 2 * v3;
  v22 = 0;
  v20 = &v27;
  v24 = 4LL;
  v21 = 2 * v2;
  v23 = &v29;
  return EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
}
