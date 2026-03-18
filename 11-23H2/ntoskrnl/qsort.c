/*
 * XREFs of qsort @ 0x1403DA430
 * Callers:
 *     MiTerminateWsleCluster @ 0x1402791A0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14027C5D0 (MiClearPteAccessed.c)
 *     MiInsertTbFlushEntry @ 0x14027F570 (MiInsertTbFlushEntry.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     RtlpDynamicLookasideRebalance @ 0x14032FED0 (RtlpDynamicLookasideRebalance.c)
 *     EtwpAllocateTraceBuffer @ 0x14037153C (EtwpAllocateTraceBuffer.c)
 *     HvlStartBootLogicalProcessors @ 0x140376140 (HvlStartBootLogicalProcessors.c)
 *     KiAddProcessorToCoreControlBlock @ 0x140381534 (KiAddProcessorToCoreControlBlock.c)
 *     KiAdjustGroupConfiguration @ 0x1403B6158 (KiAdjustGroupConfiguration.c)
 *     sub_1403E5500 @ 0x1403E5500 (sub_1403E5500.c)
 *     SymCryptParallelHashProcess @ 0x1403F6520 (SymCryptParallelHashProcess.c)
 *     ApiSetpPopulateHashes_V7 @ 0x140419610 (ApiSetpPopulateHashes_V7.c)
 *     HalpNumaAddRangeProximity @ 0x14051ADF0 (HalpNumaAddRangeProximity.c)
 *     VslInitializeSecureKernelCfg @ 0x14054B53C (VslInitializeSecureKernelCfg.c)
 *     IopCompactRemovePagesArray @ 0x14055CE70 (IopCompactRemovePagesArray.c)
 *     PpmCheckComputeHeteroResponse @ 0x140596470 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140596CC8 (PpmHeteroComputeCoreParkingUtilities.c)
 *     RtlCompareExchangePropertyStore @ 0x1405AA4B0 (RtlCompareExchangePropertyStore.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405C7180 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     AsiPopulateHashes @ 0x140615184 (AsiPopulateHashes.c)
 *     MiSortMdlFrames @ 0x140623878 (MiSortMdlFrames.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x14062ACA4 (MiSortPageFramesRemoveDuplicates.c)
 *     MiFillNoReservationCluster @ 0x140639468 (MiFillNoReservationCluster.c)
 *     MiFreePhysicalPages @ 0x14064A540 (MiFreePhysicalPages.c)
 *     MiProcessCrcList @ 0x1406B02D0 (MiProcessCrcList.c)
 *     PspBuildCreateProcessContext @ 0x140771168 (PspBuildCreateProcessContext.c)
 *     PnpAllocateResources @ 0x14078F4C4 (PnpAllocateResources.c)
 *     CmpLoadLayerVersions @ 0x14080D2D8 (CmpLoadLayerVersions.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14080F86C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     MmFreeBootRegistry @ 0x1408272CC (MmFreeBootRegistry.c)
 *     IopRearrangeReqList @ 0x1408532DC (IopRearrangeReqList.c)
 *     PipSortDeviceObjectList @ 0x1408688CC (PipSortDeviceObjectList.c)
 *     EtwpGetTraceGroupInfo @ 0x1408A7372 (EtwpGetTraceGroupInfo.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x1409C815C (RtlpFcUpdateFeatureConfiguration.c)
 *     RtlpFcUpdateUsageTriggers @ 0x1409C8344 (RtlpFcUpdateUsageTriggers.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EFEE0 (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A251A4 (CmpSortedValueEnumStackEntryStart.c)
 *     AdtpBuildObjectTypeStrings @ 0x140A5BD74 (AdtpBuildObjectTypeStrings.c)
 *     IntpAllocateProcessorContext @ 0x140B4E8E4 (IntpAllocateProcessorContext.c)
 *     PpmInitPolicyConfiguration @ 0x140B5BF50 (PpmInitPolicyConfiguration.c)
 *     MiAssignTopLevelRanges @ 0x140B5FC2C (MiAssignTopLevelRanges.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B65B38 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140B65F50 (HalpChannelInitializeStaticConfiguration.c)
 *     MiInitializeNumaGraph @ 0x140B74B14 (MiInitializeNumaGraph.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 *     HalpNumaParseHmat @ 0x140B913E4 (HalpNumaParseHmat.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140B95BCC (KiPerformAutomaticGroupConfiguration.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x140429BD0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  _BYTE *v11; // rbx
  char *i; // rdi
  size_t v13; // r8
  _BYTE *v14; // rdx
  __int64 v15; // rbx
  char v16; // cl
  size_t v17; // rbx
  char *v18; // rdi
  _BYTE *v19; // r8
  size_t v20; // r9
  char v21; // cl
  size_t v22; // r8
  _BYTE *v23; // rdx
  char *v24; // r9
  char v25; // cl
  size_t v26; // r8
  _BYTE *v27; // rdx
  __int64 v28; // r9
  char v29; // cl
  char *v30; // rbx
  char *v31; // rsi
  unsigned __int64 v32; // rbp
  char *v33; // rdx
  signed __int64 v34; // r9
  char v35; // cl
  char *v36; // rax
  __int64 v37; // [rsp+30h] [rbp-448h]
  _QWORD v38[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v39[62]; // [rsp+230h] [rbp-248h] BYREF

  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v37 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > Base )
            {
              do
              {
                v11 = Base;
                for ( i = (char *)Base + SizeOfElements; i <= v8; i += SizeOfElements )
                {
                  if ( ((int (__fastcall *)(char *, _BYTE *))PtFuncCompare)(i, v11) > 0 )
                    v11 = i;
                }
                v13 = SizeOfElements;
                v14 = v8;
                if ( v11 != v8 )
                {
                  v15 = v11 - v8;
                  do
                  {
                    v16 = v14[v15];
                    v14[v15] = *v14;
                    *v14++ = v16;
                    --v13;
                  }
                  while ( v13 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > Base );
              v9 = v37;
            }
            goto LABEL_18;
          }
          v17 = SizeOfElements * (v10 >> 1);
          v18 = (char *)Base + v17;
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, (char *)Base + v17) > 0 )
          {
            v20 = SizeOfElements;
            v19 = (char *)Base + v17;
            if ( Base != v18 )
            {
              do
              {
                v21 = v19[-v17];
                v19[-v17] = *v19;
                *v19++ = v21;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, _BYTE *, size_t))PtFuncCompare)(Base, v8, v19, v20) > 0 )
          {
            v22 = SizeOfElements;
            v23 = v8;
            if ( Base != v8 )
            {
              v24 = (char *)((_BYTE *)Base - v8);
              do
              {
                v25 = v23[(_QWORD)v24];
                v23[(_QWORD)v24] = *v23;
                *v23++ = v25;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)((char *)Base + v17, v8, v22) > 0 )
          {
            v26 = SizeOfElements;
            v27 = v8;
            if ( v18 != v8 )
            {
              v28 = v18 - v8;
              do
              {
                v29 = v27[v28];
                v27[v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          v30 = (char *)Base;
          v31 = v8;
          while ( 1 )
          {
            if ( v18 > v30 )
            {
              while ( 1 )
              {
                v30 += SizeOfElements;
                if ( v30 >= v18 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v30, v18, v26) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v30 += SizeOfElements;
            while ( v30 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v30, v18, v26) <= 0 );
            do
            {
LABEL_38:
              v32 = (unsigned __int64)v31;
              v31 -= SizeOfElements;
            }
            while ( v31 > v18 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v18) > 0 );
            if ( v31 < v30 )
              break;
            v26 = SizeOfElements;
            v33 = v31;
            if ( v31 != v30 )
            {
              v34 = v30 - v31;
              do
              {
                v35 = v33[v34];
                v33[v34] = *v33;
                *v33++ = v35;
                --v26;
              }
              while ( v26 );
            }
            v36 = v30;
            if ( v18 != v31 )
              v36 = v18;
            v18 = v36;
          }
          if ( (unsigned __int64)v18 < v32 )
          {
            while ( 1 )
            {
              v32 -= SizeOfElements;
              if ( v32 <= (unsigned __int64)v18 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v32, v18) )
                goto LABEL_53;
            }
          }
          do
            v32 -= SizeOfElements;
          while ( v32 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v32, v18) );
LABEL_53:
          v9 = v37;
          if ( (__int64)(v32 - (_QWORD)Base) >= v8 - v30 )
            break;
          if ( v30 < v8 )
          {
            v38[v37] = v30;
            v39[v37] = v8;
            v9 = ++v37;
          }
          if ( (unsigned __int64)Base >= v32 )
          {
LABEL_18:
            v37 = --v9;
            if ( v9 < 0 )
              return;
            Base = (void *)v38[v9];
            v8 = (char *)v39[v9];
          }
          else
          {
            v8 = (char *)v32;
          }
        }
        if ( (unsigned __int64)Base < v32 )
        {
          v38[v37] = Base;
          v39[v37] = v32;
          v9 = ++v37;
        }
        if ( v30 >= v8 )
          goto LABEL_18;
        Base = v30;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
