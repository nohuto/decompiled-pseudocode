/*
 * XREFs of ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133F0
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000D774 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x1C0016634 (WPP_RECORDER_AND_TRACE_SF_ddddd.c)
 *     memset @ 0x1C0019940 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetSupportedFormats(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  bool v4; // cf
  int PinFromEpIndex; // r15d
  PDEVICE_OBJECT v6; // r10
  char v7; // bl
  char v8; // r8
  unsigned __int16 v9; // dx
  struct _IRP *v10; // rcx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r13
  char v13; // bl
  char v14; // dl
  CSidebandDevice *v15; // rcx
  char v16; // r8
  PVOID DeviceExtension; // r9
  unsigned __int16 v18; // ax
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int CompletionMode; // r8d
  PDEVICE_OBJECT v21; // rcx
  __int64 v22; // r15
  ULONG Length; // ecx
  unsigned int v24; // r12d
  _DWORD *v25; // rcx
  struct _KSPIN_DESCRIPTOR_EX *v26; // r9
  int v27; // r12d
  unsigned int v28; // r8d
  union KSDATAFORMAT **v29; // rdx
  _DWORD *v30; // r10
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int8 *v33; // r9
  __int64 v34; // rdx
  _DWORD *v35; // rax
  ULONG v36; // r8d
  char v37; // dl
  unsigned int v38; // r15d
  __int64 v39; // rdx
  bool v40; // al
  __int16 v41; // r9
  __int16 v42; // r10
  __int16 v43; // r11
  int v44; // eax
  char v45; // r10
  int v46; // edx
  char v47; // r10
  __int64 v48; // r13
  __int64 v49; // rdx
  bool v50; // r12
  __int16 v51; // r9
  __int16 v52; // r10
  __int16 v53; // r11
  int v54; // eax
  char v55; // r10
  int v56; // [rsp+20h] [rbp-59h]
  int v57; // [rsp+28h] [rbp-51h]
  int v58; // [rsp+28h] [rbp-51h]
  int v59; // [rsp+28h] [rbp-51h]
  int v60; // [rsp+38h] [rbp-41h]
  int v61; // [rsp+60h] [rbp-19h]
  int v62; // [rsp+60h] [rbp-19h]
  struct _KSPIN_DESCRIPTOR_EX *v63; // [rsp+70h] [rbp-9h] BYREF
  _DWORD *UserBuffer; // [rsp+78h] [rbp-1h]
  struct _IO_STACK_LOCATION *v65; // [rsp+80h] [rbp+7h]
  __int64 v66; // [rsp+88h] [rbp+Fh]
  unsigned __int8 *v67; // [rsp+90h] [rbp+17h]
  ULONG_PTR v68; // [rsp+98h] [rbp+1Fh]
  unsigned int v70; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v71; // [rsp+F8h] [rbp+7Fh] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v70 = -1;
  v63 = 0LL;
  v4 = CurrentStackLocation->Parameters.Create.Options < 0x18;
  v65 = CurrentStackLocation;
  if ( v4 )
  {
    PinFromEpIndex = -1073741811;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v9 = 129;
    goto LABEL_10;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, Parameters->ReadMode) )
  {
    PinFromEpIndex = -1073741811;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v9 = 130;
LABEL_10:
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)v6->AttachedDevice,
      v7,
      v8,
      (__int64)v6->DeviceExtension,
      v56,
      v57,
      v9,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_11;
  }
  v13 = 1;
  v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v56,
      9u,
      0x83u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->ReadMode, &v70, &v63);
  if ( PinFromEpIndex >= 0 )
  {
    CompletionMode = Parameters->CompletionMode;
    v70 = 0;
    v71 = 0;
    PinFromEpIndex = CSidebandDevice::IntersectDataFormatsWithDataRange(
                       v15,
                       *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
                       CompletionMode,
                       v63,
                       0LL,
                       &v71,
                       &v70);
    if ( PinFromEpIndex >= 0 )
    {
      v22 = v71;
      Length = v65->Parameters.Read.Length;
      v24 = v70 + 24 + 8 * v71;
      if ( !Length )
      {
        v10 = a2;
        PinFromEpIndex = -1073741789;
        a2->IoStatus.Information = v24;
        goto LABEL_12;
      }
      if ( Length != v24 )
      {
        PinFromEpIndex = -1073741811;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v13 = 0;
        }
        if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v13,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v56,
            v58,
            0x86u,
            (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
        goto LABEL_11;
      }
      v68 = v24;
      UserBuffer = a2->UserBuffer;
      memset(UserBuffer, 0, v24);
      v25 = UserBuffer;
      v26 = v63;
      v66 = v22;
      *UserBuffer = v24;
      v27 = 0;
      v25[1] = Parameters->ReadMode;
      *((_QWORD *)v25 + 2) = v25 + 6;
      v25[2] = v22;
      v28 = Parameters->CompletionMode;
      v65 = (struct _IO_STACK_LOCATION *)(v25 + 2);
      v29 = *(union KSDATAFORMAT ***)&Parameters->InboundQuota;
      v67 = (unsigned __int8 *)&v25[2 * v22 + 6];
      PinFromEpIndex = CSidebandDevice::IntersectDataFormatsWithDataRange(
                         (CSidebandDevice *)&v70,
                         v29,
                         v28,
                         v26,
                         v67,
                         v25 + 2,
                         &v70);
      LODWORD(v63) = PinFromEpIndex;
      if ( v71 )
      {
        v30 = UserBuffer;
        v31 = 0LL;
        v32 = v66;
        v33 = v67;
        v34 = *((_QWORD *)UserBuffer + 2);
        do
        {
          *(_QWORD *)(v31 + v34) = &v33[v27];
          v34 = *((_QWORD *)v30 + 2);
          v35 = *(_DWORD **)(v31 + v34);
          v31 += 8LL;
          v27 += *v35;
          --v32;
        }
        while ( v32 );
      }
      v36 = Parameters->CompletionMode;
      if ( v36 )
      {
        v37 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v37 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v37,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v56,
            v59,
            0x87u,
            (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
          v36 = Parameters->CompletionMode;
        }
        v70 = 0;
        if ( v36 )
        {
          v38 = v70;
          do
          {
            v39 = *(_QWORD *)(*(_QWORD *)&Parameters->InboundQuota + 8LL * v38);
            if ( *(_QWORD *)(v39 + 48) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
              && *(_QWORD *)(v39 + 56) == *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4 )
            {
              if ( *(_WORD *)(v39 + 64) == 0xFFFE )
              {
                v40 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                LOBYTE(v70) = v40;
                if ( v40 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v41 = *(_WORD *)(v39 + 82);
                  v42 = *(_WORD *)(v39 + 78);
                  v43 = *(_WORD *)(v39 + 66);
                  v61 = *(_DWORD *)(v39 + 84);
                  v44 = *(_DWORD *)(v39 + 68);
                  LOBYTE(v39) = v70;
                  LOBYTE(v36) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_ddddd(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v39,
                    v36,
                    WPP_GLOBAL_Control->DeviceExtension,
                    v56,
                    v59,
                    136,
                    v60,
                    v43,
                    v44,
                    v42,
                    v41,
                    v61);
                }
              }
              else
              {
                v45 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v45 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_ddd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v45,
                    *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v56,
                    9u,
                    0x89u,
                    (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
              }
            }
            ++v38;
          }
          while ( v38 < Parameters->CompletionMode );
          PinFromEpIndex = (int)v63;
        }
      }
      v46 = *(_DWORD *)&v65->MajorFunction;
      if ( *(_DWORD *)&v65->MajorFunction )
      {
        v47 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v47 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v47,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v56,
            v59,
            0x8Au,
            (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
          v46 = *(_DWORD *)&v65->MajorFunction;
        }
        v48 = 0LL;
        if ( v46 )
        {
          do
          {
            v49 = *(_QWORD *)(*((_QWORD *)UserBuffer + 2) + 8 * v48);
            if ( *(_QWORD *)(v49 + 48) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
              && *(_QWORD *)(v49 + 56) == *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4 )
            {
              if ( *(_WORD *)(v49 + 64) == 0xFFFE )
              {
                v50 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v50 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v51 = *(_WORD *)(v49 + 82);
                  v52 = *(_WORD *)(v49 + 78);
                  v53 = *(_WORD *)(v49 + 66);
                  v62 = *(_DWORD *)(v49 + 84);
                  v54 = *(_DWORD *)(v49 + 68);
                  LOBYTE(v49) = v50;
                  LOBYTE(v36) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_ddddd(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v49,
                    v36,
                    WPP_GLOBAL_Control->DeviceExtension,
                    v56,
                    v59,
                    139,
                    v60,
                    v53,
                    v54,
                    v52,
                    v51,
                    v62);
                }
              }
              else
              {
                v55 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v55 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_ddd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v55,
                    *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v56,
                    9u,
                    0x8Cu,
                    (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
              }
            }
            v48 = (unsigned int)(v48 + 1);
          }
          while ( (unsigned int)v48 < *(_DWORD *)&v65->MajorFunction );
          PinFromEpIndex = (int)v63;
        }
      }
      if ( PinFromEpIndex >= 0 )
      {
        v10 = a2;
        a2->IoStatus.Information = v68;
        goto LABEL_12;
      }
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v13 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v13 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v18 = 141;
    }
    else
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v13 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v13 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v18 = 133;
    }
    DeviceExtension = v21->DeviceExtension;
    AttachedDevice = v21->AttachedDevice;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v13 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    v18 = 132;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
  }
  WPP_RECORDER_AND_TRACE_SF_d(
    (__int64)AttachedDevice,
    v13,
    v16,
    (__int64)DeviceExtension,
    v56,
    9u,
    v18,
    (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_11:
  v10 = a2;
LABEL_12:
  v10->IoStatus.Status = PinFromEpIndex;
  IofCompleteRequest(v10, 0);
  return (unsigned int)PinFromEpIndex;
}
