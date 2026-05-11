/*
 * XREFs of ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000DA04 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00118C4 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012200 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00124A0 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012680 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012800 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012980 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012B64 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013150 (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133F0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013C48 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013E2C (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013FAC (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014548 (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C8 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014C8C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00150E4 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015680 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159C4 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015C84 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001614C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::SidebandApi(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v5; // si
  char v6; // dl
  char v7; // r8
  int v8; // ebx
  char v9; // dl
  unsigned int LowPart; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  char v15; // dl
  int SupportedFormats; // eax
  char v17; // dl
  PDEVICE_OBJECT v18; // rcx
  char v19; // dl
  char v20; // r8
  unsigned __int16 v21; // ax
  char v22; // dl
  char v23; // dl
  char v24; // dl
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  char v29; // dl
  char v30; // dl
  char v31; // dl
  char v32; // dl
  char v33; // dl
  char v34; // dl
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  char v39; // dl
  char v40; // dl
  char v41; // dl
  char v42; // dl
  char v43; // dl
  char v44; // dl
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  char v48; // dl
  char v49; // dl
  char v50; // dl
  char v51; // dl
  char v52; // dl
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]
  __int64 RemlockSizea; // [rsp+20h] [rbp-58h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
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
      RemlockSize,
      9u,
      0x9Eu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 6) + 8LL), 0LL, File, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart > 0x220037 )
    {
      if ( LowPart <= 0x22004F )
      {
        if ( LowPart == 2228303 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v44 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v44 = 0;
          }
          if ( v44 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v44,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xB1u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::GetSupportedFormats(this, a2);
          goto LABEL_70;
        }
        v35 = LowPart - 2228283;
        if ( !v35 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v43 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v43 = 0;
          }
          if ( v43 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v43,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xACu,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::StreamOpen(this, a2);
          goto LABEL_70;
        }
        v36 = v35 - 4;
        if ( !v36 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v42 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v42 = 0;
          }
          if ( v42 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v42,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xADu,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::StreamClose(this, a2);
          goto LABEL_70;
        }
        v37 = v36 - 4;
        if ( !v37 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v41 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v41 = 0;
          }
          if ( v41 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v41,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xAEu,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::StreamStart(this, a2);
          goto LABEL_70;
        }
        v38 = v37 - 4;
        if ( !v38 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v40 = 0;
          }
          if ( v40 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v40,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xAFu,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::StreamSuspend(this, a2);
          goto LABEL_70;
        }
        if ( v38 == 4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v39 = 0;
          }
          if ( v39 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v39,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xB0u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::GetStreamStatusUpdate(this, a2);
          goto LABEL_70;
        }
        goto LABEL_191;
      }
      v45 = LowPart - 2228307;
      if ( !v45 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v51 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v51 = 0;
        }
        if ( v51 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v51,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xB2u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        SupportedFormats = CSidebandDevice::GetSiop(this, a2);
        goto LABEL_70;
      }
      v46 = v45 - 12;
      if ( !v46 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v50 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v50 = 0;
        }
        if ( v50 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v50,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xB3u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        SupportedFormats = CSidebandDevice::SetSiop(this, a2);
        goto LABEL_70;
      }
      v47 = v46 - 4;
      if ( !v47 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v49 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v49 = 0;
        }
        if ( v49 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v49,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xB4u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        SupportedFormats = CSidebandDevice::SetSidebandClaimed(this, a2);
        goto LABEL_70;
      }
      if ( v47 != 4 )
        goto LABEL_191;
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v19 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = 181;
        goto LABEL_52;
      }
    }
    else
    {
      if ( LowPart == 2228279 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v34 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v34 = 0;
        }
        if ( v34 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v34,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xABu,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        SupportedFormats = CSidebandDevice::SetSidetone(this, a2);
        goto LABEL_70;
      }
      if ( LowPart > 0x22001F )
      {
        v25 = LowPart - 2228259;
        if ( !v25 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v33 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v33 = 0;
          }
          if ( v33 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v33,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xA6u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::GetMutePropertyValues(this, a2);
          goto LABEL_70;
        }
        v26 = v25 - 4;
        if ( !v26 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v32 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v32 = 0;
          }
          if ( v32 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v32,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xA7u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::SetMute(this, a2);
          goto LABEL_70;
        }
        v27 = v26 - 4;
        if ( !v27 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v31 = 0;
          }
          if ( v31 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v31,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xA8u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::GetMuteStatusUpdate(this, a2);
          goto LABEL_70;
        }
        v28 = v27 - 4;
        if ( !v28 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v30 = 0;
          }
          if ( v30 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v30,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xA9u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::GetSidetoneVolumePropertyValues(this, a2);
          goto LABEL_70;
        }
        if ( v28 == 4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v29 = 0;
          }
          if ( v29 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v29,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xAAu,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::GetSidetoneStatusUpdate(this, a2);
          goto LABEL_70;
        }
        goto LABEL_191;
      }
      if ( LowPart == 2228255 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v24 = 0;
        }
        if ( v24 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v24,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xA5u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        SupportedFormats = CSidebandDevice::GetVolumeStatusUpdate(this, a2);
        goto LABEL_70;
      }
      v11 = LowPart - 2228231;
      if ( !v11 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v23 = 0;
        }
        if ( v23 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v23,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xA0u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        SupportedFormats = CSidebandDevice::GetDeviceDescriptor(this, a2);
        goto LABEL_70;
      }
      v12 = v11 - 4;
      if ( !v12 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v22 = 0;
        }
        if ( v22 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v22,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xA1u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        SupportedFormats = CSidebandDevice::GetErrorStatusUpdate(this, a2);
        goto LABEL_70;
      }
      v13 = v12 - 4;
      if ( v13 )
      {
        v14 = v13 - 8;
        if ( !v14 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v17 = 0;
          }
          if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v17,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xA3u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::GetVolumePropertyValues(this, a2);
          goto LABEL_70;
        }
        if ( v14 == 4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v15 = 0;
          }
          if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v15,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              RemlockSizea,
              9u,
              0xA4u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          SupportedFormats = CSidebandDevice::SetVolume(this, a2);
          goto LABEL_70;
        }
LABEL_191:
        v8 = -1073741437;
        a2->IoStatus.Information = 0LL;
        a2->IoStatus.Status = -1073741437;
        IofCompleteRequest(a2, 0);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v48 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v48 = 0;
        }
        if ( v48 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v48,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            RemlockSizea,
            9u,
            0xB6u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        goto LABEL_229;
      }
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v19 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = 162;
LABEL_52:
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)v18->AttachedDevice,
          v19,
          v20,
          (__int64)v18->DeviceExtension,
          RemlockSizea,
          9u,
          v21,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
      }
    }
    SupportedFormats = CSidebandDevice::GetEndpointDescriptor(this, a2);
LABEL_70:
    v8 = SupportedFormats;
LABEL_229:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x20u);
    goto LABEL_230;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    v9 = 0;
  }
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      RemlockSizea,
      9u,
      0x9Fu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  a2->IoStatus.Status = v8;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
LABEL_230:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v52 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v52 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( v52 || v5 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v52,
      v5,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      RemlockSizea,
      9u,
      0xB7u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)v8;
}
