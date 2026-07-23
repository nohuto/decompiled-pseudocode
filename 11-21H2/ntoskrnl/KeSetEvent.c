/*
 * XREFs of KeSetEvent @ 0x1402AFD30
 * Callers:
 *     sub_1402009E4 @ 0x1402009E4 (sub_1402009E4.c)
 *     sub_1402035C0 @ 0x1402035C0 (sub_1402035C0.c)
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_140211410 @ 0x140211410 (sub_140211410.c)
 *     sub_14021162C @ 0x14021162C (sub_14021162C.c)
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140221D90 (ExReleaseRundownProtectionCacheAware.c)
 *     ExReleaseRundownProtection @ 0x140224430 (ExReleaseRundownProtection.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     IoReleaseRemoveLockEx @ 0x1402332A0 (IoReleaseRemoveLockEx.c)
 *     sub_140233AA0 @ 0x140233AA0 (sub_140233AA0.c)
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_140237628 @ 0x140237628 (sub_140237628.c)
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     sub_140240250 @ 0x140240250 (sub_140240250.c)
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140242F10 @ 0x140242F10 (sub_140242F10.c)
 *     sub_14024576C @ 0x14024576C (sub_14024576C.c)
 *     sub_1402470D0 @ 0x1402470D0 (sub_1402470D0.c)
 *     sub_140248550 @ 0x140248550 (sub_140248550.c)
 *     sub_14024F140 @ 0x14024F140 (sub_14024F140.c)
 *     sub_1402501A0 @ 0x1402501A0 (sub_1402501A0.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_140253900 @ 0x140253900 (sub_140253900.c)
 *     sub_140253C70 @ 0x140253C70 (sub_140253C70.c)
 *     sub_140253DD4 @ 0x140253DD4 (sub_140253DD4.c)
 *     sub_140253FC0 @ 0x140253FC0 (sub_140253FC0.c)
 *     sub_140256C68 @ 0x140256C68 (sub_140256C68.c)
 *     sub_140256F0C @ 0x140256F0C (sub_140256F0C.c)
 *     sub_14025C460 @ 0x14025C460 (sub_14025C460.c)
 *     sub_14025D6A0 @ 0x14025D6A0 (sub_14025D6A0.c)
 *     sub_140260BE0 @ 0x140260BE0 (sub_140260BE0.c)
 *     sub_140264D88 @ 0x140264D88 (sub_140264D88.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_140266CA8 @ 0x140266CA8 (sub_140266CA8.c)
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_140270204 @ 0x140270204 (sub_140270204.c)
 *     sub_140275000 @ 0x140275000 (sub_140275000.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_14027AEA0 @ 0x14027AEA0 (sub_14027AEA0.c)
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_1402878F0 @ 0x1402878F0 (sub_1402878F0.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_140293BA0 @ 0x140293BA0 (sub_140293BA0.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     sub_1402D0CE0 @ 0x1402D0CE0 (sub_1402D0CE0.c)
 *     sub_1402D2238 @ 0x1402D2238 (sub_1402D2238.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_1402DB890 @ 0x1402DB890 (sub_1402DB890.c)
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402EF2BC @ 0x1402EF2BC (sub_1402EF2BC.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_1402F63D0 @ 0x1402F63D0 (sub_1402F63D0.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140329430 @ 0x140329430 (sub_140329430.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_140338BF0 @ 0x140338BF0 (sub_140338BF0.c)
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     sub_140355774 @ 0x140355774 (sub_140355774.c)
 *     sub_140359F70 @ 0x140359F70 (sub_140359F70.c)
 *     sub_14035AA74 @ 0x14035AA74 (sub_14035AA74.c)
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_14035F9D4 @ 0x14035F9D4 (sub_14035F9D4.c)
 *     sub_140368ED4 @ 0x140368ED4 (sub_140368ED4.c)
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     sub_14036A48C @ 0x14036A48C (sub_14036A48C.c)
 *     sub_14036A8F0 @ 0x14036A8F0 (sub_14036A8F0.c)
 *     sub_140373D18 @ 0x140373D18 (sub_140373D18.c)
 *     sub_140373F80 @ 0x140373F80 (sub_140373F80.c)
 *     sub_140376DF0 @ 0x140376DF0 (sub_140376DF0.c)
 *     sub_1403773B0 @ 0x1403773B0 (sub_1403773B0.c)
 *     sub_1403773D8 @ 0x1403773D8 (sub_1403773D8.c)
 *     sub_14037A04C @ 0x14037A04C (sub_14037A04C.c)
 *     sub_14037A5F0 @ 0x14037A5F0 (sub_14037A5F0.c)
 *     sub_14037ADB8 @ 0x14037ADB8 (sub_14037ADB8.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037C034 @ 0x14037C034 (sub_14037C034.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 *     sub_1403867F4 @ 0x1403867F4 (sub_1403867F4.c)
 *     sub_1403868E8 @ 0x1403868E8 (sub_1403868E8.c)
 *     sub_140386C60 @ 0x140386C60 (sub_140386C60.c)
 *     sub_140388FC8 @ 0x140388FC8 (sub_140388FC8.c)
 *     sub_140389160 @ 0x140389160 (sub_140389160.c)
 *     sub_140389874 @ 0x140389874 (sub_140389874.c)
 *     sub_14038A914 @ 0x14038A914 (sub_14038A914.c)
 *     sub_14038DF70 @ 0x14038DF70 (sub_14038DF70.c)
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 *     sub_1403945DC @ 0x1403945DC (sub_1403945DC.c)
 *     PoFxNotifySurprisePowerOn @ 0x140397A80 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x1403980F0 (PoFxPowerControl.c)
 *     sub_140399104 @ 0x140399104 (sub_140399104.c)
 *     sub_140399288 @ 0x140399288 (sub_140399288.c)
 *     sub_1403A01B0 @ 0x1403A01B0 (sub_1403A01B0.c)
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_1403A46E4 @ 0x1403A46E4 (sub_1403A46E4.c)
 *     sub_1403A4B90 @ 0x1403A4B90 (sub_1403A4B90.c)
 *     sub_1403A6D44 @ 0x1403A6D44 (sub_1403A6D44.c)
 *     sub_1403B1270 @ 0x1403B1270 (sub_1403B1270.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_1403B4E2C @ 0x1403B4E2C (sub_1403B4E2C.c)
 *     sub_1403B6010 @ 0x1403B6010 (sub_1403B6010.c)
 *     sub_1403B6C90 @ 0x1403B6C90 (sub_1403B6C90.c)
 *     sub_1403C0774 @ 0x1403C0774 (sub_1403C0774.c)
 *     sub_1403C31D4 @ 0x1403C31D4 (sub_1403C31D4.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_1403CDBF0 @ 0x1403CDBF0 (sub_1403CDBF0.c)
 *     sub_1403CF698 @ 0x1403CF698 (sub_1403CF698.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     sub_1403D0750 @ 0x1403D0750 (sub_1403D0750.c)
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 *     sub_1403DB6F0 @ 0x1403DB6F0 (sub_1403DB6F0.c)
 *     sub_1403DF5C0 @ 0x1403DF5C0 (sub_1403DF5C0.c)
 *     sub_140418160 @ 0x140418160 (sub_140418160.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     sub_140429670 @ 0x140429670 (sub_140429670.c)
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 *     sub_140459A82 @ 0x140459A82 (sub_140459A82.c)
 *     sub_14045B728 @ 0x14045B728 (sub_14045B728.c)
 *     sub_14045E3C0 @ 0x14045E3C0 (sub_14045E3C0.c)
 *     sub_140460CEC @ 0x140460CEC (sub_140460CEC.c)
 *     sub_140460D60 @ 0x140460D60 (sub_140460D60.c)
 *     ExReleaseRundownProtectionEx @ 0x140461950 (ExReleaseRundownProtectionEx.c)
 *     sub_14051D870 @ 0x14051D870 (sub_14051D870.c)
 *     sub_14051DA10 @ 0x14051DA10 (sub_14051DA10.c)
 *     sub_140538890 @ 0x140538890 (sub_140538890.c)
 *     sub_140539BC4 @ 0x140539BC4 (sub_140539BC4.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053C3E4 @ 0x14053C3E4 (sub_14053C3E4.c)
 *     sub_14053D2E4 @ 0x14053D2E4 (sub_14053D2E4.c)
 *     sub_14053D730 @ 0x14053D730 (sub_14053D730.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 *     sub_14053E700 @ 0x14053E700 (sub_14053E700.c)
 *     sub_140542F50 @ 0x140542F50 (sub_140542F50.c)
 *     sub_140556A04 @ 0x140556A04 (sub_140556A04.c)
 *     sub_140556A74 @ 0x140556A74 (sub_140556A74.c)
 *     sub_140559E1C @ 0x140559E1C (sub_140559E1C.c)
 *     sub_140563058 @ 0x140563058 (sub_140563058.c)
 *     sub_140564940 @ 0x140564940 (sub_140564940.c)
 *     sub_14056C540 @ 0x14056C540 (sub_14056C540.c)
 *     sub_14056ECDC @ 0x14056ECDC (sub_14056ECDC.c)
 *     sub_14056EE94 @ 0x14056EE94 (sub_14056EE94.c)
 *     sub_140575C90 @ 0x140575C90 (sub_140575C90.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 *     sub_140576540 @ 0x140576540 (sub_140576540.c)
 *     sub_14057657C @ 0x14057657C (sub_14057657C.c)
 *     sub_1405765B0 @ 0x1405765B0 (sub_1405765B0.c)
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 *     sub_14057FFF4 @ 0x14057FFF4 (sub_14057FFF4.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 *     sub_140580FA4 @ 0x140580FA4 (sub_140580FA4.c)
 *     sub_140581A70 @ 0x140581A70 (sub_140581A70.c)
 *     sub_14058BA24 @ 0x14058BA24 (sub_14058BA24.c)
 *     sub_14058BE04 @ 0x14058BE04 (sub_14058BE04.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_140594698 @ 0x140594698 (sub_140594698.c)
 *     sub_140594898 @ 0x140594898 (sub_140594898.c)
 *     sub_14059519C @ 0x14059519C (sub_14059519C.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 *     sub_140597ED0 @ 0x140597ED0 (sub_140597ED0.c)
 *     sub_140598054 @ 0x140598054 (sub_140598054.c)
 *     sub_14059A410 @ 0x14059A410 (sub_14059A410.c)
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 *     sub_14059C580 @ 0x14059C580 (sub_14059C580.c)
 *     ApcRoutine @ 0x14059C980 (ApcRoutine.c)
 *     sub_14059D070 @ 0x14059D070 (sub_14059D070.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_1405A3738 @ 0x1405A3738 (sub_1405A3738.c)
 *     sub_1405ADB14 @ 0x1405ADB14 (sub_1405ADB14.c)
 *     sub_1405BA5F0 @ 0x1405BA5F0 (sub_1405BA5F0.c)
 *     sub_1405BA624 @ 0x1405BA624 (sub_1405BA624.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 *     sub_1405C9A5C @ 0x1405C9A5C (sub_1405C9A5C.c)
 *     CompletionFunction @ 0x1405CA230 (CompletionFunction.c)
 *     PoFxAddComponentRelation @ 0x1405CA2E0 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 *     sub_1405CB6D8 @ 0x1405CB6D8 (sub_1405CB6D8.c)
 *     sub_1405CBC30 @ 0x1405CBC30 (sub_1405CBC30.c)
 *     sub_1405CBD34 @ 0x1405CBD34 (sub_1405CBD34.c)
 *     sub_1405CBF00 @ 0x1405CBF00 (sub_1405CBF00.c)
 *     sub_1405CBFFC @ 0x1405CBFFC (sub_1405CBFFC.c)
 *     sub_1405CC080 @ 0x1405CC080 (sub_1405CC080.c)
 *     sub_1405CC160 @ 0x1405CC160 (sub_1405CC160.c)
 *     sub_1405CD100 @ 0x1405CD100 (sub_1405CD100.c)
 *     sub_1405CD400 @ 0x1405CD400 (sub_1405CD400.c)
 *     sub_1405CD938 @ 0x1405CD938 (sub_1405CD938.c)
 *     sub_1405CD96C @ 0x1405CD96C (sub_1405CD96C.c)
 *     sub_1405CE6B0 @ 0x1405CE6B0 (sub_1405CE6B0.c)
 *     sub_1405CE7C0 @ 0x1405CE7C0 (sub_1405CE7C0.c)
 *     sub_1405D47C0 @ 0x1405D47C0 (sub_1405D47C0.c)
 *     sub_1405DDCE4 @ 0x1405DDCE4 (sub_1405DDCE4.c)
 *     sub_1405DDD88 @ 0x1405DDD88 (sub_1405DDD88.c)
 *     sub_1405DDE24 @ 0x1405DDE24 (sub_1405DDE24.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1405F6B54 @ 0x1405F6B54 (sub_1405F6B54.c)
 *     sub_1405FD170 @ 0x1405FD170 (sub_1405FD170.c)
 *     sub_1405FD250 @ 0x1405FD250 (sub_1405FD250.c)
 *     sub_1406156A0 @ 0x1406156A0 (sub_1406156A0.c)
 *     sub_14062CDF0 @ 0x14062CDF0 (sub_14062CDF0.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     sub_1406330C0 @ 0x1406330C0 (sub_1406330C0.c)
 *     sub_140635DB8 @ 0x140635DB8 (sub_140635DB8.c)
 *     sub_1406364F0 @ 0x1406364F0 (sub_1406364F0.c)
 *     ExNotifyBootDeviceRemoval @ 0x14063A040 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     sub_140644030 @ 0x140644030 (sub_140644030.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     sub_140658DCC @ 0x140658DCC (sub_140658DCC.c)
 *     sub_140662070 @ 0x140662070 (sub_140662070.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_140683DF0 @ 0x140683DF0 (sub_140683DF0.c)
 *     sub_140689034 @ 0x140689034 (sub_140689034.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 *     NtSetEvent @ 0x14069E0C0 (NtSetEvent.c)
 *     sub_1406A4C10 @ 0x1406A4C10 (sub_1406A4C10.c)
 *     sub_1406A91F0 @ 0x1406A91F0 (sub_1406A91F0.c)
 *     sub_1406A958C @ 0x1406A958C (sub_1406A958C.c)
 *     sub_1406CEBA0 @ 0x1406CEBA0 (sub_1406CEBA0.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406D1E4C @ 0x1406D1E4C (sub_1406D1E4C.c)
 *     sub_1406D3128 @ 0x1406D3128 (sub_1406D3128.c)
 *     sub_1406DA0CC @ 0x1406DA0CC (sub_1406DA0CC.c)
 *     sub_1406DAB4C @ 0x1406DAB4C (sub_1406DAB4C.c)
 *     sub_1406DE800 @ 0x1406DE800 (sub_1406DE800.c)
 *     sub_1406E19B0 @ 0x1406E19B0 (sub_1406E19B0.c)
 *     sub_1406E9D2C @ 0x1406E9D2C (sub_1406E9D2C.c)
 *     sub_1406EBDB0 @ 0x1406EBDB0 (sub_1406EBDB0.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1406F4E78 @ 0x1406F4E78 (sub_1406F4E78.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_140752F30 @ 0x140752F30 (sub_140752F30.c)
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_14078AE7C @ 0x14078AE7C (sub_14078AE7C.c)
 *     sub_140790EEC @ 0x140790EEC (sub_140790EEC.c)
 *     sub_1407927AC @ 0x1407927AC (sub_1407927AC.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_140798F44 @ 0x140798F44 (sub_140798F44.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     sub_14079A984 @ 0x14079A984 (sub_14079A984.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 *     sub_1407D6FA0 @ 0x1407D6FA0 (sub_1407D6FA0.c)
 *     sub_1407D78A0 @ 0x1407D78A0 (sub_1407D78A0.c)
 *     sub_1407D80F0 @ 0x1407D80F0 (sub_1407D80F0.c)
 *     sub_1407D9428 @ 0x1407D9428 (sub_1407D9428.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DB830 @ 0x1407DB830 (sub_1407DB830.c)
 *     sub_1407DBAC0 @ 0x1407DBAC0 (sub_1407DBAC0.c)
 *     sub_1407F32E0 @ 0x1407F32E0 (sub_1407F32E0.c)
 *     sub_1407F3CF0 @ 0x1407F3CF0 (sub_1407F3CF0.c)
 *     sub_1407F8B10 @ 0x1407F8B10 (sub_1407F8B10.c)
 *     sub_1407FA9D0 @ 0x1407FA9D0 (sub_1407FA9D0.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 *     sub_1407FD778 @ 0x1407FD778 (sub_1407FD778.c)
 *     sub_14080637C @ 0x14080637C (sub_14080637C.c)
 *     sub_140806FC0 @ 0x140806FC0 (sub_140806FC0.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 *     sub_14080D7EC @ 0x14080D7EC (sub_14080D7EC.c)
 *     sub_1408119C4 @ 0x1408119C4 (sub_1408119C4.c)
 *     sub_1408176BC @ 0x1408176BC (sub_1408176BC.c)
 *     sub_14081788C @ 0x14081788C (sub_14081788C.c)
 *     sub_14081BF60 @ 0x14081BF60 (sub_14081BF60.c)
 *     sub_14081CF98 @ 0x14081CF98 (sub_14081CF98.c)
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 *     sub_14082FB00 @ 0x14082FB00 (sub_14082FB00.c)
 *     sub_1408337BC @ 0x1408337BC (sub_1408337BC.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14083AAB8 @ 0x14083AAB8 (sub_14083AAB8.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 *     sub_14084A7D0 @ 0x14084A7D0 (sub_14084A7D0.c)
 *     sub_14084B418 @ 0x14084B418 (sub_14084B418.c)
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 *     sub_140851DAC @ 0x140851DAC (sub_140851DAC.c)
 *     sub_140852700 @ 0x140852700 (sub_140852700.c)
 *     sub_140853BB8 @ 0x140853BB8 (sub_140853BB8.c)
 *     sub_140855C60 @ 0x140855C60 (sub_140855C60.c)
 *     sub_140860F60 @ 0x140860F60 (sub_140860F60.c)
 *     sub_140881870 @ 0x140881870 (sub_140881870.c)
 *     sub_140882180 @ 0x140882180 (sub_140882180.c)
 *     sub_140908CD0 @ 0x140908CD0 (sub_140908CD0.c)
 *     sub_140910210 @ 0x140910210 (sub_140910210.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 *     sub_1409276D0 @ 0x1409276D0 (sub_1409276D0.c)
 *     sub_1409283F4 @ 0x1409283F4 (sub_1409283F4.c)
 *     sub_1409286EC @ 0x1409286EC (sub_1409286EC.c)
 *     sub_1409289DC @ 0x1409289DC (sub_1409289DC.c)
 *     sub_140928E80 @ 0x140928E80 (sub_140928E80.c)
 *     sub_140929940 @ 0x140929940 (sub_140929940.c)
 *     sub_14092B4E0 @ 0x14092B4E0 (sub_14092B4E0.c)
 *     sub_140934110 @ 0x140934110 (sub_140934110.c)
 *     sub_140935044 @ 0x140935044 (sub_140935044.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     sub_1409404FC @ 0x1409404FC (sub_1409404FC.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_14095A67C @ 0x14095A67C (sub_14095A67C.c)
 *     sub_140988074 @ 0x140988074 (sub_140988074.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 *     sub_140989150 @ 0x140989150 (sub_140989150.c)
 *     sub_14098E120 @ 0x14098E120 (sub_14098E120.c)
 *     sub_140994FAC @ 0x140994FAC (sub_140994FAC.c)
 *     sub_140999A80 @ 0x140999A80 (sub_140999A80.c)
 *     sub_1409AB08C @ 0x1409AB08C (sub_1409AB08C.c)
 *     sub_1409AB3EC @ 0x1409AB3EC (sub_1409AB3EC.c)
 *     sub_1409ABEA0 @ 0x1409ABEA0 (sub_1409ABEA0.c)
 *     sub_1409ABFB0 @ 0x1409ABFB0 (sub_1409ABFB0.c)
 *     sub_1409AFA60 @ 0x1409AFA60 (sub_1409AFA60.c)
 *     sub_1409B44C8 @ 0x1409B44C8 (sub_1409B44C8.c)
 *     sub_1409B45F0 @ 0x1409B45F0 (sub_1409B45F0.c)
 *     sub_1409B4870 @ 0x1409B4870 (sub_1409B4870.c)
 *     sub_1409BEB80 @ 0x1409BEB80 (sub_1409BEB80.c)
 *     sub_1409D77F8 @ 0x1409D77F8 (sub_1409D77F8.c)
 *     sub_1409D7990 @ 0x1409D7990 (sub_1409D7990.c)
 *     sub_1409EEA10 @ 0x1409EEA10 (sub_1409EEA10.c)
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 *     sub_1409F12F0 @ 0x1409F12F0 (sub_1409F12F0.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 *     sub_140A091D0 @ 0x140A091D0 (sub_140A091D0.c)
 *     sub_140A31BC0 @ 0x140A31BC0 (sub_140A31BC0.c)
 *     sub_140A344D0 @ 0x140A344D0 (sub_140A344D0.c)
 *     sub_140A47F30 @ 0x140A47F30 (sub_140A47F30.c)
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     sub_140A516C0 @ 0x140A516C0 (sub_140A516C0.c)
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 *     sub_140A51F50 @ 0x140A51F50 (sub_140A51F50.c)
 *     sub_140A52C2C @ 0x140A52C2C (sub_140A52C2C.c)
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140A540E0 @ 0x140A540E0 (sub_140A540E0.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 *     sub_140A69140 @ 0x140A69140 (sub_140A69140.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 *     sub_140A6A1B0 @ 0x140A6A1B0 (sub_140A6A1B0.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 *     sub_140A6BCF0 @ 0x140A6BCF0 (sub_140A6BCF0.c)
 *     sub_140A6BD80 @ 0x140A6BD80 (sub_140A6BD80.c)
 *     sub_140A6F010 @ 0x140A6F010 (sub_140A6F010.c)
 *     sub_140A8D530 @ 0x140A8D530 (sub_140A8D530.c)
 *     sub_140A914C4 @ 0x140A914C4 (sub_140A914C4.c)
 *     sub_140A9E930 @ 0x140A9E930 (sub_140A9E930.c)
 *     sub_140AACB80 @ 0x140AACB80 (sub_140AACB80.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140B078E4 @ 0x140B078E4 (sub_140B078E4.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v6; // r13d
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // esi
  LIST_ENTRY *p_WaitListHead; // r14
  bool v11; // zf
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // r10
  void **p_Flink; // rcx
  __int64 v17; // r9
  char v18; // al
  struct _LIST_ENTRY *v19; // r10
  char v20; // al
  __int64 v21; // r8
  unsigned __int8 v22; // cl
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY *v24; // rcx
  char v25; // al
  int Flink_high; // r10d
  struct _LIST_ENTRY *v27; // r9
  __int64 v28; // r9
  unsigned __int8 v29; // al
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int8 v32; // cl
  struct _LIST_ENTRY **v33; // rdx
  struct _LIST_ENTRY *v34; // rcx
  char v35; // al
  int v36; // r10d
  struct _LIST_ENTRY *v37; // r9
  __int64 v38; // r9
  unsigned __int8 v39; // al
  __int64 v40; // r9
  __int64 v41; // r10
  struct _KPRCB *v42; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h]
  __int64 v45; // [rsp+40h] [rbp-48h]
  struct _LIST_ENTRY *Blink; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v47; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v48; // [rsp+A8h] [rbp+20h]
  struct _LIST_ENTRY *v49; // [rsp+A8h] [rbp+20h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v6 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    sub_1402F3290(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_11;
    p_WaitListHead = &Event->Header.WaitListHead;
    v11 = v6 == 0;
    Flink = Event->Header.WaitListHead.Flink;
    if ( v11 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v13 = Flink->Flink;
          v14 = Flink;
          v48 = Flink;
          Flink = v13;
          p_Flink = (void **)&v14->Blink->Flink;
          if ( v13->Blink != v14 || *p_Flink != v14 )
            goto LABEL_8;
          *p_Flink = v13;
          v13->Blink = (struct _LIST_ENTRY *)p_Flink;
          v18 = (char)v14[1].Flink;
          switch ( v18 )
          {
            case 1:
              if ( (unsigned __int8)sub_1402F6BC0(CurrentPrcb, v14, WORD1(v14[1].Flink), 0LL) )
              {
                v11 = Event->Header.SignalState-- == 1;
                if ( v11 )
                  goto LABEL_11;
              }
              break;
            case 2:
              BYTE1(v14[1].Flink) = 5;
              Blink = v14[1].Blink;
              v14->Flink = 0LL;
              v22 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v22 <= 0xFu )
              {
                v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                *(_DWORD *)(v28 + 20) |= (-1 << (v22 + 1)) & 4;
              }
              v43 = KeGetCurrentPrcb();
              v44 = *((_QWORD *)v43 + 1);
              if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
              {
                v29 = sub_14056B1E4(*((_QWORD *)v43 + 1));
                sub_14062DA60(v30, v31, v29);
              }
              sub_1402F3290(Blink);
              p_Blink = &Blink->Blink;
              v24 = Blink;
              if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
                || LODWORD(Blink[2].Blink) >= HIDWORD(Blink[2].Blink)
                || *(struct _LIST_ENTRY **)(v44 + 232) == Blink && *(_BYTE *)(v44 + 643) == 15 )
              {
LABEL_42:
                Flink_high = HIDWORD(v24->Flink);
                HIDWORD(v24->Flink) = Flink_high + 1;
                v27 = v24[2].Flink;
                if ( v27->Flink != (struct _LIST_ENTRY *)&v24[1].Blink )
                  goto LABEL_8;
                v48->Flink = (struct _LIST_ENTRY *)((char *)v24 + 24);
                v48->Blink = v27;
                v27->Flink = v48;
                v24[2].Flink = v48;
                if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
                {
                  sub_14035B550(v43, v24);
                  v24 = Blink;
                }
              }
              else
              {
                v25 = sub_1402F6A70(v43, Blink, v48);
                v24 = Blink;
                if ( !v25 )
                {
                  p_Blink = &Blink->Blink;
                  goto LABEL_42;
                }
                v48->Flink = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
              v11 = Event->Header.SignalState-- == 1;
              if ( v11 )
                goto LABEL_11;
              break;
            case 4:
              BYTE1(v14[1].Flink) = 5;
              Event->Header.SignalState = 0;
              KeInsertQueueDpc((PRKDPC)v14[1].Blink, Event, v14);
              break;
            default:
              sub_1402F6BC0(CurrentPrcb, v14, 256LL, 0LL);
              break;
          }
          if ( Flink == p_WaitListHead )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_10:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
LABEL_11:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      sub_1402B0820((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
      return SignalState;
    }
    while ( 1 )
    {
      v19 = Flink;
      v49 = Flink;
      Flink = Flink->Flink;
      v20 = (char)v19[1].Flink;
      switch ( v20 )
      {
        case 1:
          v21 = WORD1(v19[1].Flink);
          break;
        case 2:
          BYTE1(v19[1].Flink) = 5;
          v47 = v19[1].Blink;
          v19->Flink = 0LL;
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v32 <= 0xFu )
          {
            v38 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v38 + 20) |= (-1 << (v32 + 1)) & 4;
          }
          v42 = KeGetCurrentPrcb();
          v45 = *((_QWORD *)v42 + 1);
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
          {
            v39 = sub_14056B1E4(*((_QWORD *)v42 + 1));
            sub_14062DA60(v40, v41, v39);
          }
          sub_1402F3290(v47);
          v33 = &v47->Blink;
          v34 = v47;
          if ( *v33 == (struct _LIST_ENTRY *)v33
            || LODWORD(v47[2].Blink) >= HIDWORD(v47[2].Blink)
            || *(struct _LIST_ENTRY **)(v45 + 232) == v47 && *(_BYTE *)(v45 + 643) == 15 )
          {
LABEL_60:
            v36 = HIDWORD(v34->Flink);
            HIDWORD(v34->Flink) = v36 + 1;
            v37 = v34[2].Flink;
            if ( v37->Flink != (struct _LIST_ENTRY *)&v34[1].Blink )
LABEL_8:
              __fastfail(3u);
            v49->Flink = (struct _LIST_ENTRY *)((char *)v34 + 24);
            v49->Blink = v37;
            v37->Flink = v49;
            v34[2].Flink = v49;
            if ( !v36 && *v33 != (struct _LIST_ENTRY *)v33 )
            {
              sub_14035B550(v42, v34);
              v34 = v47;
            }
          }
          else
          {
            v35 = sub_1402F6A70(v42, v47, v49);
            v34 = v47;
            if ( !v35 )
            {
              v33 = &v47->Blink;
              goto LABEL_60;
            }
            v49->Flink = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v34, 0xFFFFFF7F);
          goto LABEL_27;
        case 4:
          BYTE1(v19[1].Flink) = 5;
          Event->Header.SignalState = 0;
          KeInsertQueueDpc((PRKDPC)v19[1].Blink, Event, v19);
          goto LABEL_27;
        default:
          v21 = 256LL;
          break;
      }
      sub_1402F6BC0(CurrentPrcb, v19, v21, 0LL);
LABEL_27:
      if ( Flink == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
