/*
 * XREFs of ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000FEB8
 * Callers:
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014FB0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     PinValidateDataFormat @ 0x1C0038DF0 (PinValidateDataFormat.c)
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
  unsigned int v7; // r10d
  unsigned int v8; // edi
  union KSDATAFORMAT **v9; // r11
  char v10; // bl
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  unsigned int v13; // r14d
  ULONG i; // r12d
  const PKSDATARANGE *DataRanges; // rsi
  union KSDATAFORMAT *v16; // r15
  int v17; // eax
  void *v18; // r8
  int v20; // [rsp+A0h] [rbp+8h]
  union KSDATAFORMAT **v21; // [rsp+A8h] [rbp+10h]
  unsigned int v22; // [rsp+B0h] [rbp+18h]
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+B8h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v7 = a3;
  v8 = 0;
  v9 = a2;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
  {
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    a4 = v23;
    v7 = v22;
    v9 = v21;
  }
  v11 = 0;
  v20 = 0;
  v12 = 0;
  v13 = 0;
  *a6 = 0;
  while ( v13 < v7 )
  {
    for ( i = 0; i < a4->PinDescriptor.DataRangesCount; i += ((DataRanges[i]->Flags & 2) != 0) + 1 )
    {
      DataRanges = a4->PinDescriptor.DataRanges;
      v16 = v9[v13];
      v17 = PinValidateDataFormat(a4, DataRanges[i], v16);
      v8 = v17;
      if ( v17 < 0 )
      {
        if ( v17 != -1073741198 )
          goto LABEL_25;
      }
      else
      {
        if ( a5 )
        {
          LODWORD(a2) = v20;
          if ( *a7 >= v16->FormatSize + v20 )
          {
            memmove(&a5[v20], v16, v16->FormatSize);
            DataRanges = v23->PinDescriptor.DataRanges;
            v16 = v21[v13];
            LODWORD(a2) = v16->FormatSize + v20;
            v20 = (int)a2;
          }
        }
        ++v11;
        v12 += v16->FormatSize;
      }
      a4 = v23;
      v9 = v21;
    }
    v7 = v22;
    ++v13;
  }
  if ( v11 )
  {
    v8 = 0;
    *a6 = v11;
    *a7 = v12;
  }
LABEL_25:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)a2 || v10 )
  {
    v18 = &WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids;
    LOBYTE(v18) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v18,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return v8;
}
