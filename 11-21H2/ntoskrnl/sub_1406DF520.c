/*
 * XREFs of sub_1406DF520 @ 0x1406DF520
 * Callers:
 *     sub_1406DF254 @ 0x1406DF254 (sub_1406DF254.c)
 *     sub_1406DF440 @ 0x1406DF440 (sub_1406DF440.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     sub_140944218 @ 0x140944218 (sub_140944218.c)
 *     sub_140944554 @ 0x140944554 (sub_140944554.c)
 *     sub_140B286CC @ 0x140B286CC (sub_140B286CC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406DF520(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  NTSTATUS v13; // eax
  ULONG BufferLengthOut; // [rsp+78h] [rbp+20h] BYREF

  if ( !DestinationString )
    return (unsigned int)-1073741811;
  BufferLengthOut = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             SourceID,
                             0LL,
                             DefaultPath,
                             StateLocationType,
                             0LL,
                             0,
                             &BufferLengthOut);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
    return (unsigned int)-1073741823;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(256LL, BufferLengthOut, 1869181008LL);
    if ( !TargetPath )
      return (unsigned int)-1073741670;
    v13 = RtlGetPersistedStateLocation(
            SourceID,
            0LL,
            DefaultPath,
            StateLocationType,
            TargetPath,
            BufferLengthIn,
            &BufferLengthOut);
    inited = v13;
    if ( v13 == -1073741772 )
    {
      inited = -1073741595;
    }
    else if ( v13 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
      if ( inited >= 0 )
        return (unsigned int)inited;
    }
    ExFreePoolWithTag(TargetPath, 0);
  }
  return (unsigned int)inited;
}
