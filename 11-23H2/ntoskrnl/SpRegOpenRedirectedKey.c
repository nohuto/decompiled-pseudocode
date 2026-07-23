/*
 * XREFs of SpRegOpenRedirectedKey @ 0x14085DC10
 * Callers:
 *     ExpOsProductCacheProviderHelper @ 0x14085DB64 (ExpOsProductCacheProviderHelper.c)
 *     sub_1409FA32C @ 0x1409FA32C (sub_1409FA32C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     SpRegOpenKey @ 0x14085DCD4 (SpRegOpenKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SpRegOpenRedirectedKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING *p_DestinationString; // rcx
  void *v8; // rcx
  ULONG BufferLengthIn; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  void *v12; // [rsp+70h] [rbp+20h] BYREF
  ULONG BufferLengthOut; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+7Ch] [rbp+2Ch]

  v14 = HIDWORD(a2);
  v12 = 0LL;
  TargetPath = 0LL;
  BufferLengthOut = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             off_140D53670,
                             L"TargetNtPath",
                             0LL,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             &BufferLengthOut);
  v6 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(256LL, BufferLengthOut, 542329939LL);
    if ( !TargetPath )
      return (unsigned int)-1073741801;
    v6 = RtlGetPersistedStateLocation(
           off_140D53670,
           L"TargetNtPath",
           0LL,
           LocationTypeRegistry,
           TargetPath,
           BufferLengthIn,
           &BufferLengthOut);
    if ( v6 < 0 )
    {
LABEL_17:
      ExFreePoolWithTag(TargetPath, 0x20534C53u);
      return (unsigned int)v6;
    }
    RtlInitUnicodeString(&DestinationString, TargetPath);
    p_DestinationString = &DestinationString;
  }
  else
  {
    if ( PersistedStateLocation != -1073741772 )
    {
      if ( PersistedStateLocation < 0 )
        return (unsigned int)v6;
      goto LABEL_5;
    }
    p_DestinationString = (UNICODE_STRING *)&unk_140D53658;
  }
  v6 = SpRegOpenKey(p_DestinationString, &v12);
  if ( v6 >= 0 )
  {
LABEL_5:
    v8 = 0LL;
    *a3 = v12;
    goto LABEL_6;
  }
  v8 = v12;
LABEL_6:
  if ( v8 )
    ZwClose(v8);
  if ( TargetPath )
    goto LABEL_17;
  return (unsigned int)v6;
}
