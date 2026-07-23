/*
 * XREFs of CmpMountPreloadedHives @ 0x1408632CC
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlAreBitsClear @ 0x140220900 (RtlAreBitsClear.c)
 *     RtlAppendUnicodeToString @ 0x14022A880 (RtlAppendUnicodeToString.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 *     RtlNumberOfSetBits @ 0x140293450 (RtlNumberOfSetBits.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     RtlSetBits @ 0x1402E0530 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1402E1AE0 (RtlSetAllBits.c)
 *     SetFailureLocation @ 0x1402F69F0 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     TmEnableCallbacks @ 0x1403D7E50 (TmEnableCallbacks.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140695B38 (CmpQueryHiveRedirectionFileList.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407034AC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpDoFileSetSizeEx @ 0x14074D908 (CmpDoFileSetSizeEx.c)
 *     CmpInitializeActualFileSizes @ 0x140751538 (CmpInitializeActualFileSizes.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1407696FC (CmpLockRegistryExclusive.c)
 *     CmRmFinalizeRecovery @ 0x1407E8CA8 (CmRmFinalizeRecovery.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
 *     ExRaiseHardError @ 0x140A00C30 (ExRaiseHardError.c)
 *     CmpDiskFullWarning @ 0x140A11AF8 (CmpDiskFullWarning.c)
 *     SyspartGetSystemPartition @ 0x140A5F37C (SyspartGetSystemPartition.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // edi
  wchar_t *p_Length; // rbx
  __int64 v2; // rsi
  int v3; // eax
  int v4; // r13d
  int v5; // eax
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  int SystemPartition; // ebx
  unsigned int v9; // r12d
  ULONG v10; // ebx
  ULONG v11; // eax
  int v12; // r12d
  unsigned int v13; // r12d
  ULONG i; // r12d
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  PKRESOURCEMANAGER *v21; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v24[2]; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v25; // [rsp+74h] [rbp-94h] BYREF
  int v26; // [rsp+78h] [rbp-90h] BYREF
  int v27; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v28; // [rsp+80h] [rbp-88h]
  int v29; // [rsp+84h] [rbp-84h] BYREF
  int v30; // [rsp+88h] [rbp-80h] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING *Pool2; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v36[54]; // [rsp+B8h] [rbp-50h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v37; // [rsp+268h] [rbp+160h] BYREF

  v0 = 0;
  v24[1] = 0;
  v30 = 0;
  v29 = 0;
  Destination_8 = 0LL;
  memset(v36, 0, sizeof(v36));
  v25 = 0;
  v34 = 0LL;
  v26 = 0;
  v35 = 0LL;
  memset(&v37, 0, sizeof(v37));
  v24[0] = 0;
  v33 = 0LL;
  *(_DWORD *)Source = 0;
  *(_QWORD *)Length = 0LL;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 4096LL, 1649626435LL);
  p_Length = &Pool2->Length;
  if ( !Pool2 )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v2 = CmpPreloadedHivesList;
  if ( (__int64 *)CmpPreloadedHivesList != &CmpPreloadedHivesList )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 - 1464);
      v4 = v3 & 0x1000000;
      v27 = v3 & 0x1000000;
      if ( (v3 & 1) != 0 )
        goto LABEL_45;
      *(_QWORD *)&Destination_8.Length = 0x10000000LL;
      Destination_8.Buffer = p_Length;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)(v2 + 232), &Destination_8) || Destination_8.Length == 2 )
        break;
LABEL_17:
      ExFreePoolWithTag(*(PVOID *)(v2 + 208), 0);
      *(_OWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 202) = 0;
      *(_QWORD *)(v2 + 208) = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 0, &v33, v24, 7u, 0LL, (int *)Length, 0LL, 0LL, (__int64)v36);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_52:
        *(_QWORD *)(v2 - 1568) = v36;
        v36[0] = v2 - 1624;
        SetFailureLocation(*(_QWORD *)(v2 - 1568), 0, 21, SystemPartition, v0);
        CmpPuntBoot = 1;
        Pool2 = &Destination_8;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &Pool2, 1, &v30);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1624, SystemPartition);
      }
      v9 = 2;
      if ( v24[0] == 2 )
        v9 = 18;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 4, &v34, &v25, v9, 0LL, 0LL, 0LL, 0LL, (__int64)v36);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_52;
      }
      SystemPartition = CmpOpenHiveFile(&Destination_8, 5, &v35, &v26, v9, 0LL, 0LL, 0LL, 0LL, (__int64)v36);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_52;
      }
      v10 = Length[0];
      *(_QWORD *)(v2 - 80) = v33;
      *(_QWORD *)(v2 - 48) = v34;
      *(_QWORD *)(v2 - 40) = v35;
      v11 = Length[1];
      *(_DWORD *)(v2 - 1464) &= ~2u;
      v12 = *(_DWORD *)(v2 - 1344);
      *(_DWORD *)(v2 - 1436) = v11;
      v13 = v12 + 4096;
      v28 = v13;
      if ( *(_DWORD *)(v2 - 1488) != v10 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1536); i += v10 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1536), i, v10) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1536), i, v10);
        }
        v15 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1536));
        v4 = v27;
        v13 = v28;
        *(_DWORD *)(v2 - 1520) = v15;
        *(_DWORD *)(v2 - 1488) = v10;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1624, &v29);
      if ( SystemPartition < 0 )
      {
        v0 = 64;
        goto LABEL_52;
      }
      if ( (int)CmpDoFileSetSizeEx(v2 - 1624, 0, v13, 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      if ( v4 )
      {
        *(_QWORD *)(*(_QWORD *)(v2 - 1560) + 12LL) = MEMORY[0xFFFFF78000000014];
        HvCheckAndUpdateHiveBackupTimeStamp(v2 - 1624);
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) || v4 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 - 1536));
        *(_DWORD *)(v2 - 1520) = *(_DWORD *)(v2 - 1536);
      }
      SystemPartition = HvpDropPagedBins(v2 - 1624);
      if ( SystemPartition < 0 )
      {
        v0 = 96;
        goto LABEL_52;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) || v4 )
      {
        CmpUnlockRegistry(v17, v16, v18, v19);
        CmpFlushHive(v2 - 1624, 0xCu);
        CmpLockRegistryExclusive();
        *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) = 0;
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      v20 = *(_DWORD *)(v2 - 1464);
      *(_DWORD *)(v2 - 1464) = v20 & 0xFFFFF7FF;
      CmpUnlockRegistry(v17, v16, v18, v19);
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v37);
      CmpInitCmRM(v2 - 1624, (v20 & 0x800) != 0);
      KiUnstackDetachProcess(&v37);
      v21 = *(PKRESOURCEMANAGER **)(v2 + 2528);
      *(_DWORD *)(v2 + 2488) |= 8u;
      if ( v21 )
      {
        TmEnableCallbacks(v21[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v21);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2528));
      }
      CmpLockRegistryExclusive();
      p_Length = &Pool2->Length;
LABEL_45:
      *(_DWORD *)(v2 + 2488) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    *(_QWORD *)&Destination_8.Length = 0x10000000LL;
    Destination_8.Buffer = p_Length;
    v5 = *(_DWORD *)(v2 - 1464);
    if ( (v5 & 0x1000) != 0 )
    {
      v6 = PdcCreateWatchdogAroundClientCall();
      Source[0] = **((_WORD **)PsGetServerSiloGlobals(v6) + 159);
      RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
      RtlAppendUnicodeToString(&Destination_8, Source);
      v7 = L":";
    }
    else
    {
      if ( (v5 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(p_Length);
        if ( SystemPartition < 0 )
          goto LABEL_52;
        goto LABEL_16;
      }
      if ( (v5 & 0x200000) == 0 )
      {
LABEL_16:
        RtlAppendUnicodeToString(&Destination_8, *(PCWSTR *)(v2 + 208));
        goto LABEL_17;
      }
      v7 = L"\\OSDataRoot";
    }
    RtlAppendUnicodeToString(&Destination_8, v7);
    goto LABEL_16;
  }
LABEL_3:
  ExFreePoolWithTag(p_Length, 0);
}
