/*
 * XREFs of PiGetStateRootPath @ 0x140871470
 * Callers:
 *     PiCreateDriverRedirectedStateKey @ 0x1408713CC (PiCreateDriverRedirectedStateKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14087C220 (PiOpenDriverRedirectedStateKey.c)
 *     IoGetDeviceDirectory @ 0x140955010 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x140956044 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x140956368 (PiOpenDriverRedirectedStateRootKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6C0 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1406C53D0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiGetStateRootPath(PCWSTR SourceString, _WORD *a2, unsigned int a3, UNICODE_STRING *a4)
{
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  unsigned int v11; // ebx
  void *Pool2; // rdi
  int v13; // eax
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return (unsigned int)-1073741811;
  LODWORD(v14) = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, a2, a3, 0LL, 0, (unsigned int *)&v14);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
    return (unsigned int)-1073741823;
  if ( PersistedStateLocation == -2147483643 )
  {
    v11 = v14;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v14, 1869181008LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v13 = RtlGetPersistedStateLocation(SourceString, 0LL, a2, a3, Pool2, v11, (unsigned int *)&v14);
    inited = v13;
    if ( v13 == -1073741772 )
    {
      inited = -1073741595;
    }
    else if ( v13 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(a4, (PCWSTR)Pool2);
      if ( inited >= 0 )
        return (unsigned int)inited;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)inited;
}
