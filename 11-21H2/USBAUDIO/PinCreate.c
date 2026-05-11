/*
 * XREFs of PinCreate @ 0x1C002AE40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     PinAddPinToList @ 0x1C00020DC (PinAddPinToList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     PinValidateDataFormat @ 0x1C002BBF0 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinCreate(PKSPIN Pin)
{
  const KSPIN_DESCRIPTOR_EX *Descriptor; // rbp
  char v2; // bl
  PKSDATARANGE v4; // r13
  char v5; // si
  char v6; // dl
  char v7; // r8
  NTSTATUS v8; // ebx
  char v9; // dl
  PKSDATAFORMAT ConnectionFormat; // rdx
  char v11; // r9
  unsigned int *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r11d
  unsigned int *v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // r10d
  unsigned __int64 v18; // r8
  unsigned int Interfaces; // edx
  unsigned int v20; // ecx
  ULONG v21; // edi
  ULONG DataRangesCount; // r15d
  PKSDATARANGE v23; // r12
  int v24; // eax
  unsigned int v25; // eax
  char *Pool2; // rax
  char *v27; // rdi
  __int64 v29; // [rsp+20h] [rbp-88h]
  char v30; // [rsp+50h] [rbp-58h]
  union $A4FB595EF421231CAF150DDD3288A6D5 *v31; // [rsp+58h] [rbp-50h]
  PKSDEVICE Device; // [rsp+60h] [rbp-48h]
  GUID v33; // [rsp+68h] [rbp-40h]
  union $A4FB595EF421231CAF150DDD3288A6D5 *v34; // [rsp+68h] [rbp-40h]

  Descriptor = Pin->Descriptor;
  v2 = 0;
  v30 = 0;
  v4 = 0LL;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v29,
      8u,
      0xEu,
      (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
  Device = KsGetDevice(Pin);
  if ( !Device )
  {
    v8 = -1073741811;
    goto LABEL_60;
  }
  if ( HIDWORD(Descriptor[1].Dispatch) >= LODWORD(Descriptor[1].Dispatch) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v9 = 0;
    }
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v29,
        0xAu,
        0xFu,
        (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
    v8 = -1073741670;
    goto LABEL_60;
  }
  ConnectionFormat = Pin->ConnectionFormat;
  v31 = ConnectionFormat;
  if ( (ConnectionFormat->Flags & 2) != 0 )
  {
    v11 = 0;
    v12 = (ULONG *)((char *)&ConnectionFormat->FormatSize + ((ConnectionFormat->FormatSize + 7) & 0xFFFFFFF8));
    v33 = AUDIO_SIGNALPROCESSINGMODE_RAW;
    v13 = *v12;
    if ( v13 < 8 )
    {
LABEL_24:
      v8 = -1073741811;
      goto LABEL_60;
    }
    v14 = v12[1];
    v15 = v12 + 2;
    v16 = v13 - 8;
    v17 = 0;
    if ( v14 )
    {
      while ( v16 >= 0x18 )
      {
        if ( *((_QWORD *)v15 + 1) == *(_QWORD *)&KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data1
          && *((_QWORD *)v15 + 2) == *(_QWORD *)KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data4 )
        {
          if ( v16 < 0x28 || *v15 != 40 )
            goto LABEL_24;
          v11 = 1;
          v33 = *(GUID *)(v15 + 6);
        }
        v18 = (*v15 + 7) & 0xFFFFFFF8;
        if ( v16 < v18 )
          goto LABEL_24;
        v15 = (unsigned int *)((char *)v15 + v18);
        v16 -= v18;
        if ( ++v17 >= v14 )
        {
          if ( !v11 )
            goto LABEL_41;
          Interfaces = (unsigned int)Descriptor[1].PinDescriptor.Interfaces;
          v8 = -1073741198;
          if ( Interfaces )
          {
            v20 = 0;
            while ( *(_OWORD *)&v33 != *(_OWORD *)(*(_QWORD *)&Descriptor[1].PinDescriptor.MediumsCount + 16LL * v20) )
            {
              if ( ++v20 >= Interfaces )
                goto LABEL_60;
            }
            v2 = 0;
            goto LABEL_41;
          }
          goto LABEL_60;
        }
      }
      goto LABEL_24;
    }
LABEL_41:
    ConnectionFormat = v31;
  }
  v21 = 0;
  DataRangesCount = Descriptor->PinDescriptor.DataRangesCount;
  if ( !DataRangesCount )
    goto LABEL_59;
  do
  {
    v34 = v4;
    if ( v2 )
      break;
    v23 = Descriptor->PinDescriptor.DataRanges[v21];
    v4 = v23;
    v24 = PinValidateDataFormat(Descriptor, v23, ConnectionFormat);
    v8 = v24;
    if ( v24 < 0 )
    {
      if ( v24 != -1073741198 )
        goto LABEL_60;
    }
    else
    {
      v30 = 1;
    }
    ConnectionFormat = v31;
    if ( v24 < 0 )
      v4 = v34;
    v2 = v30;
    v21 += ((v23->Flags & 2) != 0) + 1;
  }
  while ( v21 < DataRangesCount );
  if ( v4 )
  {
    v25 = v4[1].Specifier.Data1 + 176;
    if ( v25 < 0xB0 )
      goto LABEL_24;
    Pool2 = (char *)ExAllocatePool2(64LL, v25, 1096972357LL);
    Pin->Context = Pool2;
    v27 = Pool2;
    if ( Pool2 )
    {
      v8 = KsAddItemToObjectBag(Pin->Bag, Pool2, ExFreePool);
      if ( v8 >= 0 )
      {
        *((_QWORD *)v27 + 2) = Device;
        *((_QWORD *)v27 + 18) = v4;
        *((_QWORD *)v27 + 19) = v27 + 176;
        *((_QWORD *)v27 + 9) = v27 + 64;
        *((_QWORD *)v27 + 8) = v27 + 64;
        *((_QWORD *)v27 + 3) = Pin;
        v27[47] = 0;
        *((_QWORD *)v27 + 4) = Descriptor;
        KeInitializeSpinLock((PKSPIN_LOCK)v27 + 14);
        KeInitializeEvent((PRKEVENT)v27 + 5, NotificationEvent, 0);
        v8 = (**(__int64 (__fastcall ***)(PKSPIN))(*((_QWORD *)v27 + 18) + 128LL))(Pin);
        if ( v8 >= 0 )
        {
          ++HIDWORD(Descriptor[1].Dispatch);
          v27[168] = 1;
          KsPinRegisterPowerCallbacks(Pin, PinGoToLowPowerState, PinGoToFullPowerState);
          v8 = PinAddPinToList(Pin);
          if ( v8 >= 0 )
            return (unsigned int)v8;
        }
      }
      else
      {
        ExFreePool(v27);
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
LABEL_59:
    v8 = -1073741198;
  }
LABEL_60:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v29,
      8u,
      0x10u,
      (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
  return (unsigned int)v8;
}
