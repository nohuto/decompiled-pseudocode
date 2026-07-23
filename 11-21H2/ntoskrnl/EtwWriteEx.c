/*
 * XREFs of EtwWriteEx @ 0x140300C00
 * Callers:
 *     sub_140201D94 @ 0x140201D94 (sub_140201D94.c)
 *     sub_140202064 @ 0x140202064 (sub_140202064.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     sub_140213F3C @ 0x140213F3C (sub_140213F3C.c)
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_14021BD70 @ 0x14021BD70 (sub_14021BD70.c)
 *     sub_14021C050 @ 0x14021C050 (sub_14021C050.c)
 *     sub_14021FD60 @ 0x14021FD60 (sub_14021FD60.c)
 *     sub_140222C20 @ 0x140222C20 (sub_140222C20.c)
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     sub_140224810 @ 0x140224810 (sub_140224810.c)
 *     sub_140224A24 @ 0x140224A24 (sub_140224A24.c)
 *     sub_140224B50 @ 0x140224B50 (sub_140224B50.c)
 *     sub_140224DF0 @ 0x140224DF0 (sub_140224DF0.c)
 *     sub_140225CB4 @ 0x140225CB4 (sub_140225CB4.c)
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     sub_14023BABC @ 0x14023BABC (sub_14023BABC.c)
 *     sub_14023BB5C @ 0x14023BB5C (sub_14023BB5C.c)
 *     EtwWriteTransfer @ 0x1402418C0 (EtwWriteTransfer.c)
 *     sub_14024429C @ 0x14024429C (sub_14024429C.c)
 *     sub_14024A824 @ 0x14024A824 (sub_14024A824.c)
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402519E4 @ 0x1402519E4 (sub_1402519E4.c)
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 *     sub_140280F60 @ 0x140280F60 (sub_140280F60.c)
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     sub_1402D1EB4 @ 0x1402D1EB4 (sub_1402D1EB4.c)
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     sub_1402D6128 @ 0x1402D6128 (sub_1402D6128.c)
 *     sub_1402D6184 @ 0x1402D6184 (sub_1402D6184.c)
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     sub_1402EDDF8 @ 0x1402EDDF8 (sub_1402EDDF8.c)
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_140354C50 @ 0x140354C50 (sub_140354C50.c)
 *     sub_140354FB4 @ 0x140354FB4 (sub_140354FB4.c)
 *     sub_1403556F4 @ 0x1403556F4 (sub_1403556F4.c)
 *     sub_140355EE8 @ 0x140355EE8 (sub_140355EE8.c)
 *     sub_14035F21C @ 0x14035F21C (sub_14035F21C.c)
 *     sub_140368CB8 @ 0x140368CB8 (sub_140368CB8.c)
 *     sub_140369030 @ 0x140369030 (sub_140369030.c)
 *     sub_140369AC4 @ 0x140369AC4 (sub_140369AC4.c)
 *     sub_14036A410 @ 0x14036A410 (sub_14036A410.c)
 *     IoTransferActivityId @ 0x140386330 (IoTransferActivityId.c)
 *     sub_140389CEC @ 0x140389CEC (sub_140389CEC.c)
 *     sub_140396640 @ 0x140396640 (sub_140396640.c)
 *     sub_140399BC4 @ 0x140399BC4 (sub_140399BC4.c)
 *     sub_14039A0B4 @ 0x14039A0B4 (sub_14039A0B4.c)
 *     sub_1403A38F8 @ 0x1403A38F8 (sub_1403A38F8.c)
 *     sub_1403A39F4 @ 0x1403A39F4 (sub_1403A39F4.c)
 *     sub_1403A4500 @ 0x1403A4500 (sub_1403A4500.c)
 *     sub_1403A5020 @ 0x1403A5020 (sub_1403A5020.c)
 *     sub_1403AC640 @ 0x1403AC640 (sub_1403AC640.c)
 *     sub_1403AC9F8 @ 0x1403AC9F8 (sub_1403AC9F8.c)
 *     sub_1403ACEA4 @ 0x1403ACEA4 (sub_1403ACEA4.c)
 *     sub_1403AFE08 @ 0x1403AFE08 (sub_1403AFE08.c)
 *     sub_1403B11B0 @ 0x1403B11B0 (sub_1403B11B0.c)
 *     sub_1403B5B68 @ 0x1403B5B68 (sub_1403B5B68.c)
 *     sub_1403B6E4C @ 0x1403B6E4C (sub_1403B6E4C.c)
 *     sub_1403BB6AC @ 0x1403BB6AC (sub_1403BB6AC.c)
 *     sub_1403C5AEC @ 0x1403C5AEC (sub_1403C5AEC.c)
 *     sub_1403C5BB8 @ 0x1403C5BB8 (sub_1403C5BB8.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     sub_1403D3464 @ 0x1403D3464 (sub_1403D3464.c)
 *     sub_1403D683C @ 0x1403D683C (sub_1403D683C.c)
 *     sub_1403D857C @ 0x1403D857C (sub_1403D857C.c)
 *     sub_14041A410 @ 0x14041A410 (sub_14041A410.c)
 *     sub_14041A750 @ 0x14041A750 (sub_14041A750.c)
 *     sub_14045E1D6 @ 0x14045E1D6 (sub_14045E1D6.c)
 *     sub_14045E2C4 @ 0x14045E2C4 (sub_14045E2C4.c)
 *     sub_14045FCE4 @ 0x14045FCE4 (sub_14045FCE4.c)
 *     sub_14045FEE2 @ 0x14045FEE2 (sub_14045FEE2.c)
 *     sub_14050DD30 @ 0x14050DD30 (sub_14050DD30.c)
 *     sub_14051B8BC @ 0x14051B8BC (sub_14051B8BC.c)
 *     sub_14053E958 @ 0x14053E958 (sub_14053E958.c)
 *     sub_1405406E8 @ 0x1405406E8 (sub_1405406E8.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 *     sub_14055A870 @ 0x14055A870 (sub_14055A870.c)
 *     sub_14055A8B4 @ 0x14055A8B4 (sub_14055A8B4.c)
 *     sub_14055A93C @ 0x14055A93C (sub_14055A93C.c)
 *     sub_14055AA68 @ 0x14055AA68 (sub_14055AA68.c)
 *     sub_14055ABF4 @ 0x14055ABF4 (sub_14055ABF4.c)
 *     sub_14055AD48 @ 0x14055AD48 (sub_14055AD48.c)
 *     sub_14055AE94 @ 0x14055AE94 (sub_14055AE94.c)
 *     sub_14055AFE8 @ 0x14055AFE8 (sub_14055AFE8.c)
 *     sub_14055B0E8 @ 0x14055B0E8 (sub_14055B0E8.c)
 *     sub_14055B244 @ 0x14055B244 (sub_14055B244.c)
 *     sub_14055B428 @ 0x14055B428 (sub_14055B428.c)
 *     sub_14055B568 @ 0x14055B568 (sub_14055B568.c)
 *     sub_14055B654 @ 0x14055B654 (sub_14055B654.c)
 *     sub_14055B7B0 @ 0x14055B7B0 (sub_14055B7B0.c)
 *     sub_14055B814 @ 0x14055B814 (sub_14055B814.c)
 *     sub_14055B970 @ 0x14055B970 (sub_14055B970.c)
 *     sub_14055BACC @ 0x14055BACC (sub_14055BACC.c)
 *     sub_14055BB24 @ 0x14055BB24 (sub_14055BB24.c)
 *     sub_14055BB7C @ 0x14055BB7C (sub_14055BB7C.c)
 *     sub_14055BBDC @ 0x14055BBDC (sub_14055BBDC.c)
 *     sub_14055BC94 @ 0x14055BC94 (sub_14055BC94.c)
 *     sub_14055BD18 @ 0x14055BD18 (sub_14055BD18.c)
 *     sub_14055BE90 @ 0x14055BE90 (sub_14055BE90.c)
 *     sub_14055BF14 @ 0x14055BF14 (sub_14055BF14.c)
 *     sub_14055BFA8 @ 0x14055BFA8 (sub_14055BFA8.c)
 *     sub_14055C000 @ 0x14055C000 (sub_14055C000.c)
 *     sub_14055C058 @ 0x14055C058 (sub_14055C058.c)
 *     sub_140578454 @ 0x140578454 (sub_140578454.c)
 *     sub_14057D77C @ 0x14057D77C (sub_14057D77C.c)
 *     sub_14057E268 @ 0x14057E268 (sub_14057E268.c)
 *     sub_14057E394 @ 0x14057E394 (sub_14057E394.c)
 *     sub_14057E490 @ 0x14057E490 (sub_14057E490.c)
 *     sub_14057E574 @ 0x14057E574 (sub_14057E574.c)
 *     sub_14057E68C @ 0x14057E68C (sub_14057E68C.c)
 *     sub_14057E78C @ 0x14057E78C (sub_14057E78C.c)
 *     sub_14057E860 @ 0x14057E860 (sub_14057E860.c)
 *     sub_14057E91C @ 0x14057E91C (sub_14057E91C.c)
 *     sub_14057EA2C @ 0x14057EA2C (sub_14057EA2C.c)
 *     sub_14057EB28 @ 0x14057EB28 (sub_14057EB28.c)
 *     sub_14057EC0C @ 0x14057EC0C (sub_14057EC0C.c)
 *     sub_14057ECF0 @ 0x14057ECF0 (sub_14057ECF0.c)
 *     sub_14057EDEC @ 0x14057EDEC (sub_14057EDEC.c)
 *     sub_14057EEC4 @ 0x14057EEC4 (sub_14057EEC4.c)
 *     sub_14057EFCC @ 0x14057EFCC (sub_14057EFCC.c)
 *     sub_14057F2EC @ 0x14057F2EC (sub_14057F2EC.c)
 *     sub_14057F3EC @ 0x14057F3EC (sub_14057F3EC.c)
 *     sub_1405D09BC @ 0x1405D09BC (sub_1405D09BC.c)
 *     sub_1405D0AB4 @ 0x1405D0AB4 (sub_1405D0AB4.c)
 *     sub_1405D0B58 @ 0x1405D0B58 (sub_1405D0B58.c)
 *     sub_1405D0C70 @ 0x1405D0C70 (sub_1405D0C70.c)
 *     sub_1405D0D30 @ 0x1405D0D30 (sub_1405D0D30.c)
 *     sub_1405D0DD0 @ 0x1405D0DD0 (sub_1405D0DD0.c)
 *     sub_1405D0EE4 @ 0x1405D0EE4 (sub_1405D0EE4.c)
 *     sub_1405D0FDC @ 0x1405D0FDC (sub_1405D0FDC.c)
 *     sub_1405D11D8 @ 0x1405D11D8 (sub_1405D11D8.c)
 *     sub_1405D1330 @ 0x1405D1330 (sub_1405D1330.c)
 *     sub_1405D17F0 @ 0x1405D17F0 (sub_1405D17F0.c)
 *     sub_1405D18CC @ 0x1405D18CC (sub_1405D18CC.c)
 *     sub_1405D1AD0 @ 0x1405D1AD0 (sub_1405D1AD0.c)
 *     sub_1405D1B90 @ 0x1405D1B90 (sub_1405D1B90.c)
 *     sub_1405D1EE8 @ 0x1405D1EE8 (sub_1405D1EE8.c)
 *     sub_1405D1FA4 @ 0x1405D1FA4 (sub_1405D1FA4.c)
 *     sub_1405D209C @ 0x1405D209C (sub_1405D209C.c)
 *     sub_1405D218C @ 0x1405D218C (sub_1405D218C.c)
 *     sub_1405D2284 @ 0x1405D2284 (sub_1405D2284.c)
 *     sub_1405D25F0 @ 0x1405D25F0 (sub_1405D25F0.c)
 *     sub_1405D26F4 @ 0x1405D26F4 (sub_1405D26F4.c)
 *     sub_1405D27D4 @ 0x1405D27D4 (sub_1405D27D4.c)
 *     sub_1405D28BC @ 0x1405D28BC (sub_1405D28BC.c)
 *     sub_1405D29FC @ 0x1405D29FC (sub_1405D29FC.c)
 *     sub_1405D2B0C @ 0x1405D2B0C (sub_1405D2B0C.c)
 *     sub_1405D2C00 @ 0x1405D2C00 (sub_1405D2C00.c)
 *     sub_1405D2CE8 @ 0x1405D2CE8 (sub_1405D2CE8.c)
 *     sub_1405D2E34 @ 0x1405D2E34 (sub_1405D2E34.c)
 *     sub_1405D2EE4 @ 0x1405D2EE4 (sub_1405D2EE4.c)
 *     sub_1405D2FA0 @ 0x1405D2FA0 (sub_1405D2FA0.c)
 *     sub_1405D3148 @ 0x1405D3148 (sub_1405D3148.c)
 *     sub_1405D31E8 @ 0x1405D31E8 (sub_1405D31E8.c)
 *     sub_1405D3288 @ 0x1405D3288 (sub_1405D3288.c)
 *     sub_1405D33D8 @ 0x1405D33D8 (sub_1405D33D8.c)
 *     sub_1405D3540 @ 0x1405D3540 (sub_1405D3540.c)
 *     sub_1405D3634 @ 0x1405D3634 (sub_1405D3634.c)
 *     sub_1405D36DC @ 0x1405D36DC (sub_1405D36DC.c)
 *     sub_1405D3804 @ 0x1405D3804 (sub_1405D3804.c)
 *     sub_1405D39FC @ 0x1405D39FC (sub_1405D39FC.c)
 *     sub_1405D3B30 @ 0x1405D3B30 (sub_1405D3B30.c)
 *     sub_1405D9020 @ 0x1405D9020 (sub_1405D9020.c)
 *     sub_1405D9370 @ 0x1405D9370 (sub_1405D9370.c)
 *     sub_1405D9440 @ 0x1405D9440 (sub_1405D9440.c)
 *     sub_1405D9510 @ 0x1405D9510 (sub_1405D9510.c)
 *     sub_1405D9630 @ 0x1405D9630 (sub_1405D9630.c)
 *     sub_1405D9724 @ 0x1405D9724 (sub_1405D9724.c)
 *     sub_1405D98BC @ 0x1405D98BC (sub_1405D98BC.c)
 *     sub_1405D997C @ 0x1405D997C (sub_1405D997C.c)
 *     sub_1405D9B84 @ 0x1405D9B84 (sub_1405D9B84.c)
 *     sub_1405D9D50 @ 0x1405D9D50 (sub_1405D9D50.c)
 *     sub_1405D9E58 @ 0x1405D9E58 (sub_1405D9E58.c)
 *     sub_1405D9F60 @ 0x1405D9F60 (sub_1405D9F60.c)
 *     sub_1405DA0C4 @ 0x1405DA0C4 (sub_1405DA0C4.c)
 *     sub_1405DA184 @ 0x1405DA184 (sub_1405DA184.c)
 *     sub_1405DA274 @ 0x1405DA274 (sub_1405DA274.c)
 *     sub_1405DA3B4 @ 0x1405DA3B4 (sub_1405DA3B4.c)
 *     sub_1405DA494 @ 0x1405DA494 (sub_1405DA494.c)
 *     sub_1405DA5B4 @ 0x1405DA5B4 (sub_1405DA5B4.c)
 *     sub_1405DA68C @ 0x1405DA68C (sub_1405DA68C.c)
 *     sub_1405DA898 @ 0x1405DA898 (sub_1405DA898.c)
 *     sub_1405DA9A8 @ 0x1405DA9A8 (sub_1405DA9A8.c)
 *     sub_1405DAC04 @ 0x1405DAC04 (sub_1405DAC04.c)
 *     sub_1405DAD64 @ 0x1405DAD64 (sub_1405DAD64.c)
 *     sub_1405DAE60 @ 0x1405DAE60 (sub_1405DAE60.c)
 *     sub_1405DB010 @ 0x1405DB010 (sub_1405DB010.c)
 *     sub_1405DB0D8 @ 0x1405DB0D8 (sub_1405DB0D8.c)
 *     sub_1405DB13C @ 0x1405DB13C (sub_1405DB13C.c)
 *     sub_1405DB370 @ 0x1405DB370 (sub_1405DB370.c)
 *     sub_1405DB5F4 @ 0x1405DB5F4 (sub_1405DB5F4.c)
 *     sub_1405DB7EC @ 0x1405DB7EC (sub_1405DB7EC.c)
 *     sub_1405DB8E0 @ 0x1405DB8E0 (sub_1405DB8E0.c)
 *     sub_1405DD7DC @ 0x1405DD7DC (sub_1405DD7DC.c)
 *     sub_1405DD8E4 @ 0x1405DD8E4 (sub_1405DD8E4.c)
 *     sub_1405DF088 @ 0x1405DF088 (sub_1405DF088.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1405FB2F0 @ 0x1405FB2F0 (sub_1405FB2F0.c)
 *     sub_1405FB3BC @ 0x1405FB3BC (sub_1405FB3BC.c)
 *     sub_1405FB4F4 @ 0x1405FB4F4 (sub_1405FB4F4.c)
 *     sub_1405FB5C0 @ 0x1405FB5C0 (sub_1405FB5C0.c)
 *     sub_1405FBC00 @ 0x1405FBC00 (sub_1405FBC00.c)
 *     sub_1405FD958 @ 0x1405FD958 (sub_1405FD958.c)
 *     sub_14062CE84 @ 0x14062CE84 (sub_14062CE84.c)
 *     sub_14062D1C8 @ 0x14062D1C8 (sub_14062D1C8.c)
 *     sub_14062D2A0 @ 0x14062D2A0 (sub_14062D2A0.c)
 *     sub_14062D678 @ 0x14062D678 (sub_14062D678.c)
 *     sub_14062D8E4 @ 0x14062D8E4 (sub_14062D8E4.c)
 *     sub_14062D974 @ 0x14062D974 (sub_14062D974.c)
 *     sub_14062E19C @ 0x14062E19C (sub_14062E19C.c)
 *     sub_14062E4B8 @ 0x14062E4B8 (sub_14062E4B8.c)
 *     sub_14062EED8 @ 0x14062EED8 (sub_14062EED8.c)
 *     sub_14062F0B8 @ 0x14062F0B8 (sub_14062F0B8.c)
 *     sub_14062F4BC @ 0x14062F4BC (sub_14062F4BC.c)
 *     SeEtwWriteKMCveEvent @ 0x1406304F0 (SeEtwWriteKMCveEvent.c)
 *     sub_140631D34 @ 0x140631D34 (sub_140631D34.c)
 *     KitLogFeatureUsage @ 0x140641A10 (KitLogFeatureUsage.c)
 *     sub_140645F80 @ 0x140645F80 (sub_140645F80.c)
 *     sub_1406461D0 @ 0x1406461D0 (sub_1406461D0.c)
 *     sub_1406F7C44 @ 0x1406F7C44 (sub_1406F7C44.c)
 *     sub_1409D55B0 @ 0x1409D55B0 (sub_1409D55B0.c)
 *     sub_1409D56C0 @ 0x1409D56C0 (sub_1409D56C0.c)
 *     sub_140A6B91C @ 0x140A6B91C (sub_140A6B91C.c)
 *     sub_140AFAD4C @ 0x140AFAD4C (sub_140AFAD4C.c)
 *     sub_140B1CB28 @ 0x140B1CB28 (sub_140B1CB28.c)
 *     sub_140B2FF24 @ 0x140B2FF24 (sub_140B2FF24.c)
 *     sub_140B52CBC @ 0x140B52CBC (sub_140B52CBC.c)
 *     sub_140B52D94 @ 0x140B52D94 (sub_140B52D94.c)
 * Callees:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v10; // r14d
  NTSTATUS v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int8 v17; // r10
  int v18; // r11d
  ULONGLONG Keyword; // r8
  __int64 Level; // rdx
  unsigned __int8 v21; // r10
  __int64 v22; // r11
  char v23; // r10
  unsigned __int8 v24; // r10
  int v25; // r11d
  PEVENT_DATA_DESCRIPTOR v26; // r14
  unsigned __int8 v27; // r10
  __int64 v28; // r11
  __int64 v29; // [rsp+98h] [rbp-80h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-78h]
  __int128 v31; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-60h]

  v29 = 0LL;
  v10 = Filter;
  v12 = 0;
  v31 = 0LL;
  v32 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = v13 + 28;
  if ( !v13 )
    v14 = 0LL;
  if ( *(_BYTE *)(RegHandle + 100)
    && (unsigned __int8)sub_1403031F0(
                          *(_QWORD *)(RegHandle + 32) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword) )
  {
    v12 = sub_140300E50(
            v18,
            v17,
            v10,
            Flags,
            (__int64)EventDescriptor,
            0,
            0,
            (__int64)ActivityId,
            (__int64)RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            0LL,
            (__int64)&v31,
            0LL,
            *(_WORD *)(RegHandle + 98),
            v14,
            (__int64)&v29);
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    Keyword = EventDescriptor->Keyword;
    Level = EventDescriptor->Level;
    v30 = *(_QWORD *)(RegHandle + 40);
    if ( (unsigned __int8)sub_1403031F0(v30 + 96, Level, Keyword) )
      v12 = sub_140300E50(
              *(_QWORD *)(RegHandle + 32),
              v21,
              v10,
              Flags,
              (__int64)EventDescriptor,
              0,
              0,
              (__int64)ActivityId,
              (__int64)RelatedActivityId,
              UserDataCount,
              v22,
              0LL,
              (__int64)&v31,
              v30,
              *(_WORD *)(RegHandle + 98),
              v14,
              (__int64)&v29);
  }
  v15 = *(_QWORD *)(RegHandle + 32);
  if ( *(_QWORD *)(v15 + 400) )
  {
    v23 = *(_BYTE *)(RegHandle + 102);
    v31 = 0LL;
    v32 = 0LL;
    if ( v23 )
    {
      v26 = UserData;
      if ( (unsigned __int8)sub_1403031F0(
                              *(_QWORD *)(v15 + 400) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        v12 = sub_140300E50(
                v25,
                v24,
                0,
                Flags,
                (__int64)EventDescriptor,
                0,
                0,
                (__int64)ActivityId,
                (__int64)RelatedActivityId,
                UserDataCount,
                (__int64)UserData,
                0LL,
                (__int64)&v31,
                0LL,
                *(_WORD *)(RegHandle + 98),
                v14,
                (__int64)&v29);
    }
    else
    {
      v26 = UserData;
    }
    if ( *(_BYTE *)(RegHandle + 103) )
    {
      if ( (unsigned __int8)sub_1403031F0(
                              *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        return sub_140300E50(
                 *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 400LL),
                 v27,
                 0,
                 Flags,
                 (__int64)EventDescriptor,
                 0,
                 0,
                 (__int64)ActivityId,
                 (__int64)RelatedActivityId,
                 UserDataCount,
                 (__int64)v26,
                 0LL,
                 (__int64)&v31,
                 v28,
                 *(_WORD *)(RegHandle + 98),
                 v14,
                 (__int64)&v29);
    }
  }
  return v12;
}
