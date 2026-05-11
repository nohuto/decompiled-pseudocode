/*
 * XREFs of ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C000A924
 * Callers:
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C00094E0 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetFilterInstance(CSidebandDevice *this, void **a2)
{
  char v4; // di
  char v5; // dl
  char v6; // r8
  __int64 v7; // rdx
  NTSTATUS DeviceInterfaces; // ebx
  char v9; // dl
  PZZWSTR v10; // rcx
  __int64 v11; // rdx
  PDEVICE_OBJECT v12; // rcx
  char v13; // dl
  char v14; // r8
  unsigned __int16 v15; // ax
  char v16; // dl
  int AllocationSize; // [rsp+20h] [rbp-69h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+F0h] [rbp+67h] BYREF
  void *FileHandle; // [rsp+F8h] [rbp+6Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  SymbolicLinkList = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v5 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      AllocationSize,
      9u,
      0x4Au,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  v7 = *((_QWORD *)this + 5);
  *a2 = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(
                       &USBSIDEBANDAUDIO_KSCATEGORY_AUDIO,
                       *(PDEVICE_OBJECT *)(v7 + 32),
                       0,
                       &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v9 = 0;
    }
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        AllocationSize,
        9u,
        0x4Bu,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    goto LABEL_42;
  }
  v10 = SymbolicLinkList;
  if ( !SymbolicLinkList )
  {
    DeviceInterfaces = -1073741811;
    goto LABEL_56;
  }
  v11 = 512LL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v11;
  }
  while ( v11 );
  DeviceInterfaces = v11 == 0 ? 0xC000000D : 0;
  if ( !v11 )
  {
LABEL_56:
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = 76;
      goto LABEL_32;
    }
    goto LABEL_42;
  }
  if ( (-(__int64)(v11 != 0) & (2 * (512 - v11))) != 0 )
  {
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
      *a2 = FileHandle;
      goto LABEL_42;
    }
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = 78;
      goto LABEL_32;
    }
  }
  else
  {
    DeviceInterfaces = -1073741275;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = 77;
LABEL_32:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v12->AttachedDevice,
        v13,
        v14,
        (__int64)v12->DeviceExtension,
        AllocationSize,
        9u,
        v15,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
LABEL_42:
  if ( SymbolicLinkList )
  {
    ExFreePool(SymbolicLinkList);
    SymbolicLinkList = 0LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v16 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( v16 || v4 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v4,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      AllocationSize,
      9u,
      0x4Fu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)DeviceInterfaces;
}
