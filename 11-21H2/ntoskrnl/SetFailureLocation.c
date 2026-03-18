/*
 * XREFs of SetFailureLocation @ 0x14020A890
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x1402509C4 (CmpDoFileRead.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmCheckRegistry @ 0x140689DC8 (CmCheckRegistry.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     HvHiveStartFileBacked @ 0x14068B3E0 (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x14068C238 (HvLoadHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14068C700 (HvpEnlistFreeCells.c)
 *     HvpInitMap @ 0x14068E154 (HvpInitMap.c)
 *     HvHiveStartMemoryBacked @ 0x14068F7C4 (HvHiveStartMemoryBacked.c)
 *     CmpCheckLeaf @ 0x14069A7B0 (CmpCheckLeaf.c)
 *     CmLoadKey @ 0x1406DD184 (CmLoadKey.c)
 *     CmpInitHiveFromFile @ 0x1407122B0 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140715FA8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     HvCheckHive @ 0x14079B3A0 (HvCheckHive.c)
 *     HvCheckBin @ 0x14079C640 (HvCheckBin.c)
 *     CmpCheckValueList @ 0x1407C4990 (CmpCheckValueList.c)
 *     CmpCheckRegistry2 @ 0x1407C5CB0 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x1407C6580 (CmpCheckKey.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408410FC (HvpBuildMapForMemoryBackedHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140919908 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140919A88 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14091A344 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x14091AB6C (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+6Ch] [rbp-15h]
  char *v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+7Ch] [rbp-5h]
  __int64 *v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  char *v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]

  if ( (unsigned int)dword_140C03868 > 5 )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v14 = &v11;
    v17 = (char *)&v11 + 4;
    v20 = &v12;
    v23 = (char *)&v12 + 4;
    HIDWORD(v11) = a3;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    LOBYTE(v11) = a2;
    v15 = 1;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03868, &word_140036666, 0LL, 0LL, 6, v13, v11, __PAIR64__(a5, a4));
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
