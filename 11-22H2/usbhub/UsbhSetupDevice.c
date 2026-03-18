/*
 * XREFs of UsbhSetupDevice @ 0x1C0039728
 * Callers:
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001A250 (UsbhSyncSendCommandToDevice.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0030310 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0032C40 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0032F04 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsContainerID @ 0x1C0033048 (UsbhGetMsOsContainerID.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0033348 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C0033AEC (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0037CEC (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0037E7C (UsbhGetBillboardInfo.c)
 *     UsbhGetDeviceInformation @ 0x1C00382CC (UsbhGetDeviceInformation.c)
 *     Usbh_HubGetUsbDescriptors @ 0x1C003B174 (Usbh_HubGetUsbDescriptors.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0044E20 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C004C188 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C004C294 (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhBuildCompatibleID @ 0x1C004F2B4 (UsbhBuildCompatibleID.c)
 *     UsbhBuildDeviceID @ 0x1C004F9EC (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C004FCFC (UsbhBuildHardwareID.c)
 *     UsbhFreeID @ 0x1C00503BC (UsbhFreeID.c)
 *     UsbhGetLanguageIdString @ 0x1C00503F4 (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1C00507E0 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00509A4 (UsbhGetSerialNumber.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C00524CC (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0052668 (UsbhValidateDeviceDescriptor.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C0052A24 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C005452C (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C00546D0 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C00547AC (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005CE14 (UsbDualRoleFeaturesQueryLocalMachine.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  int *v14; // r13
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  int BosDescriptor; // r14d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  char AlternateUsbDescriptors; // r12
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const EVENT_DESCRIPTOR *v27; // r9
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // eax
  char v33; // cl
  char v34; // al
  __int128 v35; // xmm0
  int MSOS_Descriptor; // eax
  int v37; // edx
  int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rax
  signed int v41; // r14d
  int v42; // r8d
  void *Pool2; // r14
  int QualifierDescriptorFromDevice; // eax
  int v45; // eax
  unsigned int v46; // r10d
  int v47; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v48[4]; // [rsp+54h] [rbp-45h] BYREF
  int v49; // [rsp+58h] [rbp-41h] BYREF
  int v50; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v51; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v52; // [rsp+68h] [rbp-31h]
  __int128 v53; // [rsp+70h] [rbp-29h] BYREF
  __int128 v54; // [rsp+80h] [rbp-19h]
  __int128 v55; // [rsp+90h] [rbp-9h]
  __int64 v56; // [rsp+A0h] [rbp+7h]
  __int64 v57; // [rsp+A8h] [rbp+Fh] BYREF
  char v58; // [rsp+B0h] [rbp+17h]
  int v59; // [rsp+B1h] [rbp+18h]

  v49 = 0;
  v47 = 0;
  v48[0] = 0;
  v52 = FdoExt(a1);
  v6 = PdoExt(a2);
  Log(a1, 4, 1936028740, a2, *((unsigned __int16 *)v6 + 714));
  v7 = (void *)*((_QWORD *)v6 + 299);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  v8 = (void *)*((_QWORD *)v6 + 142);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)v6 + 142) = 0LL;
  }
  v9 = (void *)*((_QWORD *)v6 + 143);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v6 + 143) = 0LL;
  }
  v10 = (void *)*((_QWORD *)v6 + 280);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 280) = 0LL;
  }
  v11 = (void *)*((_QWORD *)v6 + 300);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v6 + 300) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v6 + 355);
  *((_QWORD *)v6 + 301) = 0LL;
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v6 + 355) = 0LL;
  }
  UsbhFreeID(v6 + 532);
  v6[355] &= ~0x200u;
  UsbhFreeID(v6 + 544);
  UsbhFreeID(v6 + 548);
  v13 = (void *)*((_QWORD *)v6 + 316);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)v6 + 316) = 0LL;
  }
  v14 = v6 + 706;
  memset(v6 + 706, 0, 0x40uLL);
  result = UsbhQueryPortState(a1, *((_WORD *)v6 + 714), (__int64)&v49, &v47);
  if ( a3 )
    *a3 = v47;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v6[705] = 1073807368;
    return result;
  }
  v16 = 1LL;
  if ( (v49 & 0x200) != 0 )
  {
    v6[292] = 0;
    v16 = 0LL;
  }
  else if ( (v49 & 0x400) != 0 )
  {
    v6[292] = 2;
    v16 = 2LL;
  }
  else
  {
    v6[292] = 1;
  }
  Log(a1, 4, 1936999473, a2, v16);
  v50 = 0;
  v51 = 18;
  if ( (int)Usbh_HubGetUsbDescriptors(a1, *((_QWORD *)v6 + 145), (int)v6 + 1400, (unsigned int)&v51, 0LL, (__int64)&v50) < 0 )
    goto LABEL_117;
  UsbhGetInitRegUsbDeviceFlags(v17, a2);
  if ( !*((_BYTE *)v6 + 2895) )
    goto LABEL_31;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, (__int64)(v6 + 722)) < 0 )
  {
LABEL_41:
    v6[705] = 1073807390;
    return 3221225485LL;
  }
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_117:
    v6[705] = 1073807360;
    return 3221225485LL;
  }
  if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v6 + 1400, v18, 0, 0LL) )
  {
    v6[705] = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), v6 + 350, 0LL);
LABEL_31:
  result = UsbhGetDeviceInformation(a1, a2);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *((_WORD *)v6 + 701) > 0x200u && (v6[358] & 0x20000) == 0 )
  {
    v20 = *((_QWORD *)v6 + 148);
    v47 = 0;
    BosDescriptor = UsbhGetBosDescriptor(v20, a2, &v47);
    if ( BosDescriptor < 0 )
      return (unsigned int)BosDescriptor;
    v21 = *((_QWORD *)v6 + 300);
    v56 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, v21, (int)v6 + 1400, v47, (__int64)&v53);
    if ( AlternateUsbDescriptors == 1 )
      v6[701] |= 0x20u;
    v24 = *((_QWORD *)&v54 + 1);
    if ( *((_QWORD *)&v54 + 1) )
    {
      if ( *(_BYTE *)(*((_QWORD *)&v54 + 1) + 7LL) && (v6[355] & 0x40000000) == 0 )
      {
        v25 = **((_QWORD **)&v54 + 1);
        *v14 |= 4u;
        *((_QWORD *)v6 + 361) = v25;
        BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v24);
        if ( BosDescriptor < 0 )
          goto LABEL_41;
        AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, (__int64)&v53);
        if ( !AlternateUsbDescriptors )
          return 3221225485LL;
        RtlWriteRegistryValue(0, *((PCWSTR *)v6 + 143), L"MsOs20DescriptorSetInfo", 3u, v6 + 722, 8u);
        v24 = *((_QWORD *)&v54 + 1);
      }
      if ( v24 )
      {
        *v14 |= 1u;
        v6[358] &= 0xFFFFF9FF;
        if ( *(_WORD *)(v24 + 4) )
        {
          LOBYTE(v22) = *(_BYTE *)(v24 + 6);
          UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), 0LL, v22);
          BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, *((__int64 *)&v54 + 1));
          v26 = a1;
          if ( BosDescriptor < 0 )
          {
            v27 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE;
            v6[705] = 1073807388;
LABEL_48:
            UsbhEtwLogHubIrpEvent(v26, 0LL, 0LL, v27);
            return (unsigned int)BosDescriptor;
          }
          AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, *((_QWORD *)&v54 + 1));
          if ( !AlternateUsbDescriptors )
          {
            v6[705] = 1073807389;
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE);
            return 3221225485LL;
          }
          v29 = *v14;
          if ( (*v14 & 0x200) != 0 )
            v6[355] |= 0x20u;
          if ( (v6[295] & 0x10) != 0 && (v6[355] & 4) == 0 && (v29 & 0x80u) != 0 )
          {
            LOBYTE(v28) = 1;
            v30 = *(unsigned __int8 *)(*((_QWORD *)v6 + 357) + 5LL);
            if ( (v52[640] & 1) == 0 )
              v30 = 20LL;
            UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v6 + 145), v28, v30);
            v6[355] |= 0x20000000u;
          }
        }
      }
    }
    v31 = v55;
    if ( (_QWORD)v55 )
    {
      v6[358] |= 0x40000u;
      v6[762] = *(_DWORD *)(v31 + 22);
      v57 = *((_QWORD *)v6 + 382);
      v32 = *(_DWORD *)(v31 + 22);
      v47 = 0;
      v58 = 1;
      v59 = v32;
      ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v57, 13LL);
      UsbDualRoleFeaturesQueryLocalMachine(&v47);
      LOBYTE(v57) = 64;
      HIWORD(v57) = 0;
      LOWORD(v49) = 0;
      v33 = *(_BYTE *)(v55 + 21);
      *(_DWORD *)((char *)&v57 + 2) = v47;
      BYTE1(v57) = v33;
      BosDescriptor = UsbhSyncSendCommandToDevice(*((_QWORD *)v6 + 148), a2, &v57, 0LL, &v49);
      if ( BosDescriptor < 0 )
        Log(a1, 4, 1399075121, 0LL, 0LL);
    }
    if ( *((_QWORD *)&v55 + 1) )
    {
      result = UsbhGetBillboardInfo(*((_QWORD *)v6 + 148), a2, *((__int64 *)&v55 + 1));
      BosDescriptor = result;
      if ( (int)result < 0 )
        return result;
      *((_QWORD *)v6 + 301) = *((_QWORD *)&v55 + 1);
    }
    if ( *(_BYTE *)(*((_QWORD *)v6 + 299) + 4LL) > 1u && (_BYTE)v56 == 1 )
    {
      v34 = *((_BYTE *)v6 + 1404);
      if ( !v34 || v34 == -17 && *((_BYTE *)v6 + 1405) == 2 && *((_BYTE *)v6 + 1406) == 1 )
        v6[355] |= 0x20u;
    }
    if ( !*((_BYTE *)v6 + 2732) && AlternateUsbDescriptors == 1 && (_QWORD)v54 )
    {
      v35 = *(_OWORD *)(v54 + 4);
      *((_BYTE *)v6 + 2732) = 1;
      *(_OWORD *)(v6 + 679) = v35;
    }
    if ( *((_QWORD *)&v53 + 1) )
    {
      v6[355] |= 0x80000u;
      v6[701] |= 0x200u;
    }
  }
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v14 & 2) == 0 )
  {
    MSOS_Descriptor = UsbhGetMSOS_Descriptor(a1, a2);
    BosDescriptor = MSOS_Descriptor;
    if ( (MSOS_Descriptor & 0xC0000000) == 0xC0000000 && MSOS_Descriptor != -1073741637 )
    {
      v27 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_84:
      v26 = a1;
      goto LABEL_48;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0LL, v48);
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  BosDescriptor = UsbhGetSerialNumber(a1);
  v39 = BosDescriptor & 0xC0000000;
  if ( (_DWORD)v39 == -1073741824 )
  {
    v27 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
    goto LABEL_84;
  }
  v40 = *((_QWORD *)v6 + 267);
  if ( v40 )
  {
    v6[355] |= 0x200u;
    v39 = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = (__int64)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v37, v38, 40, (__int64)"FKh&", v40);
    }
  }
  if ( (v6[358] & 0x400) != 0 && (v6[355] & 0x20) == 0 )
    *((_QWORD *)v6 + 316) = UsbhGetMsOsExtendedConfigDesc(v39, a2);
  if ( (v6[295] & 0x10) == 0 )
    BosDescriptor = UsbhGetMsOsContainerID(a1, a2);
  if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
    return (unsigned int)BosDescriptor;
  UsbhFreeID(v6 + 524);
  UsbhFreeID(v6 + 520);
  UsbhFreeID(v6 + 528);
  v41 = UsbhBuildDeviceID(a1, a2, v6 + 520);
  if ( v41 >= 0 )
  {
    v41 = UsbhBuildHardwareID(a1, a2, v6 + 524);
    if ( v41 >= 0 )
    {
      v41 = UsbhBuildCompatibleID(a1, a2, v6 + 528);
      if ( (v41 & 0xC0000000) != 0xC0000000 )
        goto LABEL_104;
      UsbhFreeID(v6 + 524);
    }
    UsbhFreeID(v6 + 520);
  }
LABEL_104:
  UsbhGetLanguageIdString(a1);
  if ( *((_BYTE *)v6 + 1415) && (v6[358] & 0x800) == 0 )
    UsbhGetProductIdString(*((_QWORD *)v6 + 148));
  if ( v41 >= 0 && v52[634] == 1 && v6[292] == 1 && *((_WORD *)v6 + 701) >= 0x200u )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 10LL, 1112885333LL);
    if ( Pool2 )
    {
      LOWORD(v49) = 10;
      QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(a1, a2, v42, (_DWORD)Pool2, (__int64)&v49);
      if ( QualifierDescriptorFromDevice >= 0 )
      {
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 714),
          100,
          (int)Pool2,
          10,
          QualifierDescriptorFromDevice,
          0,
          usbfile_bus_c,
          4558,
          0);
        v6[355] |= 1u;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    v41 = 0;
  }
  v45 = Usbh__TestPoint__Ulong(a1, 6u, v41, *((unsigned __int16 *)v6 + 714));
  Log(a1, 4, 1936999486, a2, v45);
  return v46;
}
