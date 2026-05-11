/*
 * XREFs of ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70
 * Callers:
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C00094E0 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ACF0 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000B260 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BF5C (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C7A8 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000D0E4 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012B64 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133F0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013FAC (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C8 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014C8C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00150E4 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015680 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015C84 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001614C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall CSidebandDevice::GetPinFromEpIndex(
        CSidebandDevice *this,
        int a2,
        unsigned int *a3,
        struct _KSPIN_DESCRIPTOR_EX **a4)
{
  unsigned int v8; // edi
  char v9; // bl
  char v10; // dl
  char v11; // r8
  __int64 v12; // rax
  int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // r10d
  int v17; // r11d
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // dl
  char v23; // dl
  char v24; // r8
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+28h] [rbp-40h]

  v8 = -1073741811;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v10 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      9u,
      0x45u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  v12 = *((_QWORD *)this + 5);
  v13 = 0;
  *a3 = -1;
  v14 = 0;
  *a4 = 0LL;
  v15 = *(_QWORD *)(v12 + 16);
  v16 = *(_DWORD *)(v15 + 160);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v15 + 164);
    v18 = *(_QWORD *)(v15 + 168);
    do
    {
      v19 = v18 + v14 * v17;
      if ( *(_DWORD *)(v19 + 68) != 4 )
      {
        v20 = **(_QWORD **)(v19 + 56);
        if ( *(_QWORD *)(v20 + 32) != *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1
          || *(_QWORD *)(v20 + 40) != *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4 )
        {
          if ( a2 == v13 )
          {
            *a3 = v14;
            *a4 = (struct _KSPIN_DESCRIPTOR_EX *)v19;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              v23 = 0;
            }
            if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              v24 = 0;
            }
            if ( v23 || v24 )
              WPP_RECORDER_AND_TRACE_SF_dd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v23,
                v24,
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v25,
                v26,
                0x46u,
                (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
            v8 = 0;
            break;
          }
          ++v13;
        }
      }
      ++v14;
    }
    while ( v14 < v16 );
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v21 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( v21 || v9 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v9,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      9u,
      0x47u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return v8;
}
