/*
 * XREFs of ExQueueWorkItem @ 0x140345FC0
 * Callers:
 *     sub_14020B10C @ 0x14020B10C (sub_14020B10C.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140223644 @ 0x140223644 (sub_140223644.c)
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     sub_140224980 @ 0x140224980 (sub_140224980.c)
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
 *     sub_140239A98 @ 0x140239A98 (sub_140239A98.c)
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     sub_140244E70 @ 0x140244E70 (sub_140244E70.c)
 *     sub_140247C90 @ 0x140247C90 (sub_140247C90.c)
 *     sub_14024B730 @ 0x14024B730 (sub_14024B730.c)
 *     sub_14024C070 @ 0x14024C070 (sub_14024C070.c)
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_1402524E0 @ 0x1402524E0 (sub_1402524E0.c)
 *     sub_140253DD4 @ 0x140253DD4 (sub_140253DD4.c)
 *     sub_140255A78 @ 0x140255A78 (sub_140255A78.c)
 *     PoNotifyMediaBuffering @ 0x140258980 (PoNotifyMediaBuffering.c)
 *     sub_14025B770 @ 0x14025B770 (sub_14025B770.c)
 *     sub_14025B900 @ 0x14025B900 (sub_14025B900.c)
 *     sub_14025CB00 @ 0x14025CB00 (sub_14025CB00.c)
 *     sub_14025CFA4 @ 0x14025CFA4 (sub_14025CFA4.c)
 *     sub_14025E250 @ 0x14025E250 (sub_14025E250.c)
 *     sub_14025E460 @ 0x14025E460 (sub_14025E460.c)
 *     sub_14025E4A4 @ 0x14025E4A4 (sub_14025E4A4.c)
 *     sub_1402676A8 @ 0x1402676A8 (sub_1402676A8.c)
 *     sub_140267708 @ 0x140267708 (sub_140267708.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140345F84 @ 0x140345F84 (sub_140345F84.c)
 *     sub_14035D158 @ 0x14035D158 (sub_14035D158.c)
 *     sub_14035F344 @ 0x14035F344 (sub_14035F344.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403661D0 @ 0x1403661D0 (sub_1403661D0.c)
 *     sub_14036669C @ 0x14036669C (sub_14036669C.c)
 *     sub_140368ED4 @ 0x140368ED4 (sub_140368ED4.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_140376830 @ 0x140376830 (sub_140376830.c)
 *     sub_140377360 @ 0x140377360 (sub_140377360.c)
 *     sub_140378CF0 @ 0x140378CF0 (sub_140378CF0.c)
 *     sub_140389CB0 @ 0x140389CB0 (sub_140389CB0.c)
 *     sub_140397184 @ 0x140397184 (sub_140397184.c)
 *     sub_140398B2C @ 0x140398B2C (sub_140398B2C.c)
 *     sub_140398E60 @ 0x140398E60 (sub_140398E60.c)
 *     sub_140399400 @ 0x140399400 (sub_140399400.c)
 *     sub_1403A1210 @ 0x1403A1210 (sub_1403A1210.c)
 *     sub_1403A13C0 @ 0x1403A13C0 (sub_1403A13C0.c)
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     sub_1403B6D70 @ 0x1403B6D70 (sub_1403B6D70.c)
 *     sub_1403C45F0 @ 0x1403C45F0 (sub_1403C45F0.c)
 *     sub_1403C7B20 @ 0x1403C7B20 (sub_1403C7B20.c)
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_1403C89A0 @ 0x1403C89A0 (sub_1403C89A0.c)
 *     sub_1403DA1F0 @ 0x1403DA1F0 (sub_1403DA1F0.c)
 *     sub_1403DC824 @ 0x1403DC824 (sub_1403DC824.c)
 *     sub_1403DD0E0 @ 0x1403DD0E0 (sub_1403DD0E0.c)
 *     sub_1403DF6E0 @ 0x1403DF6E0 (sub_1403DF6E0.c)
 *     sub_1403EAC70 @ 0x1403EAC70 (sub_1403EAC70.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     sub_1405062C0 @ 0x1405062C0 (sub_1405062C0.c)
 *     sub_14050905C @ 0x14050905C (sub_14050905C.c)
 *     sub_1405127BC @ 0x1405127BC (sub_1405127BC.c)
 *     sub_14052D920 @ 0x14052D920 (sub_14052D920.c)
 *     sub_14053F110 @ 0x14053F110 (sub_14053F110.c)
 *     sub_14053F140 @ 0x14053F140 (sub_14053F140.c)
 *     sub_14054B43C @ 0x14054B43C (sub_14054B43C.c)
 *     sub_14054B540 @ 0x14054B540 (sub_14054B540.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140558640 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1405587A0 (IoIncrementKeepAliveCount.c)
 *     sub_14055F0C0 @ 0x14055F0C0 (sub_14055F0C0.c)
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 *     sub_1405648E0 @ 0x1405648E0 (sub_1405648E0.c)
 *     sub_1405697EC @ 0x1405697EC (sub_1405697EC.c)
 *     sub_140579810 @ 0x140579810 (sub_140579810.c)
 *     sub_14057C248 @ 0x14057C248 (sub_14057C248.c)
 *     sub_14057C2D0 @ 0x14057C2D0 (sub_14057C2D0.c)
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 *     sub_14058E7F4 @ 0x14058E7F4 (sub_14058E7F4.c)
 *     sub_1405A1CC0 @ 0x1405A1CC0 (sub_1405A1CC0.c)
 *     sub_1405ADB14 @ 0x1405ADB14 (sub_1405ADB14.c)
 *     sub_1405B379C @ 0x1405B379C (sub_1405B379C.c)
 *     sub_1405C5D80 @ 0x1405C5D80 (sub_1405C5D80.c)
 *     sub_1405C5DC8 @ 0x1405C5DC8 (sub_1405C5DC8.c)
 *     sub_1405C6530 @ 0x1405C6530 (sub_1405C6530.c)
 *     sub_1405CFC70 @ 0x1405CFC70 (sub_1405CFC70.c)
 *     sub_1405D02A0 @ 0x1405D02A0 (sub_1405D02A0.c)
 *     sub_1405D4950 @ 0x1405D4950 (sub_1405D4950.c)
 *     sub_1405D87D0 @ 0x1405D87D0 (sub_1405D87D0.c)
 *     sub_1405D8F20 @ 0x1405D8F20 (sub_1405D8F20.c)
 *     sub_1405D90D0 @ 0x1405D90D0 (sub_1405D90D0.c)
 *     sub_1405DC1D0 @ 0x1405DC1D0 (sub_1405DC1D0.c)
 *     sub_1405DFE20 @ 0x1405DFE20 (sub_1405DFE20.c)
 *     sub_1405DFE60 @ 0x1405DFE60 (sub_1405DFE60.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1405F5B3C @ 0x1405F5B3C (sub_1405F5B3C.c)
 *     sub_1405F7060 @ 0x1405F7060 (sub_1405F7060.c)
 *     sub_1405FD08C @ 0x1405FD08C (sub_1405FD08C.c)
 *     sub_1406052FC @ 0x1406052FC (sub_1406052FC.c)
 *     sub_14062CA70 @ 0x14062CA70 (sub_14062CA70.c)
 *     sub_14062F5B0 @ 0x14062F5B0 (sub_14062F5B0.c)
 *     sub_140631250 @ 0x140631250 (sub_140631250.c)
 *     sub_140634F40 @ 0x140634F40 (sub_140634F40.c)
 *     sub_140639090 @ 0x140639090 (sub_140639090.c)
 *     sub_1406391E0 @ 0x1406391E0 (sub_1406391E0.c)
 *     sub_14063BD64 @ 0x14063BD64 (sub_14063BD64.c)
 *     sub_14063F5BC @ 0x14063F5BC (sub_14063F5BC.c)
 *     sub_1406416A0 @ 0x1406416A0 (sub_1406416A0.c)
 *     sub_140645B90 @ 0x140645B90 (sub_140645B90.c)
 *     sub_140645DC0 @ 0x140645DC0 (sub_140645DC0.c)
 *     sub_140645E40 @ 0x140645E40 (sub_140645E40.c)
 *     sub_140646270 @ 0x140646270 (sub_140646270.c)
 *     sub_1406462D0 @ 0x1406462D0 (sub_1406462D0.c)
 *     sub_14064FA50 @ 0x14064FA50 (sub_14064FA50.c)
 *     sub_14068B144 @ 0x14068B144 (sub_14068B144.c)
 *     sub_14068D244 @ 0x14068D244 (sub_14068D244.c)
 *     sub_14069D1D8 @ 0x14069D1D8 (sub_14069D1D8.c)
 *     sub_1406A91F0 @ 0x1406A91F0 (sub_1406A91F0.c)
 *     sub_1406B86D0 @ 0x1406B86D0 (sub_1406B86D0.c)
 *     sub_1406C7D58 @ 0x1406C7D58 (sub_1406C7D58.c)
 *     PsSetProcessWin32Process @ 0x1406C7F10 (PsSetProcessWin32Process.c)
 *     sub_1406C8478 @ 0x1406C8478 (sub_1406C8478.c)
 *     sub_1406CD41C @ 0x1406CD41C (sub_1406CD41C.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_1406D7CC4 @ 0x1406D7CC4 (sub_1406D7CC4.c)
 *     sub_1406DF01C @ 0x1406DF01C (sub_1406DF01C.c)
 *     sub_1406E30E0 @ 0x1406E30E0 (sub_1406E30E0.c)
 *     sub_1406E60B0 @ 0x1406E60B0 (sub_1406E60B0.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_140748E80 @ 0x140748E80 (sub_140748E80.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407D4E34 @ 0x1407D4E34 (sub_1407D4E34.c)
 *     sub_1407D7100 @ 0x1407D7100 (sub_1407D7100.c)
 *     sub_1407D7544 @ 0x1407D7544 (sub_1407D7544.c)
 *     sub_1407D7AE0 @ 0x1407D7AE0 (sub_1407D7AE0.c)
 *     sub_1407D936C @ 0x1407D936C (sub_1407D936C.c)
 *     sub_1407EEF9C @ 0x1407EEF9C (sub_1407EEF9C.c)
 *     sub_1407F575C @ 0x1407F575C (sub_1407F575C.c)
 *     sub_1407FF67C @ 0x1407FF67C (sub_1407FF67C.c)
 *     sub_140809508 @ 0x140809508 (sub_140809508.c)
 *     sub_14080EA40 @ 0x14080EA40 (sub_14080EA40.c)
 *     sub_14081C88C @ 0x14081C88C (sub_14081C88C.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 *     sub_140827E8C @ 0x140827E8C (sub_140827E8C.c)
 *     sub_1408292C0 @ 0x1408292C0 (sub_1408292C0.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 *     sub_14083F5FC @ 0x14083F5FC (sub_14083F5FC.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_140857840 @ 0x140857840 (sub_140857840.c)
 *     sub_140881450 @ 0x140881450 (sub_140881450.c)
 *     sub_14091191C @ 0x14091191C (sub_14091191C.c)
 *     sub_14091D63C @ 0x14091D63C (sub_14091D63C.c)
 *     sub_14092972C @ 0x14092972C (sub_14092972C.c)
 *     sub_14092BA58 @ 0x14092BA58 (sub_14092BA58.c)
 *     sub_14092CF10 @ 0x14092CF10 (sub_14092CF10.c)
 *     sub_140935044 @ 0x140935044 (sub_140935044.c)
 *     IoReplacePartitionUnit @ 0x140943170 (IoReplacePartitionUnit.c)
 *     sub_14094A630 @ 0x14094A630 (sub_14094A630.c)
 *     sub_14094F804 @ 0x14094F804 (sub_14094F804.c)
 *     sub_1409585A4 @ 0x1409585A4 (sub_1409585A4.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14098CEF0 (PoFxSetTargetDripsDevicePowerState.c)
 *     sub_140994860 @ 0x140994860 (sub_140994860.c)
 *     sub_140995CC0 @ 0x140995CC0 (sub_140995CC0.c)
 *     sub_140999060 @ 0x140999060 (sub_140999060.c)
 *     sub_14099D180 @ 0x14099D180 (sub_14099D180.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409ABBA8 @ 0x1409ABBA8 (sub_1409ABBA8.c)
 *     sub_1409AC2BC @ 0x1409AC2BC (sub_1409AC2BC.c)
 *     sub_1409AF410 @ 0x1409AF410 (sub_1409AF410.c)
 *     sub_1409B18CC @ 0x1409B18CC (sub_1409B18CC.c)
 *     sub_1409BEB64 @ 0x1409BEB64 (sub_1409BEB64.c)
 *     sub_1409D8CF8 @ 0x1409D8CF8 (sub_1409D8CF8.c)
 *     sub_1409EC2D0 @ 0x1409EC2D0 (sub_1409EC2D0.c)
 *     sub_140A01E60 @ 0x140A01E60 (sub_140A01E60.c)
 *     WheaAttemptClearPoison @ 0x140A08BE0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 *     sub_140A6A1B0 @ 0x140A6A1B0 (sub_140A6A1B0.c)
 *     sub_140A6F0F0 @ 0x140A6F0F0 (sub_140A6F0F0.c)
 *     sub_140A81078 @ 0x140A81078 (sub_140A81078.c)
 *     sub_140A9B888 @ 0x140A9B888 (sub_140A9B888.c)
 *     sub_140AABB9C @ 0x140AABB9C (sub_140AABB9C.c)
 *     sub_140AF8A58 @ 0x140AF8A58 (sub_140AF8A58.c)
 *     sub_140AF8B84 @ 0x140AF8B84 (sub_140AF8B84.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B231D8 @ 0x140B231D8 (sub_140B231D8.c)
 *     sub_140B25D38 @ 0x140B25D38 (sub_140B25D38.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_140346210 @ 0x140346210 (sub_140346210.c)
 *     sub_140346260 @ 0x140346260 (sub_140346260.c)
 *     sub_1403462B0 @ 0x1403462B0 (sub_1403462B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rdi
  int v4; // r13d
  char v5; // bl
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // eax
  int v10; // ebp
  unsigned __int16 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = QueueType;
  sub_140346210((ULONG_PTR)WorkItem);
  if ( (unsigned int)v3 >= 7 )
    v4 = v3 - 32;
  else
    v4 = dword_140016028[v3];
  v5 = 0;
  LODWORD(v6) = 0;
  v23 = 0;
  v7 = *((_QWORD *)qword_140D06C40 + 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v9 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  v10 = v9;
  if ( v9 < (unsigned __int16)word_140D05000 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)qword_140D31700[(unsigned __int16)v9];
      if ( v11 != (unsigned __int16 *)((char *)&unk_140D3DDC0 + 280 * (unsigned __int16)v9) )
      {
        if ( v11 )
        {
          v12 = 8LL * *v11;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + v12) + 264LL) >= 2uLL )
          {
            v13 = **(_QWORD **)(v12 + *(_QWORD *)(v7 + 8));
            if ( (v13 & 1) == 0 )
            {
              if ( v13 )
              {
                v14 = *(_DWORD *)(v13 + 712) & 0x3FFF;
                if ( (*(_DWORD *)(v13 + 712) & 0x4000) != 0 )
                  --v14;
                if ( v14 >= (2 * *(_DWORD *)(v13 + 716)) >> 1 )
                  break;
              }
            }
          }
        }
      }
      v9 = sub_14030B3F0(v10, &v23);
      if ( v9 >= (unsigned __int16)word_140D05000 )
        goto LABEL_18;
    }
    v15 = **(_QWORD **)(*(_QWORD *)(v7 + 8) + 8LL * *v11);
    if ( (v15 & 1) != 0 )
      v15 = 0LL;
    sub_1403462B0(v15, (_DWORD)WorkItem, v4, v6, 0);
    if ( (unsigned __int8)sub_140346260(v15, *(unsigned int *)(v15 + 720), v16, v17) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL * *v11) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_18:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
