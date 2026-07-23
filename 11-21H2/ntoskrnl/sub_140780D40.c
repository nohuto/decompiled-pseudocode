/*
 * XREFs of sub_140780D40 @ 0x140780D40
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ExGetPreviousMode @ 0x1402DFD50 (ExGetPreviousMode.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     sub_140A34148 @ 0x140A34148 (sub_140A34148.c)
 */

__int64 __fastcall sub_140780D40(int a1, void *a2)
{
  ULONG v3; // edi
  int v4; // ecx
  unsigned int v5; // ebx
  PIRP v6; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+27h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+77h] BYREF
  PFILE_OBJECT FileObject; // [rsp+C8h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a1 >= 12 )
    return (unsigned int)-1073741811;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v3 = (4 * a1) | 0x220003;
  if ( a1 == 9 )
    return (unsigned int)sub_140A34148(a2);
  if ( a1 <= 5 )
  {
    if ( a1 != 5 )
    {
      if ( !a1 )
        goto LABEL_5;
      v9 = a1 - 1;
      if ( !v9 )
        goto LABEL_15;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_15;
      v14 = v10 - 1;
      v13 = v14 == 0;
LABEL_19:
      if ( !v13 )
      {
        if ( v14 == 1 )
          goto LABEL_21;
        return (unsigned int)-1073741811;
      }
LABEL_15:
      v5 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = a1 - 6;
    if ( !v4 )
    {
LABEL_5:
      v5 = -1073741275;
      goto LABEL_6;
    }
    v11 = v4 - 1;
    if ( !v11 )
      goto LABEL_15;
    v12 = v11 - 1;
    if ( v12 )
    {
      v14 = v12 - 2;
      v13 = v14 == 0;
      goto LABEL_19;
    }
  }
LABEL_21:
  v5 = -1073741823;
LABEL_6:
  if ( ::DeviceObject )
  {
LABEL_7:
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(v3, ::DeviceObject, a2, 0x188u, 0LL, 0, 0, &Event, &IoStatusBlock);
    if ( !v6 )
      return (unsigned int)-1073741823;
    v6->RequestorMode = ExGetPreviousMode();
    return (unsigned int)IofCallDriver(::DeviceObject, v6);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"\\Device\\ahcache") >= 0
    && IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&::DeviceObject, (signed __int64)DeviceObject, 0LL) )
      ObfDereferenceObject(FileObject);
    goto LABEL_7;
  }
  return v5;
}
