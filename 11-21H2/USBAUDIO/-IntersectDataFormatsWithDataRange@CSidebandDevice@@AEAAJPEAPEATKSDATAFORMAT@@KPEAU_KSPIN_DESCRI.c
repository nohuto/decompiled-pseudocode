/*
 * XREFs of ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000D774
 * Callers:
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133F0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 *     PinValidateDataFormat @ 0x1C002BBF0 (PinValidateDataFormat.c)
 */

__int64 __fastcall CSidebandDevice::IntersectDataFormatsWithDataRange(
        CSidebandDevice *this,
        union KSDATAFORMAT **a2,
        unsigned int a3,
        struct _KSPIN_DESCRIPTOR_EX *a4,
        unsigned __int8 *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int v8; // esi
  unsigned int v9; // edi
  union KSDATAFORMAT **v10; // r9
  char v11; // bl
  char v12; // dl
  char v13; // r8
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  ULONG v17; // ecx
  const PKSDATARANGE *DataRanges; // rdi
  union KSDATAFORMAT *v19; // r14
  int v20; // eax
  char v21; // dl
  int v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  int v25; // [rsp+B0h] [rbp+8h]
  union KSDATAFORMAT **v26; // [rsp+B8h] [rbp+10h]
  ULONG v28; // [rsp+C8h] [rbp+20h]

  v26 = a2;
  v8 = 0;
  v9 = a3;
  v10 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v12 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
  {
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      9u,
      0x48u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    v10 = v26;
  }
  v14 = 0;
  v25 = 0;
  v15 = 0;
  v16 = 0;
  *a6 = 0;
  if ( v9 )
  {
    do
    {
      v17 = 0;
      v28 = 0;
      if ( a4->PinDescriptor.DataRangesCount )
      {
        DataRanges = a4->PinDescriptor.DataRanges;
        v19 = *v10;
        do
        {
          v24 = v17;
          v20 = PinValidateDataFormat(a4, DataRanges[v17], v19);
          v8 = v20;
          if ( v20 < 0 )
          {
            if ( v20 != -1073741198 )
              goto LABEL_25;
          }
          else
          {
            if ( a5 && *a7 >= v19->FormatSize + v25 )
            {
              memmove(&a5[v25], v19, v19->FormatSize);
              DataRanges = a4->PinDescriptor.DataRanges;
              v19 = *v26;
              v25 += (*v26)->FormatSize;
            }
            ++v14;
            v15 += v19->FormatSize;
          }
          v17 = ((DataRanges[v24]->Flags & 2) != 0) + 1 + v28;
          v28 = v17;
        }
        while ( v17 < a4->PinDescriptor.DataRangesCount );
        v10 = v26;
        v9 = a3;
      }
      ++v10;
      ++v16;
      v26 = v10;
    }
    while ( v16 < v9 );
    if ( v14 )
    {
      v8 = 0;
      *a6 = v14;
      *a7 = v15;
    }
  }
LABEL_25:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v21 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( v21 || v11 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v11,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      9u,
      0x49u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return v8;
}
