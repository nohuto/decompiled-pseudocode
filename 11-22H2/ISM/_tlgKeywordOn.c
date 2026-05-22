/*
 * XREFs of _tlgKeywordOn @ 0x180040AFC
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x18010156C (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180101740 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180101868 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x180101A2C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017E6BC (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x1801C2100 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
