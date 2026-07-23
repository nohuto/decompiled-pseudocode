/*
 * XREFs of IopCreateArcNames @ 0x140B3A004
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140374BCC (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     IopCreateArcNamesDisk @ 0x140B39A64 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 */

__int64 __fastcall IopCreateArcNames(__int64 a1)
{
  const char *v1; // r9
  __int64 v3; // rbx
  void *Pool2; // rax
  __int64 result; // rax
  STRING DestinationString; // [rsp+20h] [rbp-B8h] BYREF
  STRING v7; // [rsp+30h] [rbp-A8h] BYREF
  char pszDest[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(const char **)(a1 + 192);
  DestinationString = 0LL;
  v7 = 0LL;
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", v1);
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcHalDeviceName, &DestinationString, 1u);
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcBootDeviceName, &DestinationString, 1u);
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v3) );
  Pool2 = (void *)ExAllocatePool2(256LL, v3 + 1, 0x344E6F49u);
  IoLoaderArcBootDeviceName = (__int64)Pool2;
  if ( Pool2 )
    memmove(Pool2, *(const void **)(a1 + 184), v3 + 1);
  RtlInitAnsiString(&v7, *(PCSZ *)(a1 + 192));
  result = IopCreateArcNamesDisk();
  if ( (int)result >= 0 )
    return IopCreateArcNamesCd(a1);
  return result;
}
