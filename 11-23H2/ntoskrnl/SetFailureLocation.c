/*
 * XREFs of SetFailureLocation @ 0x1402F6C80
 * Callers:
 *     CmpDoFileRead @ 0x140207B68 (CmpDoFileRead.c)
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFiles @ 0x14068B784 (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmLoadKey @ 0x1406957C0 (CmLoadKey.c)
 *     CmpCheckLeaf @ 0x1406DCAF0 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     CmpCheckRegistry2 @ 0x1406DFB00 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x1406E0740 (CmpCheckKey.c)
 *     HvHiveStartFileBacked @ 0x140701414 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmCheckRegistry @ 0x140705420 (CmCheckRegistry.c)
 *     HvCheckHive @ 0x14070A2B0 (HvCheckHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070CBEC (CmpValidateHiveSecurityDescriptors.c)
 *     HvCheckBin @ 0x140745960 (HvCheckBin.c)
 *     HvpInitMap @ 0x14074EC60 (HvpInitMap.c)
 *     HvLoadHive @ 0x14074EF34 (HvLoadHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14074FB40 (HvpEnlistFreeCells.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     HvpPerformLogFileRecovery @ 0x14080055C (HvpPerformLogFileRecovery.c)
 *     HvHiveStartMemoryBacked @ 0x140826590 (HvHiveStartMemoryBacked.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x140826A78 (HvpBuildMapForMemoryBackedHive.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16CC8 (CmpResolveHiveLoadConflict.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CFB4 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1D134 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1D908 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x140A1DFA4 (HvpMapHiveImage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // [rsp+30h] [rbp-51h] BYREF
  int v12; // [rsp+34h] [rbp-4Dh] BYREF
  int v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-41h] BYREF
  char *v16; // [rsp+60h] [rbp-21h]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  int *v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+7Ch] [rbp-5h]
  int *v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+8Ch] [rbp+Bh]
  int *v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+9Ch] [rbp+1Bh]

  if ( (unsigned int)dword_140C04390 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v11;
    v19 = &v12;
    v22 = &v13;
    v25 = &v14;
    v12 = a3;
    v20 = 4;
    v13 = a4;
    v23 = 4;
    v26 = 4;
    v11 = a2;
    v17 = 1;
    v14 = a5;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C04390, byte_140037CCB, 0LL, 0LL, 6, v15);
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v10 = *(unsigned __int16 *)(a1 + 10);
      if ( (unsigned int)v10 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 9)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 8);
      if ( (unsigned int)v9 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 1)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
