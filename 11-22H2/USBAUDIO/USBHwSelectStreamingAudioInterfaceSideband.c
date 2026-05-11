/*
 * XREFs of USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0032A24
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     USBD_CloseHandle @ 0x1C00185A0 (USBD_CloseHandle.c)
 *     USBD_CreateHandle @ 0x1C0018624 (USBD_CreateHandle.c)
 *     USBD_GetEndpointOffloadInformationForIndex @ 0x1C0018A88 (USBD_GetEndpointOffloadInformationForIndex.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C0018CC0 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     USBD_UrbFree @ 0x1C00190A8 (USBD_UrbFree.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     USBHwFreePipes @ 0x1C002A2A8 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1C0031F0C (USBHwFreeOffloadInformation.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0038A60 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterfaceSideband(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  USBD_HANDLE v3; // r13
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdi
  _QWORD *Pool2; // rax
  PDEVICE_OBJECT *v11; // rdx
  ULONG *v12; // r8
  char v13; // di
  int v14; // ebx
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  unsigned int *EndpointOffloadInformationForIndex; // rax
  __int16 v20; // r9
  unsigned int *v21; // rax
  __int16 v22; // r9
  PURB v23; // r14
  int v24; // eax
  __int64 v25; // r15
  unsigned int *v26; // rax
  int v27; // edx
  int v28; // r8d
  unsigned int *v29; // r12
  PDEVICE_OBJECT v30; // rcx
  void *v31; // rax
  int v32; // edx
  int v33; // r8d
  PDEVICE_OBJECT v34; // rcx
  unsigned int *v35; // rax
  unsigned int *v36; // rsi
  void *v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rax
  int v40; // ecx
  PVOID v41; // rax
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  __int64 v46; // [rsp+50h] [rbp-18h]
  PURB Urb; // [rsp+B8h] [rbp+50h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+C0h] [rbp+58h] BYREF
  PVOID P; // [rsp+C8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  Urb = 0LL;
  v5 = *(unsigned __int8 *)(a2 + 4);
  USBDHandle = 0LL;
  v6 = *(_QWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v2 + 144);
  v46 = v2;
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v8 + 72);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1633843269LL);
  P = Pool2;
  v11 = &WPP_GLOBAL_Control;
  v12 = &WPP_RECORDER_INITIALIZED;
  if ( !Pool2 )
  {
    v13 = 1;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v11,
        (_DWORD)v12,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v14 = -1073741670;
    goto LABEL_91;
  }
  Pool2[1] = 0LL;
  *Pool2 = a2;
  v14 = USBD_CreateHandle(
          *(PDEVICE_OBJECT *)(v6 + 24),
          *(PDEVICE_OBJECT *)(v6 + 40),
          (ULONG)&WPP_RECORDER_INITIALIZED,
          0x39627845u,
          &USBDHandle);
  if ( v14 < 0 )
  {
    v13 = 1;
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v15, v16, WPP_GLOBAL_Control->DeviceExtension);
      v3 = USBDHandle;
    }
    else
    {
      v3 = USBDHandle;
    }
    goto LABEL_91;
  }
  v3 = USBDHandle;
  v14 = USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
          USBDHandle,
          *(_QWORD *)(v9 + 24),
          P,
          v5,
          (char **)&Urb);
  if ( v14 < 0 )
  {
    v13 = 1;
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v17, v18, WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_91;
  }
  EndpointOffloadInformationForIndex = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  *((_WORD *)EndpointOffloadInformationForIndex + 2) = v20;
  if ( *(_DWORD *)(v8 + 860) == 2 )
    *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0) + 6) = *(_DWORD *)(v7 + 224);
  v13 = 1;
  if ( v5 > 1 )
  {
    if ( *(_QWORD *)(v7 + 176) )
    {
      v21 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
      *((_WORD *)v21 + 2) = v22;
      if ( *(_DWORD *)(v8 + 860) == 2 )
        *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u) + 6) = *(_DWORD *)(v7 + 228);
    }
  }
  v23 = Urb;
  v24 = *(_DWORD *)(v7 + 216) & 0xF000;
  if ( v24 )
  {
    if ( v24 == 4096 )
    {
      LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 3872;
      goto LABEL_41;
    }
    if ( v24 != 0x2000 )
      goto LABEL_41;
  }
  LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 500 * *(_DWORD *)(v7 + 220);
  if ( !*(_QWORD *)(v7 + 176) )
    HIDWORD(v23->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) |= 8u;
LABEL_41:
  v14 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v6 + 40), Urb, v3);
  if ( Urb->UrbHeader.Status < 0 )
  {
    v14 = -1073741808;
    goto LABEL_91;
  }
  if ( v14 < 0 )
    goto LABEL_91;
  v25 = *(_QWORD *)(v46 + 152);
  USBHwFreeOffloadInformation(a1);
  v26 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  v29 = v26;
  if ( !v26 )
  {
    v30 = WPP_GLOBAL_Control;
    LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v28) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v27 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_54;
    goto LABEL_53;
  }
  v31 = (void *)ExAllocatePool2(64LL, *v26, 1650620485LL);
  *(_QWORD *)(v25 + 80) = v31;
  if ( !v31 )
  {
    v34 = WPP_GLOBAL_Control;
    LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v33) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v32 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_64;
    goto LABEL_63;
  }
  memmove(v31, v29, *v29);
  if ( *(_QWORD *)(v7 + 176) )
  {
    v35 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
    v36 = v35;
    if ( !v35 )
    {
      v30 = WPP_GLOBAL_Control;
      LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v28) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v27 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
LABEL_53:
      WPP_RECORDER_AND_TRACE_SF_(v30->AttachedDevice, v27, v28, v30->DeviceExtension);
LABEL_54:
      v14 = -1073741437;
      goto LABEL_91;
    }
    v37 = (void *)ExAllocatePool2(64LL, *v35, 1667397701LL);
    *(_QWORD *)(v25 + 88) = v37;
    if ( !v37 )
    {
      v34 = WPP_GLOBAL_Control;
      LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v33) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v32 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_64;
LABEL_63:
      WPP_RECORDER_AND_TRACE_SF_(v34->AttachedDevice, v32, v33, v34->DeviceExtension);
LABEL_64:
      v14 = -1073741670;
      goto LABEL_91;
    }
    memmove(v37, v36, *v36);
  }
  v38 = (unsigned int)v23->UrbOSFeatureDescriptorRequest.hca.Reserved8[0];
  *(_DWORD *)(v25 + 56) = v38;
  *(_QWORD *)(v25 + 64) = v23->UrbControlTransfer.hca.Reserved8[2];
  if ( v38 > 0x14 )
  {
    v14 = -1073741438;
  }
  else
  {
    USBHwFreePipes(a1);
    v39 = ExAllocatePool2(64LL, 24LL * *(unsigned int *)(v25 + 56), 1096972357LL);
    v40 = v14;
    *(_QWORD *)(v25 + 72) = v39;
    if ( !v39 )
      v40 = -1073741670;
    v14 = v40;
    if ( v40 >= 0 )
    {
      memmove(
        *(void **)(v25 + 72),
        &v23->UrbOSFeatureDescriptorRequest.hca.Reserved8[1],
        24LL * *(unsigned int *)(v25 + 56));
      v41 = P;
LABEL_100:
      ExFreePool(v41);
      goto LABEL_101;
    }
  }
LABEL_91:
  USBHwFreeOffloadInformation(a1);
  LOBYTE(v42) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v42 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v43) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v42, v43, WPP_GLOBAL_Control->DeviceExtension);
  }
  v41 = P;
  if ( P )
    goto LABEL_100;
LABEL_101:
  v44 = (int)Urb;
  if ( Urb )
    USBD_UrbFree(v3, Urb);
  if ( v3 )
    USBD_CloseHandle(v3);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v13 = 0;
  }
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v44) = v13;
    LOBYTE(v43) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v44, v43, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v14;
}
