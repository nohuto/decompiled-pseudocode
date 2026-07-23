/*
 * XREFs of PiGetStateRootPath @ 0x140871940
 * Callers:
 *     PiCreateDriverRedirectedStateKey @ 0x14087189C (PiCreateDriverRedirectedStateKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14087C6F0 (PiOpenDriverRedirectedStateKey.c)
 *     IoGetDeviceDirectory @ 0x1409550C0 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x1409560F4 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x140956418 (PiOpenDriverRedirectedStateRootKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6CFB4 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5480 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiGetStateRootPath(
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
