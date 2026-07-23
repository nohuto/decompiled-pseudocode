/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140B6C1F8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x14041E1A0 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 */

NTSTATUS __fastcall PipUnloadEarlyLaunchDrivers(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING *v2; // rdi
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-30h] BYREF

  result = 0;
  v2 = a1 + 4;
  *(&TargetKey.Attributes + 1) = 0;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(&TargetKey.Length + 1) = 0;
  DestinationString = 0LL;
  if ( v3 != &a1[4] )
  {
    do
    {
      v4 = v3;
      v3 = *(UNICODE_STRING **)&v3->Length;
      if ( SLODWORD(v4[3].Buffer) >= 0 )
        IopUnloadDriver(v4 + 2, 1);
    }
    while ( v3 != v2 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}
