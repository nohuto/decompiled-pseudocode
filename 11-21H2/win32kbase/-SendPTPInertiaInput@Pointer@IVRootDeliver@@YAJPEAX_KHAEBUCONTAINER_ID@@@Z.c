/*
 * XREFs of ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01F4D84
 * Callers:
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF854 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E89EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F0028 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FCFCC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD138 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01FDD9C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendPTPInertiaInput(
        IVRootDeliver::Pointer *this,
        void *a2,
        __int64 a3,
        const struct CONTAINER_ID *a4)
{
  void *v6; // r12
  char *v7; // r10
  int v8; // r11d
  struct _UNICODE_STRING v10; // xmm6
  int v11; // edx
  int v12; // r8d
  int v13; // r14d
  int v14; // r8d
  int v15; // edx
  char v16; // bl
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  char v19; // bl
  struct _UNICODE_STRING *v20; // rdi
  struct _UNICODE_STRING v21; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-9h] BYREF
  struct _UNICODE_STRING *v23; // [rsp+78h] [rbp+7h]

  *(_QWORD *)&v21.Length = 0LL;
  v6 = 0LL;
  if ( !CIVChannel::ContainerConnected(*((_DWORD *)gpHidInput + 318)) )
    return 0LL;
  v10 = 0LL;
  if ( v7 )
  {
    v13 = RawInputManagerDeviceObjectResolveHandle(v7, 3u, v8 == 0, (PVOID *)&v21);
    if ( v13 < 0 )
    {
      v19 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          24,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v13);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v19 = 0;
      if ( (_BYTE)v11 || v19 )
      {
        LOBYTE(v12) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          25,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
      }
      return (unsigned int)v13;
    }
    v6 = *(void **)&v21.Length;
    v10 = *(struct _UNICODE_STRING *)(*(_QWORD *)&v21.Length + 296LL);
  }
  CIVGenericSerializer::CIVGenericSerializer(v22);
  v15 = (int)v23;
  if ( v23 )
  {
    v21 = v10;
    v16 = 1;
    v13 = CIVSerializer::Serialize((CIVSerializer *)v22, v23, &v21, 1);
    if ( v13 < 0 )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v16 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_64;
      v18 = 28;
    }
    else
    {
      v13 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v22);
      if ( v13 >= 0 )
      {
        v20 = v23;
        v21 = v10;
        v13 = CIVSerializer::Serialize((CIVSerializer *)v22, v23, &v21, 0);
        if ( v13 < 0 )
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v16 = 0;
          }
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v18 = 27;
        }
        else
        {
          *(_QWORD *)&v20[1].Length = a2;
          v13 = ivrIVSend((const struct CIVSerializer *)v22, 2u, a4);
          if ( v13 >= 0 )
            goto LABEL_64;
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v16 = 0;
          }
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v18 = 30;
        }
      }
      else
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v16 = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_64;
        v18 = 26;
      }
    }
  }
  else
  {
    v13 = -1073741801;
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v16 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_64;
    v18 = 29;
  }
  LOBYTE(v15) = v16;
  WPP_RECORDER_AND_TRACE_SF_D(
    v17->AttachedDevice,
    v15,
    v14,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    12,
    v18,
    (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
    v13);
LABEL_64:
  if ( v6 )
    ObfDereferenceObject(v6);
  v22[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v22);
  return (unsigned int)v13;
}
