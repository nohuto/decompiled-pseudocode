/*
 * XREFs of ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C000DBB8
 * Callers:
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C000C680 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::GetFilterInstance(CSidebandDevice *this, void **a2)
{
  void **v2; // rsi
  char v4; // di
  char v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  NTSTATUS DeviceInterfaces; // ebx
  __int64 v9; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PZZWSTR v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+F0h] [rbp+67h] BYREF
  void *FileHandle; // [rsp+F8h] [rbp+6Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  v2 = a2;
  SymbolicLinkList = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v5, WPP_GLOBAL_Control->DeviceExtension);
  v6 = *((_QWORD *)this + 4);
  *v2 = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(
                       &USBSIDEBANDAUDIO_KSCATEGORY_AUDIO,
                       *(PDEVICE_OBJECT *)(v6 + 32),
                       0,
                       &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_19:
      WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v7, v9, (_DWORD)DeviceExtension);
      goto LABEL_42;
    }
    goto LABEL_42;
  }
  v12 = SymbolicLinkList;
  if ( !SymbolicLinkList )
  {
    DeviceInterfaces = -1073741811;
    goto LABEL_56;
  }
  LODWORD(v9) = 512;
  v7 = 512LL;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v7;
  }
  while ( v7 );
  DeviceInterfaces = v7 == 0 ? 0xC000000D : 0;
  if ( !v7 )
  {
LABEL_56:
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
LABEL_32:
    DeviceExtension = v13->DeviceExtension;
    AttachedDevice = v13->AttachedDevice;
    goto LABEL_19;
  }
  v9 = 2 * (512 - v7);
  v7 = -v7;
  if ( (-(__int64)(v7 != 0) & v9) == 0 )
  {
    DeviceInterfaces = -1073741275;
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    goto LABEL_32;
  }
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DeviceInterfaces = ZwCreateFile(
                       &FileHandle,
                       0xC0000000,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0x80u,
                       3u,
                       3u,
                       0,
                       0LL,
                       0);
  if ( DeviceInterfaces >= 0 )
  {
    *v2 = FileHandle;
    goto LABEL_42;
  }
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v7) = 0;
  }
  LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    goto LABEL_32;
LABEL_42:
  if ( SymbolicLinkList )
  {
    ExFreePool(SymbolicLinkList);
    SymbolicLinkList = 0LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v7 || v4 )
  {
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v7, v9, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)DeviceInterfaces;
}
