/*
 * XREFs of IopIsBitlockerOn @ 0x1403DD580
 * Callers:
 *     IopInitDumpCapsuleSupport @ 0x1403DD52C (IopInitDumpCapsuleSupport.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1406DE960 (IopOpenRegistryKey.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool IopIsBitlockerOn()
{
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-28h]
  UNICODE_STRING v3; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h]

  P = 0LL;
  Handle = 0LL;
  v0 = 1;
  v3 = 0LL;
  RtlInitUnicodeString(&v3, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\BitlockerStatus");
  v2 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &v3, 131097LL, v2) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( *((_DWORD *)P + 3) )
        v0 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
    ObCloseHandle(Handle, 0);
  }
  return v0 == 1;
}
