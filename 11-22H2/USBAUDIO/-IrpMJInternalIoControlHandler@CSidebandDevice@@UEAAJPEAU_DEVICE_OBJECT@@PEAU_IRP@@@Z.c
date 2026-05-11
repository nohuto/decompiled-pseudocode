/*
 * XREFs of ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00103F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJInternalIoControlHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  struct _IRP *v3; // rsi
  char v5; // di
  char v6; // dl
  unsigned int LowPart; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  bool v11; // zf
  unsigned int v12; // ecx
  bool v13; // zf
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int inserted; // ebx
  int v20; // edx
  int v21; // r8d

  v3 = a3;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( v6 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v6, (_DWORD)a3, WPP_GLOBAL_Control->DeviceExtension);
  LowPart = v3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart > 0x220037 )
  {
    if ( LowPart > 0x22004F )
    {
      v18 = LowPart - 2228307;
      if ( !v18 )
        goto LABEL_33;
      v17 = v18 - 12;
      v16 = v17 == 0;
      goto LABEL_28;
    }
    if ( LowPart == 2228303 )
      goto LABEL_33;
    v14 = LowPart - 2228283;
    v13 = v14 == 0;
LABEL_20:
    if ( v13 )
      goto LABEL_33;
    v15 = v14 - 4;
    if ( !v15 )
      goto LABEL_33;
    v17 = v15 - 4;
    v16 = v17 == 0;
LABEL_28:
    if ( !v16 )
    {
      v12 = v17 - 4;
      v11 = v12 == 0;
      goto LABEL_30;
    }
LABEL_33:
    inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), v3, 0LL, (char *)this + 64);
    goto LABEL_34;
  }
  if ( LowPart == 2228279 )
    goto LABEL_33;
  if ( LowPart > 0x22001F )
  {
    v14 = LowPart - 2228259;
    v13 = v14 == 0;
    goto LABEL_20;
  }
  if ( LowPart == 2228255 )
    goto LABEL_33;
  v8 = LowPart - 2228231;
  if ( !v8 )
    goto LABEL_33;
  v9 = v8 - 4;
  if ( !v9 )
    goto LABEL_33;
  v10 = v9 - 4;
  if ( !v10 )
    goto LABEL_33;
  v12 = v10 - 8;
  v11 = v12 == 0;
LABEL_30:
  if ( v11 || v12 == 4 )
    goto LABEL_33;
  inserted = -1073741822;
  v3->IoStatus.Information = 0LL;
  v3->IoStatus.Status = -1073741822;
  IofCompleteRequest(v3, 0);
LABEL_34:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v20 || v5 )
  {
    LOBYTE(v21) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v20, v21, WPP_GLOBAL_Control->DeviceExtension);
  }
  return inserted;
}
