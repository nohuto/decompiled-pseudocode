/*
 * XREFs of ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014FB0
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0009414 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000FEB8 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x1C0017BF4 (WPP_RECORDER_AND_TRACE_SF_ddddd.c)
 *     memset @ 0x1C001AF80 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetSupportedFormats(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v4; // rdx
  int v5; // r15d
  PDEVICE_OBJECT v6; // r10
  bool v7; // bl
  bool v8; // r8
  PIRP v9; // rcx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r13
  int v12; // edx
  int v13; // r8d
  int PinFromEpIndex; // eax
  CSidebandDevice *v15; // rcx
  __int64 v16; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int CompletionMode; // r8d
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // r15
  ULONG Length; // ecx
  unsigned int v23; // r12d
  struct _KSPIN_DESCRIPTOR_EX *v24; // r9
  int v25; // r12d
  __int64 v26; // rcx
  _DWORD *v27; // rax
  unsigned int v28; // r15d
  bool v29; // al
  __int16 v30; // r9
  __int16 v31; // r10
  __int16 v32; // r11
  int v33; // eax
  char v34; // r10
  _DWORD *v35; // rax
  unsigned int v36; // r15d
  bool v37; // r13
  __int16 v38; // r9
  __int16 v39; // r10
  __int16 v40; // r11
  int v41; // eax
  char v42; // r10
  int v43; // [rsp+20h] [rbp-59h]
  int v44; // [rsp+28h] [rbp-51h]
  void *v45; // [rsp+38h] [rbp-41h]
  int v46; // [rsp+60h] [rbp-19h]
  int v47; // [rsp+60h] [rbp-19h]
  struct _IO_STACK_LOCATION *v48; // [rsp+70h] [rbp-9h]
  _DWORD *UserBuffer; // [rsp+70h] [rbp-9h]
  __int64 v50; // [rsp+78h] [rbp-1h]
  unsigned __int8 *v51; // [rsp+80h] [rbp+7h]
  ULONG_PTR v52; // [rsp+88h] [rbp+Fh]
  unsigned int v53; // [rsp+E0h] [rbp+67h] BYREF
  PIRP Irp; // [rsp+E8h] [rbp+6Fh]
  unsigned int v55; // [rsp+F0h] [rbp+77h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v56; // [rsp+F8h] [rbp+7Fh] BYREF

  Irp = a2;
  a2->IoStatus.Information = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v53 = -1;
  v56 = 0LL;
  v48 = CurrentStackLocation;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v5 = -1073741811;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    goto LABEL_9;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                        (CSidebandDevice *)CurrentStackLocation,
                        (struct _KSFILTER_DESCRIPTOR *)v4,
                        Parameters->ReadMode) )
  {
    v5 = -1073741811;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    LODWORD(v4) = 130;
    goto LABEL_9;
  }
  v7 = 1;
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v45 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v12, v13, WPP_GLOBAL_Control->DeviceExtension);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->ReadMode, &v53, &v56);
  LODWORD(v4) = 0;
  v5 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    goto LABEL_37;
  }
  CompletionMode = Parameters->CompletionMode;
  v53 = 0;
  v55 = 0;
  v5 = CSidebandDevice::IntersectDataFormatsWithDataRange(
         v15,
         *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
         CompletionMode,
         v56,
         0LL,
         &v55,
         &v53);
  if ( v5 < 0 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    goto LABEL_45;
  }
  v21 = v55;
  Length = v48->Parameters.Read.Length;
  v23 = v53 + 24 + 8 * v55;
  if ( !Length )
  {
    v9 = Irp;
    v5 = -1073741789;
    Irp->IoStatus.Information = v23;
    goto LABEL_11;
  }
  if ( Length == v23 )
  {
    v52 = v23;
    UserBuffer = Irp->UserBuffer;
    memset(UserBuffer, 0, v23);
    v24 = v56;
    v50 = v21;
    *UserBuffer = v23;
    v25 = 0;
    UserBuffer[1] = Parameters->ReadMode;
    *((_QWORD *)UserBuffer + 2) = UserBuffer + 6;
    UserBuffer[2] = v21;
    v51 = (unsigned __int8 *)&UserBuffer[2 * v21 + 6];
    v5 = CSidebandDevice::IntersectDataFormatsWithDataRange(
           (CSidebandDevice *)&v53,
           *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
           Parameters->CompletionMode,
           v24,
           v51,
           UserBuffer + 2,
           &v53);
    LODWORD(v56) = v5;
    if ( v55 )
    {
      v26 = 0LL;
      v16 = v50;
      v4 = *((_QWORD *)UserBuffer + 2);
      do
      {
        *(_QWORD *)(v26 + v4) = &v51[v25];
        v4 = *((_QWORD *)UserBuffer + 2);
        v27 = *(_DWORD **)(v26 + v4);
        v26 += 8LL;
        v25 += *v27;
        --v16;
      }
      while ( v16 );
    }
    if ( Parameters->CompletionMode )
    {
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v45 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      v53 = 0;
      if ( Parameters->CompletionMode )
      {
        v28 = v53;
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)&Parameters->InboundQuota + 8LL * v28);
          if ( *(_QWORD *)(v4 + 48) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
            && *(_QWORD *)(v4 + 56) == *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4 )
          {
            if ( *(_WORD *)(v4 + 64) == 0xFFFE )
            {
              v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              LOBYTE(v53) = v29;
              if ( v29 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v30 = *(_WORD *)(v4 + 82);
                v31 = *(_WORD *)(v4 + 78);
                v32 = *(_WORD *)(v4 + 66);
                v46 = *(_DWORD *)(v4 + 84);
                v33 = *(_DWORD *)(v4 + 68);
                LOBYTE(v4) = v53;
                LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_ddddd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v4,
                  v16,
                  WPP_GLOBAL_Control->DeviceExtension,
                  v43,
                  v44,
                  136,
                  (_DWORD)v45,
                  v32,
                  v33,
                  v31,
                  v30,
                  v46);
              }
            }
            else
            {
              v34 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v34 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_ddd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v34,
                  *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v43,
                  9u,
                  0x89u,
                  (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
            }
          }
          ++v28;
        }
        while ( v28 < Parameters->CompletionMode );
        v5 = (int)v56;
      }
    }
    if ( UserBuffer[2] )
    {
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v45 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      v35 = UserBuffer;
      v53 = 0;
      if ( UserBuffer[2] )
      {
        v36 = v53;
        do
        {
          v4 = *(_QWORD *)(*((_QWORD *)v35 + 2) + 8LL * v36);
          if ( *(_QWORD *)(v4 + 48) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
            && *(_QWORD *)(v4 + 56) == *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4 )
          {
            if ( *(_WORD *)(v4 + 64) == 0xFFFE )
            {
              v37 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v37 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v38 = *(_WORD *)(v4 + 82);
                v39 = *(_WORD *)(v4 + 78);
                v40 = *(_WORD *)(v4 + 66);
                v47 = *(_DWORD *)(v4 + 84);
                v41 = *(_DWORD *)(v4 + 68);
                LOBYTE(v4) = v37;
                LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_ddddd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v4,
                  v16,
                  WPP_GLOBAL_Control->DeviceExtension,
                  v43,
                  v44,
                  139,
                  (_DWORD)v45,
                  v40,
                  v41,
                  v39,
                  v38,
                  v47);
              }
            }
            else
            {
              v42 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v42 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_ddd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v42,
                  *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v43,
                  9u,
                  0x8Cu,
                  (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
            }
          }
          v35 = UserBuffer;
          ++v36;
        }
        while ( v36 < UserBuffer[2] );
        v5 = (int)v56;
      }
    }
    if ( v5 >= 0 )
    {
      v9 = Irp;
      Irp->IoStatus.Information = v52;
      goto LABEL_11;
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
LABEL_45:
    DeviceExtension = v20->DeviceExtension;
    AttachedDevice = v20->AttachedDevice;
LABEL_37:
    LOBYTE(v4) = v7;
    WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v4, v16, (_DWORD)DeviceExtension);
    goto LABEL_10;
  }
  v5 = -1073741811;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_10;
LABEL_9:
  LOBYTE(v4) = v7;
  WPP_RECORDER_AND_TRACE_SF_dd(v6->AttachedDevice, v4, v8, v6->DeviceExtension);
LABEL_10:
  v9 = Irp;
LABEL_11:
  v9->IoStatus.Status = v5;
  IofCompleteRequest(v9, 0);
  return (unsigned int)v5;
}
