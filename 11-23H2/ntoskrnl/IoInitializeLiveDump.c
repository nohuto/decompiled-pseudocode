/*
 * XREFs of IoInitializeLiveDump @ 0x1403AEE40
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     IopOpenRegistryKey @ 0x1407CF1EC (IopOpenRegistryKey.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     MmQueryMemoryRanges @ 0x14085D7C0 (MmQueryMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void IoInitializeLiveDump()
{
  char v0; // [rsp+20h] [rbp-60h]
  _QWORD v1[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v2[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v3; // [rsp+60h] [rbp-20h]
  PVOID v4; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+10h] BYREF
  PVOID P; // [rsp+98h] [rbp+18h]

  Handle = 0LL;
  P = 0LL;
  v1[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceGuard";
  v1[0] = 8257660LL;
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C03870);
  v0 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, v1, 131097LL, v0) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
      ExFreePoolWithTag(P, 0);
    ObCloseHandle(Handle, 0);
  }
  v2[2] = 0LL;
  v2[0] = 0xF00000001LL;
  v3 = 0LL;
  v2[3] = 0x40000000LL;
  v2[1] = -2LL;
  LODWORD(v3) = 0x80000000;
  v4 = 0LL;
  if ( (int)MmQueryMemoryRanges(v2) >= 0 && *((_QWORD *)&v3 + 1) )
  {
    IOSpaceEnabled = 1;
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
}
