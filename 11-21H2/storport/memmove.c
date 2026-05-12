/*
 * XREFs of memmove @ 0x1C0024080
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002DE0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C0005970 (RaidXrbSetDataBufferAddress.c)
 *     StorUnmapSenseInfo @ 0x1C0008570 (StorUnmapSenseInfo.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C00118A8 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0017428 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     StorCreateAnsiString @ 0x1C00185BC (StorCreateAnsiString.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0018B30 (StorpTelemetryMiniportEventWStr.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C001A598 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C001BF90 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001E9DC (RaidBusEnumeratorProcessNewUnit.c)
 *     TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C0020A58 (TranslateScsiRequestBlockToScsiCdb16SrbExData.c)
 *     RaUnitStreamsIoctl @ 0x1C0021128 (RaUnitStreamsIoctl.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0022154 (PortPassThroughMarshalResultsFromSrb.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0022AAC (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     memcpy_s @ 0x1C0022C58 (memcpy_s.c)
 *     RaGetProtocolCommandEffects @ 0x1C0033264 (RaGetProtocolCommandEffects.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0039B18 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0039DBC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidInitializeCryptoEngine @ 0x1C0039F00 (RaidInitializeCryptoEngine.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C003B7BC (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaidAddEnclosureIdMapping @ 0x1C003EF90 (RaidAddEnclosureIdMapping.c)
 *     RaMiniportSaveFeatureList @ 0x1C00410A8 (RaMiniportSaveFeatureList.c)
 *     StorPortMoveMemory @ 0x1C00437A0 (StorPortMoveMemory.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00446A8 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C00472D0 (StorpUnitInitializePoFxPower.c)
 *     StorpPopulateErrorData @ 0x1C004C5C8 (StorpPopulateErrorData.c)
 *     StorpPopulateLogData @ 0x1C004C728 (StorpPopulateLogData.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C004D178 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C004D828 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     StorCreateSystemLogEntry @ 0x1C004FB2C (StorCreateSystemLogEntry.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0050C60 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005339C (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0053504 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C005366C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0053958 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitHierarchicalReset @ 0x1C0054BE4 (RaidUnitHierarchicalReset.c)
 *     RaidAdapterWmiDeferredRoutine @ 0x1C0058310 (RaidAdapterWmiDeferredRoutine.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C00635DC (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     ReplaceDeviceId @ 0x1C00651D0 (ReplaceDeviceId.c)
 *     PortpBinaryReadCallBack @ 0x1C00688C0 (PortpBinaryReadCallBack.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0068F38 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C0069108 (PortPassThroughExNormalize.c)
 *     PortTraceErrorDrainList @ 0x1C00693A4 (PortTraceErrorDrainList.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C00849B4 (RaGetUnitStorageDeviceProperty.c)
 *     PortpRegQueryRoutine @ 0x1C00872A0 (PortpRegQueryRoutine.c)
 *     PortPassThroughSrbInitialize @ 0x1C0088C60 (PortPassThroughSrbInitialize.c)
 *     RaWmiIrpRegisterRequest @ 0x1C00895EC (RaWmiIrpRegisterRequest.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0089B30 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C008D0BC (RaidGetStorageAdapterFruIdProperty.c)
 *     RaSaveDriverInitData @ 0x1C008E090 (RaSaveDriverInitData.c)
 *     WppInitGlobalLogger @ 0x1C008E1A0 (WppInitGlobalLogger.c)
 *     WppTraceCallback @ 0x1C008E5F0 (WppTraceCallback.c)
 *     RaDuplicateCmResourceList @ 0x1C008EDC8 (RaDuplicateCmResourceList.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C008F264 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x1C008F8BC (RaUnitStorageManageBypassIOIoctl.c)
 *     StorAdapterQueryIdentifyControllerProperty @ 0x1C00906A4 (StorAdapterQueryIdentifyControllerProperty.c)
 *     StorUnitQueryDeviceIdentifyIoCommandSetProperty @ 0x1C0090710 (StorUnitQueryDeviceIdentifyIoCommandSetProperty.c)
 *     StorUnitQueryDeviceIdentifyNamespaceProperty @ 0x1C0090794 (StorUnitQueryDeviceIdentifyNamespaceProperty.c)
 *     StorUnitAssignNVMeIdentity @ 0x1C0090984 (StorUnitAssignNVMeIdentity.c)
 *     PortpReadDriverParameterEntry @ 0x1C00932FC (PortpReadDriverParameterEntry.c)
 *     PortQueryInterfaceFdoQdr @ 0x1C0093A80 (PortQueryInterfaceFdoQdr.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0093BB0 (PortPassThroughExBuildSrbEx.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
