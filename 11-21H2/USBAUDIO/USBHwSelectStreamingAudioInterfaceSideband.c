/*
 * XREFs of USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0034D38
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBD_CloseHandle @ 0x1C0016FEC (USBD_CloseHandle.c)
 *     USBD_CreateHandle @ 0x1C0017070 (USBD_CreateHandle.c)
 *     USBD_GetEndpointOffloadInformationForIndex @ 0x1C00174C4 (USBD_GetEndpointOffloadInformationForIndex.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C0017700 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     USBD_UrbFree @ 0x1C0017AE8 (USBD_UrbFree.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 *     USBHwFreeOffloadInformation @ 0x1C0033630 (USBHwFreeOffloadInformation.c)
 *     USBHwFreePipes @ 0x1C0033684 (USBHwFreePipes.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0035AA4 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterfaceSideband(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  unsigned int v4; // r15d
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  _QWORD *Pool2; // rax
  char v10; // di
  char v11; // dl
  int v12; // ebx
  __int64 v13; // r13
  PDEVICE_OBJECT v14; // rcx
  char v15; // dl
  char v16; // r8
  unsigned __int16 v17; // ax
  unsigned int *EndpointOffloadInformationForIndex; // rax
  unsigned int v19; // edx
  __int16 v20; // r9
  unsigned int *v21; // rax
  unsigned int v22; // edx
  __int16 v23; // r9
  PURB v24; // rsi
  int v25; // eax
  __int64 v26; // r15
  unsigned int *v27; // rax
  char v28; // dl
  unsigned int *v29; // r12
  PDEVICE_OBJECT v30; // rcx
  char v31; // r8
  unsigned __int16 v32; // ax
  void *v33; // rax
  PDEVICE_OBJECT v34; // rcx
  char v35; // dl
  char v36; // r8
  unsigned __int16 v37; // ax
  unsigned int *v38; // rax
  unsigned int *v39; // r14
  void *v40; // rax
  unsigned int v41; // edx
  void *v42; // rax
  int v43; // ecx
  PVOID v44; // rax
  char v45; // dl
  int USBDHandle; // [rsp+20h] [rbp-38h]
  PURB Urb; // [rsp+A8h] [rbp+50h] BYREF
  USBD_HANDLE v50; // [rsp+B0h] [rbp+58h] BYREF
  PVOID P; // [rsp+B8h] [rbp+60h]

  Urb = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(unsigned __int8 *)(a2 + 4);
  v50 = 0LL;
  v5 = v3[2];
  v6 = v3[18];
  v7 = *(_QWORD *)(v5 + 16);
  v8 = *(_QWORD *)(v7 + 72);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1633843269LL);
  P = Pool2;
  if ( !Pool2 )
  {
    v10 = 1;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        USBDHandle,
        9u,
        0x1Du,
        (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
    v12 = -1073741670;
    goto LABEL_11;
  }
  Pool2[1] = 0LL;
  *Pool2 = a2;
  v12 = USBD_CreateHandle(
          *(PDEVICE_OBJECT *)(v5 + 24),
          *(PDEVICE_OBJECT *)(v5 + 40),
          (ULONG)&WPP_RECORDER_INITIALIZED,
          0x39627845u,
          &v50);
  if ( v12 < 0 )
  {
    v14 = WPP_GLOBAL_Control;
    v10 = 1;
    v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_20:
      v13 = a1;
      goto LABEL_93;
    }
    v17 = 30;
LABEL_22:
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v14->AttachedDevice,
      v15,
      v16,
      (__int64)v14->DeviceExtension,
      USBDHandle,
      9u,
      v17,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
    v13 = a1;
    goto LABEL_93;
  }
  v12 = USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(v50, *(_QWORD *)(v8 + 24), P, v4, (char **)&Urb);
  if ( v12 < 0 )
  {
    v14 = WPP_GLOBAL_Control;
    v10 = 1;
    v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v17 = 31;
    goto LABEL_22;
  }
  EndpointOffloadInformationForIndex = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  *((_WORD *)EndpointOffloadInformationForIndex + 2) = v20;
  if ( *(_DWORD *)(v7 + 860) == 2 )
    *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, v19) + 6) = *(_DWORD *)(v6 + 224);
  v10 = 1;
  if ( v4 > 1 )
  {
    if ( *(_QWORD *)(v6 + 176) )
    {
      v21 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
      *((_WORD *)v21 + 2) = v23;
      if ( *(_DWORD *)(v7 + 860) == 2 )
        *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, v22) + 6) = *(_DWORD *)(v6 + 228);
    }
  }
  v24 = Urb;
  v25 = *(_DWORD *)(v6 + 216) & 0xF000;
  if ( v25 )
  {
    if ( v25 == 4096 )
    {
      LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 3872;
      goto LABEL_43;
    }
    if ( v25 != 0x2000 )
      goto LABEL_43;
  }
  LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 500 * *(_DWORD *)(v6 + 220);
  if ( !*(_QWORD *)(v6 + 176) )
    HIDWORD(v24->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) |= 8u;
LABEL_43:
  v12 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v5 + 40), Urb, v50);
  if ( Urb->UrbHeader.Status < 0 )
  {
    v12 = -1073741808;
LABEL_11:
    v13 = a1;
    goto LABEL_93;
  }
  v13 = a1;
  if ( v12 < 0 )
    goto LABEL_93;
  v26 = v3[19];
  USBHwFreeOffloadInformation(a1);
  v27 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  v29 = v27;
  if ( !v27 )
  {
    v30 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v28 = 1;
    }
    v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v28 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_56;
    v32 = 32;
LABEL_55:
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)v30->AttachedDevice,
      v28,
      v31,
      (__int64)v30->DeviceExtension,
      USBDHandle,
      9u,
      v32,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
LABEL_56:
    v12 = -1073741437;
    goto LABEL_93;
  }
  v33 = (void *)ExAllocatePool2(64LL, *v27, 1650620485LL);
  *(_QWORD *)(v26 + 80) = v33;
  if ( !v33 )
  {
    v34 = WPP_GLOBAL_Control;
    v35 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v35 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    v37 = 33;
LABEL_66:
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)v34->AttachedDevice,
      v35,
      v36,
      (__int64)v34->DeviceExtension,
      USBDHandle,
      9u,
      v37,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
LABEL_67:
    v12 = -1073741670;
    goto LABEL_93;
  }
  memmove(v33, v29, *v29);
  if ( *(_QWORD *)(v6 + 176) )
  {
    v38 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
    v39 = v38;
    if ( !v38 )
    {
      v30 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v28 = 0;
      }
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_56;
      v32 = 34;
      goto LABEL_55;
    }
    v40 = (void *)ExAllocatePool2(64LL, *v38, 1667397701LL);
    *(_QWORD *)(v26 + 88) = v40;
    if ( !v40 )
    {
      v34 = WPP_GLOBAL_Control;
      v35 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v35 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v37 = 35;
      goto LABEL_66;
    }
    memmove(v40, v39, *v39);
  }
  v41 = (unsigned int)v24->UrbOSFeatureDescriptorRequest.hca.Reserved8[0];
  *(_DWORD *)(v26 + 56) = v41;
  *(_QWORD *)(v26 + 64) = v24->UrbControlTransfer.hca.Reserved8[2];
  if ( v41 > 0x14 )
  {
    v12 = -1073741438;
  }
  else
  {
    USBHwFreePipes(a1);
    v42 = (void *)ExAllocatePool2(64LL, 24LL * *(unsigned int *)(v26 + 56), 1096972357LL);
    v43 = v12;
    *(_QWORD *)(v26 + 72) = v42;
    if ( !v42 )
      v43 = -1073741670;
    v12 = v43;
    if ( v43 >= 0 )
    {
      memmove(v42, &v24->UrbOSFeatureDescriptorRequest.hca.Reserved8[1], 24LL * *(unsigned int *)(v26 + 56));
      v44 = P;
LABEL_102:
      ExFreePool(v44);
      goto LABEL_103;
    }
  }
LABEL_93:
  USBHwFreeOffloadInformation(v13);
  v45 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v45 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v45,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      USBDHandle,
      9u,
      0x24u,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  v44 = P;
  if ( P )
    goto LABEL_102;
LABEL_103:
  if ( Urb )
    USBD_UrbFree(v50, Urb);
  if ( v50 )
    USBD_CloseHandle(v50);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      USBDHandle,
      9u,
      0x25u,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  return (unsigned int)v12;
}
