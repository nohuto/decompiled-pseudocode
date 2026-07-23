/*
 * XREFs of KeWaitForSingleObject @ 0x1402AF080
 * Callers:
 *     sub_140224624 @ 0x140224624 (sub_140224624.c)
 *     sub_140224980 @ 0x140224980 (sub_140224980.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14022EBF8 @ 0x14022EBF8 (sub_14022EBF8.c)
 *     sub_140230070 @ 0x140230070 (sub_140230070.c)
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_1402375D8 @ 0x1402375D8 (sub_1402375D8.c)
 *     sub_14023AFD8 @ 0x14023AFD8 (sub_14023AFD8.c)
 *     sub_14023F3E8 @ 0x14023F3E8 (sub_14023F3E8.c)
 *     IoSynchronousCallDriver @ 0x140245250 (IoSynchronousCallDriver.c)
 *     sub_1402459E8 @ 0x1402459E8 (sub_1402459E8.c)
 *     sub_140246604 @ 0x140246604 (sub_140246604.c)
 *     sub_140248854 @ 0x140248854 (sub_140248854.c)
 *     sub_140248914 @ 0x140248914 (sub_140248914.c)
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_14024F140 @ 0x14024F140 (sub_14024F140.c)
 *     sub_1402509C4 @ 0x1402509C4 (sub_1402509C4.c)
 *     sub_140253900 @ 0x140253900 (sub_140253900.c)
 *     sub_140253E78 @ 0x140253E78 (sub_140253E78.c)
 *     sub_140255A78 @ 0x140255A78 (sub_140255A78.c)
 *     sub_140256998 @ 0x140256998 (sub_140256998.c)
 *     sub_14025BA80 @ 0x14025BA80 (sub_14025BA80.c)
 *     sub_14025C690 @ 0x14025C690 (sub_14025C690.c)
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     sub_140261C40 @ 0x140261C40 (sub_140261C40.c)
 *     sub_1402621B0 @ 0x1402621B0 (sub_1402621B0.c)
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_140284C74 @ 0x140284C74 (sub_140284C74.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_14029ED34 @ 0x14029ED34 (sub_14029ED34.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402A41A4 @ 0x1402A41A4 (sub_1402A41A4.c)
 *     sub_1402C4BF0 @ 0x1402C4BF0 (sub_1402C4BF0.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_1402D2A14 @ 0x1402D2A14 (sub_1402D2A14.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1402D72FC @ 0x1402D72FC (sub_1402D72FC.c)
 *     sub_1402D7A40 @ 0x1402D7A40 (sub_1402D7A40.c)
 *     sub_1402E00A4 @ 0x1402E00A4 (sub_1402E00A4.c)
 *     sub_1402E1010 @ 0x1402E1010 (sub_1402E1010.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1402F4850 @ 0x1402F4850 (sub_1402F4850.c)
 *     sub_1402F5DDC @ 0x1402F5DDC (sub_1402F5DDC.c)
 *     sub_1402F63D0 @ 0x1402F63D0 (sub_1402F63D0.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_14035D3E0 @ 0x14035D3E0 (sub_14035D3E0.c)
 *     sub_14035F344 @ 0x14035F344 (sub_14035F344.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140369540 (ExTimedWaitForUnblockPushLock.c)
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     sub_140373D18 @ 0x140373D18 (sub_140373D18.c)
 *     sub_140376A50 @ 0x140376A50 (sub_140376A50.c)
 *     sub_140379848 @ 0x140379848 (sub_140379848.c)
 *     sub_14037A5F0 @ 0x14037A5F0 (sub_14037A5F0.c)
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 *     sub_1403867F4 @ 0x1403867F4 (sub_1403867F4.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     sub_140389670 @ 0x140389670 (sub_140389670.c)
 *     sub_1403898C4 @ 0x1403898C4 (sub_1403898C4.c)
 *     sub_14038BB00 @ 0x14038BB00 (sub_14038BB00.c)
 *     sub_14038BCE0 @ 0x14038BCE0 (sub_14038BCE0.c)
 *     sub_140395114 @ 0x140395114 (sub_140395114.c)
 *     sub_140396464 @ 0x140396464 (sub_140396464.c)
 *     sub_140399104 @ 0x140399104 (sub_140399104.c)
 *     sub_140399318 @ 0x140399318 (sub_140399318.c)
 *     sub_1403A0154 @ 0x1403A0154 (sub_1403A0154.c)
 *     sub_1403A5AF0 @ 0x1403A5AF0 (sub_1403A5AF0.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403A7530 (IoReleaseRemoveLockAndWaitEx.c)
 *     sub_1403B1270 @ 0x1403B1270 (sub_1403B1270.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_1403B423C @ 0x1403B423C (sub_1403B423C.c)
 *     sub_1403BA340 @ 0x1403BA340 (sub_1403BA340.c)
 *     sub_1403C0774 @ 0x1403C0774 (sub_1403C0774.c)
 *     sub_1403C6B00 @ 0x1403C6B00 (sub_1403C6B00.c)
 *     sub_1403C6D20 @ 0x1403C6D20 (sub_1403C6D20.c)
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_1403CBDF0 @ 0x1403CBDF0 (sub_1403CBDF0.c)
 *     sub_1403CDBF0 @ 0x1403CDBF0 (sub_1403CDBF0.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 *     sub_1403D525C @ 0x1403D525C (sub_1403D525C.c)
 *     sub_1403D6930 @ 0x1403D6930 (sub_1403D6930.c)
 *     sub_1403D8FF0 @ 0x1403D8FF0 (sub_1403D8FF0.c)
 *     sub_1403D9D30 @ 0x1403D9D30 (sub_1403D9D30.c)
 *     sub_1403DCD34 @ 0x1403DCD34 (sub_1403DCD34.c)
 *     sub_1403DEE60 @ 0x1403DEE60 (sub_1403DEE60.c)
 *     sub_140417B94 @ 0x140417B94 (sub_140417B94.c)
 *     sub_140459984 @ 0x140459984 (sub_140459984.c)
 *     sub_14045F87C @ 0x14045F87C (sub_14045F87C.c)
 *     sub_14051CE3C @ 0x14051CE3C (sub_14051CE3C.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 *     sub_14053DDB8 @ 0x14053DDB8 (sub_14053DDB8.c)
 *     sub_140542FC4 @ 0x140542FC4 (sub_140542FC4.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 *     ntoskrnl_32 @ 0x14055A160 (ntoskrnl_32.c)
 *     sub_140563058 @ 0x140563058 (sub_140563058.c)
 *     sub_140564C24 @ 0x140564C24 (sub_140564C24.c)
 *     sub_14056EC2C @ 0x14056EC2C (sub_14056EC2C.c)
 *     sub_1405757C0 @ 0x1405757C0 (sub_1405757C0.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 *     sub_14057657C @ 0x14057657C (sub_14057657C.c)
 *     sub_1405765B0 @ 0x1405765B0 (sub_1405765B0.c)
 *     sub_1405798A8 @ 0x1405798A8 (sub_1405798A8.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140581748 @ 0x140581748 (sub_140581748.c)
 *     sub_140594698 @ 0x140594698 (sub_140594698.c)
 *     sub_14059C99C @ 0x14059C99C (sub_14059C99C.c)
 *     sub_14059CFBC @ 0x14059CFBC (sub_14059CFBC.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 *     sub_1405A2E3C @ 0x1405A2E3C (sub_1405A2E3C.c)
 *     sub_1405B2E5C @ 0x1405B2E5C (sub_1405B2E5C.c)
 *     sub_1405B7340 @ 0x1405B7340 (sub_1405B7340.c)
 *     sub_1405B81F0 @ 0x1405B81F0 (sub_1405B81F0.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 *     sub_1405CCAC0 @ 0x1405CCAC0 (sub_1405CCAC0.c)
 *     sub_1405E2740 @ 0x1405E2740 (sub_1405E2740.c)
 *     sub_1405FC690 @ 0x1405FC690 (sub_1405FC690.c)
 *     sub_1405FCF84 @ 0x1405FCF84 (sub_1405FCF84.c)
 *     sub_1405FD830 @ 0x1405FD830 (sub_1405FD830.c)
 *     sub_1406161C0 @ 0x1406161C0 (sub_1406161C0.c)
 *     sub_1406330FC @ 0x1406330FC (sub_1406330FC.c)
 *     sub_140635EEC @ 0x140635EEC (sub_140635EEC.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     sub_14063A300 @ 0x14063A300 (sub_14063A300.c)
 *     sub_140644030 @ 0x140644030 (sub_140644030.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_14065FA0C @ 0x14065FA0C (sub_14065FA0C.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     sub_14068BEAC @ 0x14068BEAC (sub_14068BEAC.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_14069B63C @ 0x14069B63C (sub_14069B63C.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     sub_1406A443C @ 0x1406A443C (sub_1406A443C.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     sub_1406A4C58 @ 0x1406A4C58 (sub_1406A4C58.c)
 *     sub_1406A91F0 @ 0x1406A91F0 (sub_1406A91F0.c)
 *     sub_1406BE9A0 @ 0x1406BE9A0 (sub_1406BE9A0.c)
 *     sub_1406BF8BC @ 0x1406BF8BC (sub_1406BF8BC.c)
 *     sub_1406C1A74 @ 0x1406C1A74 (sub_1406C1A74.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_1406C8478 @ 0x1406C8478 (sub_1406C8478.c)
 *     sub_1406C8550 @ 0x1406C8550 (sub_1406C8550.c)
 *     sub_1406D2BE8 @ 0x1406D2BE8 (sub_1406D2BE8.c)
 *     sub_1406D3ACC @ 0x1406D3ACC (sub_1406D3ACC.c)
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 *     sub_1406D8750 @ 0x1406D8750 (sub_1406D8750.c)
 *     sub_1406D8994 @ 0x1406D8994 (sub_1406D8994.c)
 *     sub_1406DAF30 @ 0x1406DAF30 (sub_1406DAF30.c)
 *     sub_1406E30E0 @ 0x1406E30E0 (sub_1406E30E0.c)
 *     sub_1406E825C @ 0x1406E825C (sub_1406E825C.c)
 *     sub_1406EA5EC @ 0x1406EA5EC (sub_1406EA5EC.c)
 *     sub_1406EBCCC @ 0x1406EBCCC (sub_1406EBCCC.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406EDF6C @ 0x1406EDF6C (sub_1406EDF6C.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_1407063CC @ 0x1407063CC (sub_1407063CC.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     RtlVolumeDeviceToDosName @ 0x140710B90 (RtlVolumeDeviceToDosName.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 *     sub_140747DDC @ 0x140747DDC (sub_140747DDC.c)
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140748D6C @ 0x140748D6C (sub_140748D6C.c)
 *     sub_1407490C0 @ 0x1407490C0 (sub_1407490C0.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     sub_14074D6EC @ 0x14074D6EC (sub_14074D6EC.c)
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_14075D814 @ 0x14075D814 (sub_14075D814.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 *     sub_14075F09C @ 0x14075F09C (sub_14075F09C.c)
 *     sub_1407793D0 @ 0x1407793D0 (sub_1407793D0.c)
 *     sub_140783428 @ 0x140783428 (sub_140783428.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 *     sub_1407841FC @ 0x1407841FC (sub_1407841FC.c)
 *     sub_1407842F0 @ 0x1407842F0 (sub_1407842F0.c)
 *     sub_1407843EC @ 0x1407843EC (sub_1407843EC.c)
 *     sub_14078D1A8 @ 0x14078D1A8 (sub_14078D1A8.c)
 *     sub_1407940E4 @ 0x1407940E4 (sub_1407940E4.c)
 *     sub_140795400 @ 0x140795400 (sub_140795400.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407A11A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     sub_1407D4E34 @ 0x1407D4E34 (sub_1407D4E34.c)
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 *     sub_1407D6FA0 @ 0x1407D6FA0 (sub_1407D6FA0.c)
 *     sub_1407D80F0 @ 0x1407D80F0 (sub_1407D80F0.c)
 *     ObWaitForSingleObject @ 0x1407E0200 (ObWaitForSingleObject.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1407F575C @ 0x1407F575C (sub_1407F575C.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407FA460 (FsRtlIssueDeviceIoControl.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 *     FsRtlBalanceReads @ 0x1407FC880 (FsRtlBalanceReads.c)
 *     sub_1407FEA60 @ 0x1407FEA60 (sub_1407FEA60.c)
 *     sub_1407FF67C @ 0x1407FF67C (sub_1407FF67C.c)
 *     sub_1407FF7F4 @ 0x1407FF7F4 (sub_1407FF7F4.c)
 *     sub_1407FFBAC @ 0x1407FFBAC (sub_1407FFBAC.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 *     sub_1408005A0 @ 0x1408005A0 (sub_1408005A0.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_140801624 @ 0x140801624 (sub_140801624.c)
 *     sub_1408017F8 @ 0x1408017F8 (sub_1408017F8.c)
 *     sub_14080637C @ 0x14080637C (sub_14080637C.c)
 *     sub_140806788 @ 0x140806788 (sub_140806788.c)
 *     sub_140807FEC @ 0x140807FEC (sub_140807FEC.c)
 *     sub_1408081E0 @ 0x1408081E0 (sub_1408081E0.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     sub_14080C5C8 @ 0x14080C5C8 (sub_14080C5C8.c)
 *     sub_14080D7EC @ 0x14080D7EC (sub_14080D7EC.c)
 *     sub_14080E2B0 @ 0x14080E2B0 (sub_14080E2B0.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_140810420 @ 0x140810420 (sub_140810420.c)
 *     sub_140810B00 @ 0x140810B00 (sub_140810B00.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     sub_1408176BC @ 0x1408176BC (sub_1408176BC.c)
 *     sub_14081788C @ 0x14081788C (sub_14081788C.c)
 *     sub_14081AB80 @ 0x14081AB80 (sub_14081AB80.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 *     sub_14081CE58 @ 0x14081CE58 (sub_14081CE58.c)
 *     sub_14081E700 @ 0x14081E700 (sub_14081E700.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_140820280 @ 0x140820280 (sub_140820280.c)
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 *     sub_140823318 @ 0x140823318 (sub_140823318.c)
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_14082EF8C @ 0x14082EF8C (sub_14082EF8C.c)
 *     sub_14082EFB8 @ 0x14082EFB8 (sub_14082EFB8.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14083AAB8 @ 0x14083AAB8 (sub_14083AAB8.c)
 *     sub_14083B300 @ 0x14083B300 (sub_14083B300.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_140845880 @ 0x140845880 (sub_140845880.c)
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 *     sub_14084BA88 @ 0x14084BA88 (sub_14084BA88.c)
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 *     sub_14084E03C @ 0x14084E03C (sub_14084E03C.c)
 *     sub_14084E278 @ 0x14084E278 (sub_14084E278.c)
 *     sub_140852700 @ 0x140852700 (sub_140852700.c)
 *     sub_140854CB8 @ 0x140854CB8 (sub_140854CB8.c)
 *     sub_140855120 @ 0x140855120 (sub_140855120.c)
 *     sub_140855238 @ 0x140855238 (sub_140855238.c)
 *     sub_1408567A8 @ 0x1408567A8 (sub_1408567A8.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 *     sub_1408605C8 @ 0x1408605C8 (sub_1408605C8.c)
 *     sub_140860F60 @ 0x140860F60 (sub_140860F60.c)
 *     IoWMISetNotificationCallback @ 0x140862AB0 (IoWMISetNotificationCallback.c)
 *     sub_140864AC0 @ 0x140864AC0 (sub_140864AC0.c)
 *     sub_1408650D0 @ 0x1408650D0 (sub_1408650D0.c)
 *     sub_140881870 @ 0x140881870 (sub_140881870.c)
 *     sub_140908124 @ 0x140908124 (sub_140908124.c)
 *     sub_140908208 @ 0x140908208 (sub_140908208.c)
 *     sub_140908CD0 @ 0x140908CD0 (sub_140908CD0.c)
 *     sub_14090A480 @ 0x14090A480 (sub_14090A480.c)
 *     sub_14090A560 @ 0x14090A560 (sub_14090A560.c)
 *     sub_14090AD84 @ 0x14090AD84 (sub_14090AD84.c)
 *     sub_140919170 @ 0x140919170 (sub_140919170.c)
 *     sub_140927128 @ 0x140927128 (sub_140927128.c)
 *     sub_1409283F4 @ 0x1409283F4 (sub_1409283F4.c)
 *     sub_140929380 @ 0x140929380 (sub_140929380.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 *     sub_14092B264 @ 0x14092B264 (sub_14092B264.c)
 *     sub_14092D730 @ 0x14092D730 (sub_14092D730.c)
 *     FsRtlDeregisterUncProvider @ 0x14092E1B0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     sub_140930280 @ 0x140930280 (sub_140930280.c)
 *     sub_14093449C @ 0x14093449C (sub_14093449C.c)
 *     sub_1409345F0 @ 0x1409345F0 (sub_1409345F0.c)
 *     sub_140935044 @ 0x140935044 (sub_140935044.c)
 *     sub_140935C64 @ 0x140935C64 (sub_140935C64.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     sub_14093F428 @ 0x14093F428 (sub_14093F428.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 *     sub_1409404FC @ 0x1409404FC (sub_1409404FC.c)
 *     IoReplacePartitionUnit @ 0x140943170 (IoReplacePartitionUnit.c)
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 *     sub_14094FB70 @ 0x14094FB70 (sub_14094FB70.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_1409589A4 @ 0x1409589A4 (sub_1409589A4.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_14095A544 @ 0x14095A544 (sub_14095A544.c)
 *     sub_14095A67C @ 0x14095A67C (sub_14095A67C.c)
 *     sub_14095F204 @ 0x14095F204 (sub_14095F204.c)
 *     sub_140973B80 @ 0x140973B80 (sub_140973B80.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 *     sub_140989F5C @ 0x140989F5C (sub_140989F5C.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B798 @ 0x14098B798 (sub_14098B798.c)
 *     sub_14098F634 @ 0x14098F634 (sub_14098F634.c)
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 *     sub_140995040 @ 0x140995040 (sub_140995040.c)
 *     sub_1409991F0 @ 0x1409991F0 (sub_1409991F0.c)
 *     sub_1409A0D80 @ 0x1409A0D80 (sub_1409A0D80.c)
 *     sub_1409AC2BC @ 0x1409AC2BC (sub_1409AC2BC.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     sub_1409AF410 @ 0x1409AF410 (sub_1409AF410.c)
 *     sub_1409B1468 @ 0x1409B1468 (sub_1409B1468.c)
 *     sub_1409B196C @ 0x1409B196C (sub_1409B196C.c)
 *     sub_1409B3490 @ 0x1409B3490 (sub_1409B3490.c)
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 *     sub_1409B45F0 @ 0x1409B45F0 (sub_1409B45F0.c)
 *     sub_1409B4F34 @ 0x1409B4F34 (sub_1409B4F34.c)
 *     sub_1409B5088 @ 0x1409B5088 (sub_1409B5088.c)
 *     sub_1409B54D8 @ 0x1409B54D8 (sub_1409B54D8.c)
 *     sub_1409BEBB0 @ 0x1409BEBB0 (sub_1409BEBB0.c)
 *     sub_1409D42F8 @ 0x1409D42F8 (sub_1409D42F8.c)
 *     sub_1409D43FC @ 0x1409D43FC (sub_1409D43FC.c)
 *     sub_1409D48D8 @ 0x1409D48D8 (sub_1409D48D8.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 *     sub_1409D6368 @ 0x1409D6368 (sub_1409D6368.c)
 *     sub_1409D6428 @ 0x1409D6428 (sub_1409D6428.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_1409D6C58 @ 0x1409D6C58 (sub_1409D6C58.c)
 *     sub_1409D6CF4 @ 0x1409D6CF4 (sub_1409D6CF4.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     IoWMIAllocateInstanceIds @ 0x1409DB760 (IoWMIAllocateInstanceIds.c)
 *     sub_1409DC80C @ 0x1409DC80C (sub_1409DC80C.c)
 *     sub_1409DCFD4 @ 0x1409DCFD4 (sub_1409DCFD4.c)
 *     sub_1409DD22C @ 0x1409DD22C (sub_1409DD22C.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 *     sub_1409DD9A4 @ 0x1409DD9A4 (sub_1409DD9A4.c)
 *     sub_1409DE220 @ 0x1409DE220 (sub_1409DE220.c)
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 *     sub_1409DED88 @ 0x1409DED88 (sub_1409DED88.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409E39EC @ 0x1409E39EC (sub_1409E39EC.c)
 *     sub_1409E4318 @ 0x1409E4318 (sub_1409E4318.c)
 *     sub_1409E491C @ 0x1409E491C (sub_1409E491C.c)
 *     sub_1409E93FC @ 0x1409E93FC (sub_1409E93FC.c)
 *     sub_1409E9458 @ 0x1409E9458 (sub_1409E9458.c)
 *     sub_1409EB5B4 @ 0x1409EB5B4 (sub_1409EB5B4.c)
 *     sub_1409ECB90 @ 0x1409ECB90 (sub_1409ECB90.c)
 *     sub_1409EDE68 @ 0x1409EDE68 (sub_1409EDE68.c)
 *     sub_1409EEF94 @ 0x1409EEF94 (sub_1409EEF94.c)
 *     sub_140A02158 @ 0x140A02158 (sub_140A02158.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 *     sub_140A06DF0 @ 0x140A06DF0 (sub_140A06DF0.c)
 *     sub_140A06FF0 @ 0x140A06FF0 (sub_140A06FF0.c)
 *     sub_140A073C0 @ 0x140A073C0 (sub_140A073C0.c)
 *     WheaAttemptClearPoison @ 0x140A08BE0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_140A0D5E8 @ 0x140A0D5E8 (sub_140A0D5E8.c)
 *     sub_140A0E96C @ 0x140A0E96C (sub_140A0E96C.c)
 *     sub_140A31BF4 @ 0x140A31BF4 (sub_140A31BF4.c)
 *     sub_140A3437C @ 0x140A3437C (sub_140A3437C.c)
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 *     sub_140A51CA4 @ 0x140A51CA4 (sub_140A51CA4.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 *     sub_140A69140 @ 0x140A69140 (sub_140A69140.c)
 *     sub_140A6A1B0 @ 0x140A6A1B0 (sub_140A6A1B0.c)
 *     sub_140A6AACC @ 0x140A6AACC (sub_140A6AACC.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 *     sub_140A81078 @ 0x140A81078 (sub_140A81078.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A8D17C @ 0x140A8D17C (sub_140A8D17C.c)
 *     sub_140A91260 @ 0x140A91260 (sub_140A91260.c)
 *     HandleInformation @ 0x140A91580 (HandleInformation.c)
 *     sub_140A9A410 @ 0x140A9A410 (sub_140A9A410.c)
 *     sub_140A9E540 @ 0x140A9E540 (sub_140A9E540.c)
 *     sub_140AACA74 @ 0x140AACA74 (sub_140AACA74.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B0EB5C @ 0x140B0EB5C (sub_140B0EB5C.c)
 *     sub_140B26348 @ 0x140B26348 (sub_140B26348.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 *     sub_140B55478 @ 0x140B55478 (sub_140B55478.c)
 *     sub_140B55668 @ 0x140B55668 (sub_140B55668.c)
 *     sub_140B55A38 @ 0x140B55A38 (sub_140B55A38.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r10
  __int64 v8; // r8
  LONGLONG QuadPart; // r9
  unsigned __int8 v10; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v12; // rcx
  unsigned __int8 v13; // r13
  _QWORD *v14; // r12
  unsigned int v15; // esi
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  struct _KPRCB *v18; // r15
  NTSTATUS v19; // r14d
  __int64 v20; // rdx
  bool v21; // r10
  int v22; // r11d
  unsigned __int64 v23; // rax
  PVOID *v24; // rcx
  __int64 *v25; // r15
  unsigned __int8 v26; // r10
  unsigned __int64 v27; // rdi
  char v28; // al
  __int64 v30; // r9
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rsi
  __int64 v34; // rcx
  char v35; // cl
  int v36; // eax
  char v37; // al
  struct _KTHREAD **v38; // rdx
  struct _KTHREAD *v39; // rcx
  struct _KPRCB *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rcx
  unsigned __int64 v44; // rdi
  char v45; // al
  unsigned __int64 v46; // rcx
  struct _KPRCB *v47; // rdi
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned __int8 v56; // cl
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  struct _KPRCB *v62; // rcx
  __int64 v63; // rdx
  bool v64; // zf
  int v65; // eax
  __int64 v66; // rax
  NTSTATUS v67; // edi
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  struct _KPRCB *v73; // rbx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  struct _KPRCB *v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  struct _KPRCB *v83; // rcx
  __int64 v84; // rdx
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r9
  __int64 v87; // r8
  int v88; // eax
  struct _KPRCB *v89; // rbx
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  struct _KPRCB *v96; // rcx
  __int64 v97; // rdx
  int v98; // eax
  struct _KPRCB *v99; // rcx
  __int64 v100; // rdx
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r9
  __int64 v103; // r8
  int v104; // eax
  signed __int32 v105[8]; // [rsp+0h] [rbp-91h] BYREF
  bool v106; // [rsp+30h] [rbp-61h]
  unsigned __int8 v107; // [rsp+31h] [rbp-60h]
  LONGLONG v108; // [rsp+38h] [rbp-59h]
  __int64 v109; // [rsp+40h] [rbp-51h]
  int v110; // [rsp+48h] [rbp-49h] BYREF
  int v111; // [rsp+4Ch] [rbp-45h] BYREF
  int v112; // [rsp+50h] [rbp-41h] BYREF
  int v113; // [rsp+54h] [rbp-3Dh] BYREF
  int v114; // [rsp+58h] [rbp-39h] BYREF
  __int64 v115; // [rsp+60h] [rbp-31h] BYREF
  __int64 v116; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v117[2]; // [rsp+70h] [rbp-21h] BYREF
  __int128 v118; // [rsp+80h] [rbp-11h]
  __int64 v119; // [rsp+90h] [rbp-1h]
  char v121; // [rsp+F8h] [rbp+67h]
  int Timeouta; // [rsp+110h] [rbp+7Fh]

  v121 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v115 = 0LL;
  v108 = 0LL;
  v106 = 0;
  v109 = 0LL;
  v107 = _bittestandreset((signed __int32 *)CurrentThread + 29, 2u);
  if ( !v107 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v30 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    *((_BYTE *)CurrentThread + 390) = CurrentIrql;
  }
  v8 = 0xFFFFF780000003B0uLL;
  QuadPart = 0xFFFFF78000000008uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      Timeouta = 2;
      v108 = MEMORY[0xFFFFF78000000008]
           - MEMORY[0xFFFFF780000003B0]
           - (Timeout->QuadPart
            + *((_QWORD *)CurrentThread + 31));
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v108 = Timeout->QuadPart;
      Timeouta = 1;
    }
  }
  else
  {
    Timeouta = 0;
  }
  while ( 1 )
  {
    v10 = *((_BYTE *)CurrentThread + 390);
    while ( 1 )
    {
      *((_DWORD *)CurrentThread + 29) &= ~0x10u;
      *((_BYTE *)CurrentThread + 112) = 0;
      *((_BYTE *)CurrentThread + 391) = WaitMode;
      if ( Alertable )
        *((_DWORD *)CurrentThread + 29) |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v110 = 0;
      v12 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v12 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v59 = *(_DWORD *)(v12 + 24);
          *(_DWORD *)(v12 + 24) = v59 + 1;
          if ( v59 == -1 )
LABEL_141:
            sub_140418E4C(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
      {
        v54 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v54 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v60 = *(_DWORD *)(v54 + 24) - 1;
            *(_DWORD *)(v54 + 24) = v60;
            if ( !v60 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v110);
        while ( *((_QWORD *)CurrentThread + 8) );
        v55 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v55 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v61 = *(_DWORD *)(v55 + 24);
            *(_DWORD *)(v55 + 24) = v61 + 1;
            if ( v61 == -1 )
              goto LABEL_141;
          }
        }
      }
      if ( !*((_BYTE *)CurrentThread + 193) || v10 || *((_WORD *)CurrentThread + 243) )
        break;
      sub_140224100((__int64)CurrentThread);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v62 = KeGetCurrentPrcb();
          v63 = *((_QWORD *)v62 + 4375);
          v64 = (*(_DWORD *)(v63 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v63 + 20) &= 0xFFFF0003;
          if ( v64 )
            sub_140418E4C(v62);
        }
      }
      __writecr8(1uLL);
      sub_1402F1DC0(0LL, 0LL, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v56 <= 0xFu )
      {
        QuadPart = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v8 = *(unsigned int *)(QuadPart + 20);
        *(_DWORD *)(QuadPart + 20) = v8 | ~((unsigned __int8)(1LL << (v56 + 1)) - 1) & 4;
      }
      *((_BYTE *)CurrentThread + 390) = 0;
    }
    v13 = v107;
    v14 = (_QWORD *)((char *)CurrentThread + 320);
    if ( Alertable )
    {
      v8 = WaitMode;
      if ( *((_BYTE *)CurrentThread + WaitMode + 114) )
      {
        *((_BYTE *)CurrentThread + WaitMode + 114) = 0;
        v67 = 257;
        goto LABEL_96;
      }
      if ( WaitMode && *((struct _KTHREAD **)CurrentThread + 21) != (struct _KTHREAD *)((char *)CurrentThread + 168) )
      {
        *((_BYTE *)CurrentThread + 194) |= 2u;
LABEL_95:
        v67 = 192;
LABEL_96:
        sub_140224100((__int64)CurrentThread);
        sub_140294824((__int64)KeGetCurrentPrcb(), v10);
        return v67;
      }
      if ( *((_BYTE *)CurrentThread + 114) )
      {
        *((_BYTE *)CurrentThread + 114) = 0;
        v67 = 257;
        goto LABEL_96;
      }
    }
    else if ( (*((_BYTE *)CurrentThread + 194) & 2) != 0 && WaitMode )
    {
      goto LABEL_95;
    }
    v15 = 0;
    *((_BYTE *)CurrentThread + 388) = 5;
    *((_BYTE *)CurrentThread + 643) = v121;
    *((_DWORD *)CurrentThread + 109) = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)CurrentThread + 8) = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = *((_QWORD *)v16 + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)v16 + 32) <= 1u )
      {
        v65 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v65;
        if ( !v65 )
          sub_140418E4C(v16);
      }
    }
    v18 = KeGetCurrentPrcb();
    v19 = 0;
    *((_BYTE *)CurrentThread + 336) = 1;
    *((_BYTE *)CurrentThread + 337) = 4;
    *((_WORD *)CurrentThread + 169) = 0;
    *((_QWORD *)CurrentThread + 44) = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v15 & dword_140D0527C) == 0
          && (dword_140D0689C & 0x40) != 0
          && (unsigned __int8)sub_14039EA10(v16, v17, v8, QuadPart) )
        {
          sub_14039D930(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
    }
    v20 = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) == 2 )
      break;
    if ( (int)v20 > 0 )
    {
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = v20 - 1;
      }
      goto LABEL_31;
    }
    v21 = v106;
LABEL_19:
    v22 = v108;
    v23 = v108;
    if ( Timeouta == 2 )
    {
      v20 = *((unsigned int *)CurrentThread + 238);
      v46 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)CurrentThread + 31) - MEMORY[0xFFFFF780000003B0];
      v23 = v108;
      if ( *((_BYTE *)CurrentThread + 391)
        && !*((_DWORD *)CurrentThread + 121)
        && !*((_BYTE *)CurrentThread + 390)
        && !*((_BYTE *)CurrentThread + 192)
        && (_DWORD)v20 )
      {
        v23 = v108 + v20;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_21;
      if ( !v108 )
        goto LABEL_66;
      v46 = MEMORY[0xFFFFF78000000014];
    }
    if ( v46 > v23 )
    {
LABEL_66:
      v19 = 258;
LABEL_31:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      *((_BYTE *)CurrentThread + 388) = 2;
      _InterlockedOr(v105, 0);
      if ( *((_QWORD *)CurrentThread + 8) )
      {
        v47 = KeGetCurrentPrcb();
        v113 = 0;
        v48 = *((_QWORD *)v47 + 4375);
        if ( v48 )
        {
          if ( *((_BYTE *)v47 + 32) <= 1u )
          {
            v49 = *(_DWORD *)(v48 + 24);
            *(_DWORD *)(v48 + 24) = v49 + 1;
            if ( v49 == -1 )
LABEL_106:
              sub_140418E4C(v47);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
        {
          v50 = *((_QWORD *)v47 + 4375);
          if ( v50 )
          {
            if ( *((_BYTE *)v47 + 32) <= 1u )
            {
              v53 = *(_DWORD *)(v50 + 24) - 1;
              *(_DWORD *)(v50 + 24) = v53;
              if ( !v53 )
                sub_140418E4C(v47);
            }
          }
          do
            sub_1402F32E0(&v113);
          while ( *((_QWORD *)CurrentThread + 8) );
          v51 = *((_QWORD *)v47 + 4375);
          if ( v51 )
          {
            if ( *((_BYTE *)v47 + 32) <= 1u )
            {
              v52 = *(_DWORD *)(v51 + 24);
              *(_DWORD *)(v51 + 24) = v52 + 1;
              if ( v52 == -1 )
                goto LABEL_106;
            }
          }
        }
        sub_140224100((__int64)CurrentThread);
      }
      v27 = *((unsigned __int8 *)CurrentThread + 390);
      v28 = *((_BYTE *)CurrentThread + 112);
      if ( (v28 & 0x38) != 0 )
      {
        if ( (v28 & 0x18) != 0 )
        {
          if ( (v28 & 8) != 0 )
            _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 30, 0xCu);
          v117[0] = 0LL;
          v89 = KeGetCurrentPrcb();
          v114 = 0;
          v90 = *((_QWORD *)v89 + 4375);
          if ( v90 )
          {
            if ( *((_BYTE *)v89 + 32) <= 1u )
            {
              v91 = *(_DWORD *)(v90 + 24);
              *(_DWORD *)(v90 + 24) = v91 + 1;
              if ( v91 == -1 )
LABEL_217:
                sub_140418E4C(v89);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v18 + 12, 0LL) )
          {
            v92 = *((_QWORD *)v89 + 4375);
            if ( v92 )
            {
              if ( *((_BYTE *)v89 + 32) <= 1u )
              {
                v93 = *(_DWORD *)(v92 + 24) - 1;
                *(_DWORD *)(v92 + 24) = v93;
                if ( !v93 )
                  sub_140418E4C(v89);
              }
            }
            do
              sub_1402F32E0(&v114);
            while ( *((_QWORD *)v18 + 6) );
            v94 = *((_QWORD *)v89 + 4375);
            if ( v94 )
            {
              if ( *((_BYTE *)v89 + 32) <= 1u )
              {
                v95 = *(_DWORD *)(v94 + 24);
                *(_DWORD *)(v94 + 24) = v95 + 1;
                if ( v95 == -1 )
                  goto LABEL_217;
              }
            }
          }
          if ( !*((_QWORD *)v18 + 2) )
            sub_14035C3FC(v18, v117, v8);
          _InterlockedAnd64((volatile signed __int64 *)v18 + 6, 0LL);
          v96 = KeGetCurrentPrcb();
          v97 = *((_QWORD *)v96 + 4375);
          if ( v97 )
          {
            if ( *((_BYTE *)v96 + 32) <= 1u )
            {
              v98 = *(_DWORD *)(v97 + 24) - 1;
              *(_DWORD *)(v97 + 24) = v98;
              if ( !v98 )
                sub_140418E4C(v96);
            }
          }
          sub_140344800(v18, v117, (unsigned __int8)v27);
        }
        else
        {
          sub_140294824((__int64)v18, 1u);
          sub_1402F1DC0(0LL, 0LL, 0LL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v99 = KeGetCurrentPrcb();
              v100 = *((_QWORD *)v99 + 4375);
              v64 = (*(_DWORD *)(v100 + 20) & 0xFFFF0001) == 0;
              *(_DWORD *)(v100 + 20) &= 0xFFFF0001;
              if ( v64 )
                sub_140418E4C(v99);
            }
          }
          __writecr8(0LL);
        }
      }
      else if ( v13 )
      {
        sub_140294824((__int64)v18, v27);
      }
      else
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v101 = KeGetCurrentIrql();
            if ( v101 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v101 >= 2u )
            {
              v102 = KeGetCurrentPrcb();
              v103 = *((_QWORD *)v102 + 4375);
              v104 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
              v64 = (v104 & *(_DWORD *)(v103 + 20)) == 0;
              *(_DWORD *)(v103 + 20) &= v104;
              if ( v64 )
                sub_140418E4C(v102);
            }
          }
        }
        __writecr8(v27);
      }
      return v19;
    }
LABEL_21:
    v24 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v24 != (char *)Object + 8 )
      goto LABEL_211;
    *v14 = (char *)Object + 8;
    *((_QWORD *)CurrentThread + 41) = v24;
    *v24 = v14;
    *((_QWORD *)Object + 2) = v14;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    *((_BYTE *)CurrentThread + 587) = 1;
    if ( v21 )
    {
      v66 = sub_140347C10(Object, 0LL, 0LL);
      v22 = v108;
      v25 = (__int64 *)v66;
      v109 = v66;
    }
    else
    {
      v25 = (__int64 *)v109;
    }
    if ( v25 )
    {
      sub_14029F580(v25, v20, v8);
      v19 = sub_1402B5240((_DWORD)CurrentThread, (int)CurrentThread + 320, Timeouta, v108, (__int64)&v115);
      if ( (v19 & 0xFFFFFF7F) != 0 )
      {
        sub_140347C10(Object, v25, 0LL);
        sub_140353BB0((ULONG_PTR)Object);
        v109 = 0LL;
      }
      else
      {
        v109 = sub_140347C10(Object, v25, 0LL);
        *(_BYTE *)(v109 + 18) = 1;
      }
    }
    else
    {
      v19 = sub_1402B5240((_DWORD)CurrentThread, (int)CurrentThread + 320, Timeouta, v22, (__int64)&v115);
    }
    *((_QWORD *)CurrentThread + 122) = 0LL;
    if ( v19 != 256 )
      return v19;
    v107 = 0;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v26 <= 0xFu )
    {
      QuadPart = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v8 = *(unsigned int *)(QuadPart + 20);
      *(_DWORD *)(QuadPart + 20) = v8 | ~((unsigned __int8)(1LL << (v26 + 1)) - 1) & 4;
    }
    *((_BYTE *)CurrentThread + 390) = v26;
  }
  v21 = (*((_BYTE *)Object + 48) & 2) != 0;
  v106 = v21;
  if ( (int)v20 <= 0
    && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != *((_BYTE *)v18 + 13242)) )
  {
    goto LABEL_19;
  }
  v31 = *((_DWORD *)Object + 1);
  if ( v31 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    sub_1402946B8((__int64)v18, (__int64)CurrentThread, v13);
    RtlRaiseStatus(-1073741423);
  }
  v32 = v31 - 1;
  *((_DWORD *)Object + 1) = v32;
  if ( v32 )
    goto LABEL_31;
  *((_QWORD *)CurrentThread + 25) = 0LL;
  v33 = KeGetCurrentPrcb();
  v111 = 0;
  v34 = *((_QWORD *)v33 + 4375);
  if ( v34 )
  {
    if ( *((_BYTE *)v33 + 32) <= 1u )
    {
      v68 = *(_DWORD *)(v34 + 24);
      *(_DWORD *)(v34 + 24) = v68 + 1;
      if ( v68 == -1 )
LABEL_162:
        sub_140418E4C(v33);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
  {
    v57 = *((_QWORD *)v33 + 4375);
    if ( v57 )
    {
      if ( *((_BYTE *)v33 + 32) <= 1u )
      {
        v69 = *(_DWORD *)(v57 + 24) - 1;
        *(_DWORD *)(v57 + 24) = v69;
        if ( !v69 )
          sub_140418E4C(v33);
      }
    }
    do
      sub_1402F32E0(&v111);
    while ( *((_QWORD *)CurrentThread + 8) );
    v58 = *((_QWORD *)v33 + 4375);
    if ( v58 )
    {
      if ( *((_BYTE *)v33 + 32) <= 1u )
      {
        v70 = *(_DWORD *)(v58 + 24);
        *(_DWORD *)(v58 + 24) = v70 + 1;
        if ( v70 == -1 )
          goto LABEL_162;
      }
    }
  }
  if ( *((_BYTE *)Object + 49) )
    --*((_WORD *)CurrentThread + 242);
  if ( *((struct _KTHREAD **)v18 + 1) == CurrentThread )
    v35 = *((_BYTE *)v18 + 13242);
  else
    v35 = 0;
  v119 = 0LL;
  v36 = *(_DWORD *)Object;
  v118 = 0LL;
  LODWORD(v118) = v36;
  BYTE2(v118) = v35;
  *(_DWORD *)Object = v118;
  v37 = *((_BYTE *)Object + 48);
  *((_QWORD *)Object + 5) = CurrentThread;
  if ( (v37 & 1) != 0 )
  {
    *((_BYTE *)Object + 48) = v37 & 0xFE;
    *((_QWORD *)CurrentThread + 25) |= 0x80uLL;
    v37 = *((_BYTE *)Object + 48);
  }
  if ( (v37 & 2) != 0 )
    *((_QWORD *)CurrentThread + 122) = Object;
  else
    *((_QWORD *)CurrentThread + 122) = 0LL;
  v38 = (struct _KTHREAD **)*((_QWORD *)CurrentThread + 98);
  v39 = (struct _KTHREAD *)((char *)Object + 24);
  if ( *v38 != (struct _KTHREAD *)((char *)CurrentThread + 776) )
LABEL_211:
    __fastfail(3u);
  *(_QWORD *)v39 = (char *)CurrentThread + 776;
  *((_QWORD *)Object + 4) = v38;
  *v38 = v39;
  *((_QWORD *)CurrentThread + 98) = v39;
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  *((_BYTE *)CurrentThread + 388) = 2;
  *((_QWORD *)CurrentThread + 8) = 0LL;
  v40 = KeGetCurrentPrcb();
  v41 = *((_QWORD *)v40 + 4375);
  if ( v41 )
  {
    if ( *((_BYTE *)v40 + 32) <= 1u )
    {
      v71 = *(_DWORD *)(v41 + 24) - 1;
      *(_DWORD *)(v41 + 24) = v71;
      if ( !v71 )
        sub_140418E4C(v40);
    }
  }
  v42 = *((_QWORD *)CurrentThread + 25);
  v43 = *((_QWORD *)CurrentThread + 122);
  if ( v43 )
  {
    *((_QWORD *)CurrentThread + 122) = 0LL;
    v72 = sub_140347C10(v43, 0LL, 1LL);
    if ( v72 )
      *(_BYTE *)(v72 + 18) = 1;
  }
  v44 = *((unsigned __int8 *)CurrentThread + 390);
  v45 = *((_BYTE *)CurrentThread + 112);
  if ( (v45 & 0x38) == 0 )
  {
    if ( v13 )
    {
      sub_140294824((__int64)v18, v44);
    }
    else
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v85 = KeGetCurrentIrql();
          if ( v85 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v85 >= 2u )
          {
            v86 = KeGetCurrentPrcb();
            v87 = *((_QWORD *)v86 + 4375);
            v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
            v64 = (v88 & *(_DWORD *)(v87 + 20)) == 0;
            *(_DWORD *)(v87 + 20) &= v88;
            if ( v64 )
              sub_140418E4C(v86);
          }
        }
      }
      __writecr8(v44);
    }
    return v42;
  }
  if ( (v45 & 0x18) != 0 )
  {
    if ( (v45 & 8) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 30, 0xCu);
    v116 = 0LL;
    v73 = KeGetCurrentPrcb();
    v112 = 0;
    v74 = *((_QWORD *)v73 + 4375);
    if ( v74 )
    {
      if ( *((_BYTE *)v73 + 32) <= 1u )
      {
        v75 = *(_DWORD *)(v74 + 24);
        *(_DWORD *)(v74 + 24) = v75 + 1;
        if ( v75 == -1 )
LABEL_181:
          sub_140418E4C(v73);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)v18 + 12, 0LL) )
    {
      v76 = *((_QWORD *)v73 + 4375);
      if ( v76 )
      {
        if ( *((_BYTE *)v73 + 32) <= 1u )
        {
          v77 = *(_DWORD *)(v76 + 24) - 1;
          *(_DWORD *)(v76 + 24) = v77;
          if ( !v77 )
            sub_140418E4C(v73);
        }
      }
      do
        sub_1402F32E0(&v112);
      while ( *((_QWORD *)v18 + 6) );
      v78 = *((_QWORD *)v73 + 4375);
      if ( v78 )
      {
        if ( *((_BYTE *)v73 + 32) <= 1u )
        {
          v79 = *(_DWORD *)(v78 + 24);
          *(_DWORD *)(v78 + 24) = v79 + 1;
          if ( v79 == -1 )
            goto LABEL_181;
        }
      }
    }
    if ( !*((_QWORD *)v18 + 2) )
      sub_14035C3FC(v18, &v116, v8);
    _InterlockedAnd64((volatile signed __int64 *)v18 + 6, 0LL);
    v80 = KeGetCurrentPrcb();
    v81 = *((_QWORD *)v80 + 4375);
    if ( v81 )
    {
      if ( *((_BYTE *)v80 + 32) <= 1u )
      {
        v82 = *(_DWORD *)(v81 + 24) - 1;
        *(_DWORD *)(v81 + 24) = v82;
        if ( !v82 )
          sub_140418E4C(v80);
      }
    }
    sub_140344800(v18, &v116, (unsigned __int8)v44);
    return v42;
  }
  else
  {
    sub_140294824((__int64)v18, 1u);
    sub_1402F1DC0(0LL, 0LL, 0LL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v83 = KeGetCurrentPrcb();
        v84 = *((_QWORD *)v83 + 4375);
        v64 = (*(_DWORD *)(v84 + 20) & 0xFFFF0001) == 0;
        *(_DWORD *)(v84 + 20) &= 0xFFFF0001;
        if ( v64 )
          sub_140418E4C(v83);
      }
    }
    __writecr8(0LL);
    return v42;
  }
}
